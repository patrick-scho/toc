#pragma once

#include "repr.h"

struct TypeInfo
{
  Type type;
  bool isStruct;
};

#include "find.h"

TypeInfo typeType(const Program & p, Type t)
{
  TypeInfo result;
  result.isStruct = true;
  if (t.name == "int" || t.name == "float" || t.name == "double" ||
      t.name == "char" || t.name == "long" || t.name == "short" || t.name == "bool")
  {
    result.isStruct = false;
  }
  result.type = t;
  return result;
}

TypeInfo typeExpr(const Program & p, const std::vector<std::string> & globalNamespace, std::shared_ptr<Context> globalCtx, Expr e)
{
  TypeInfo result;

  switch (e.type)
  {
  case ExprType::Func:
  {
    auto namespacePrefixes = globalNamespace;
    namespacePrefixes.insert(namespacePrefixes.end(),
      e._func.namespacePrefixes.begin(),
      e._func.namespacePrefixes.end());
    auto f = findFunction(p, e._func.functionName, namespacePrefixes);
    if (!f.has_value())
      throw "Unknown function";
    result = typeType(p, f.value().returnType);
    break;
  }
  case ExprType::Method:
  {
    TypeInfo tiCaller = typeExpr(p, globalNamespace, globalCtx, *e._method.expr);
    auto m = findStructMethod(p, e._method.methodName, tiCaller);
    if (!m.has_value())
      throw "Unknown method";
    result = typeType(p, m.value().returnType);
    break;
  }
  case ExprType::Lit:
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
    result = typeExpr(p, globalNamespace, globalCtx, *e._paren.expr);
    break;
  case ExprType::Dot:
  {
    auto sm = findStructMember(p,
        typeExpr(p, globalNamespace, globalCtx, *e._dot.expr), e._dot.identifier);
    if (!sm.has_value())
      throw "Unknown struct member";
    result = typeType(p, sm.value().type);
    break;
  }
  case ExprType::PrefixOp:
    result = typeExpr(p, globalNamespace, globalCtx, *e._prefixOp.expr);
    break;
  case ExprType::PostfixOp:
    result = typeExpr(p, globalNamespace, globalCtx, *e._postfixOp.expr);
    break;
  case ExprType::BinaryOp:
    result = typeExpr(p, globalNamespace, globalCtx, *e._binaryOp.lexpr);
    break;
  case ExprType::TernaryOp:
    result = typeExpr(p, globalNamespace, globalCtx, *e._ternaryOp.rexprTrue);
    break;
  case ExprType::Bracket:
  {
    TypeInfo ti = typeExpr(p, globalNamespace, globalCtx, *e._brackets.lexpr);
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
    auto namespacePrefixes = globalNamespace;
    namespacePrefixes.insert(namespacePrefixes.end(),
      e._identifier.namespacePrefixes.begin(),
      e._identifier.namespacePrefixes.end());
    auto v = findVariable(p, e._identifier.identifier, globalCtx);
    if (!v.has_value())
      throw "Unknown variable";
    result = typeType(p, v.value().type);
    break;
  }
  }

  return result;
}