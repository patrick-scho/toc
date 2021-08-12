#pragma once

#include "repr.h"

struct TypeInfo
{
  Type type;
  bool isStruct;
};

#include "find.h"

TypeInfo typeType(std::shared_ptr<Context> globalCtx, Type t)
{
  // used to differentiate basic types from user defined types
  TypeInfo result;
  result.isStruct = true;
  if (t.name == "int" || t.name == "float" || t.name == "double" ||
      t.name == "char" || t.name == "long" || t.name == "short" || t.name == "bool" ||
      t.name == "void")
  {
    result.isStruct = false;
  }
  result.type = t;

  return result;
}

TypeInfo typeExpr(std::shared_ptr<Context> globalCtx, Expr e)
{
  TypeInfo result;

  switch (e.type)
  {
  case ExprType::Func:
  {
    // get type info from return type
    auto f = findFunction(e._func.functionName, e._func.namespacePrefixes, globalCtx);
    if (!f.has_value())
      throw "Unknown function";
    result = typeType(globalCtx, std::get<0>(*f).returnType);
    break;
  }
  case ExprType::Method:
  {
    // get type info from return type
    TypeInfo tiCaller = typeExpr(globalCtx, *e._method.expr);
    if (!tiCaller.isStruct)
      throw "Calling method on non-struct";
    auto s = findStruct(tiCaller.type.name, tiCaller.type.namespacePrefixes, globalCtx);
    if (!s.has_value())
      throw "Calling method on unknown struct";
    auto m = findStructMethod(e._method.methodName, std::get<0>(*s));
    if (!m.has_value())
      throw "Unknown method";
    result = typeType(globalCtx, m->t.returnType);
    break;
  }
  case ExprType::Lit:
    // literal types are defined
    result.isStruct = false;
    switch (e._lit.type)
    {
    case LitType::Bool:    result.type.name = "bool"; break;
    case LitType::Int:     result.type.name = "int"; break;
    case LitType::Decimal: result.type.name = "double"; break;
    case LitType::String:  result.type.name = "char"; result.type.modifiers.push_back({ TypeModifierType::Pointer, false, -1 }); break;
    }
    break;
  case ExprType::Paren:
    result = typeExpr(globalCtx, *e._paren.expr);
    break;
  case ExprType::Dot:
  {
    // assume dot access is always member access
    // and lookup struct variable
    auto tiCaller = typeExpr(globalCtx, *e._dot.expr);
    if (!tiCaller.isStruct)
      throw "Accessing member of non-struct";
    auto s = findStruct(tiCaller.type.name, tiCaller.type.namespacePrefixes, globalCtx);
    if (!s.has_value())
      throw "Calling method on unknown struct";
    auto sm = findStructMember(e._dot.identifier, std::get<0>(*s));
    if (!sm.has_value())
      throw "Unknown struct member";
    result = typeType(globalCtx, sm->t.type);
    break;
  }
  case ExprType::PrefixOp:
    result = typeExpr(globalCtx, *e._prefixOp.expr);
    break;
  case ExprType::PostfixOp:
    result = typeExpr(globalCtx, *e._postfixOp.expr);
    break;
  case ExprType::BinaryOp:
    result = typeExpr(globalCtx, *e._binaryOp.lexpr);
    break;
  case ExprType::TernaryOp:
    result = typeExpr(globalCtx, *e._ternaryOp.rexprTrue);
    break;
  case ExprType::Bracket:
  {
    // get type of expr and remove array/ptr modifier to get
    // type of [] access
    TypeInfo ti = typeExpr(globalCtx, *e._brackets.lexpr);
    if (!ti.type.modifiers.empty())
    {
      result = ti;
      result.type.modifiers.pop_back();
    }
    else
    {
      throw "Indexing non-array";
    }
  }
  case ExprType::Identifier:
  {
    // var lookup and return var type
    auto v = findVariable(e._identifier.identifier, e._identifier.namespacePrefixes, globalCtx);
    if (!v.has_value())
      throw "Unknown variable";
    result = typeType(globalCtx, std::get<0>(*v).type);
    break;
  }
  }

  return result;
}