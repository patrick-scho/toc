#pragma once

#include <iostream>
#include <sstream>

#include "repr.h"
#include "generic.h"
#include "typeInfo.h"

template<typename T>
std::string vectorStr (const std::vector<T> & v, const std::string & separator, bool end = false)
{
  std::stringstream sstr;

  bool putSeparator = false;
  for (auto t : v)
  {
    if (putSeparator) sstr << separator;
    else putSeparator = true;
    sstr << t;
  }
  if (end && !v.empty())
    sstr << separator;

  return sstr.str();
}

std::ostream & operator<< (std::ostream & out, const Type & t);
std::ostream & operator<< (std::ostream & out, const Variable & v);
std::ostream & operator<< (std::ostream & out, const Body & b);
std::ostream & operator<< (std::ostream & out, const Expr & e);
std::ostream & operator<< (std::ostream & out, const Stmt & s);

void tocFunction (std::ostream & out, const Function & f, bool stub);
void tocStruct   (std::ostream & out, const Struct & s, bool stub);
void tocProgram  (std::ostream & out, const Program & p);
void tocNamespace  (std::ostream & out, const Namespace & n, bool stub);

static const int TAB_WIDTH = 2;
static int indentation = 0;
static void indent(std::ostream & out, int change = 0)
{
  indentation += change;
  out << std::string(indentation, ' ');
}

static std::vector<std::string> namespaces;
static std::string namespacePrefix() {
  std::stringstream sstr;
  for (auto n : namespaces)
  {
    sstr << n << "_";
  }
  return sstr.str();
}

static std::map<std::string, Type> currentInstantiation;

static Program globalPrg;
static std::shared_ptr<Context> globalCtx;



// std::string getPrefix(std::shared_ptr<Context> ctx)
// {
//   std::string result;
//   for (auto it = ctx; it != nullptr; it = it->parent)
//   {
//     if (it->name.has_value())
//     {
//       result = it->name.value() + "_" + result;
//     }
//   }
//   return result;
// }

std::ostream & operator<< (std::ostream & out, const Type & t)
{
  for (auto kv : currentInstantiation)
  {
    if (t.name == kv.first)
    {
      out << kv.second;
      return out;
    }
  }
  TypeInfo ti = typeType(globalPrg, t);
  if (ti.isStruct)
    out << "struct ";
  auto s = findStruct(t.name, t.namespacePrefixes, globalCtx);
  if (s.has_value())
    out << vectorStr(std::get<1>(*s), "_", true) << t.name; 
  else
    out << vectorStr(t.namespacePrefixes, "_", true) << t.name;
  if (!t.genericInstantiation.empty())
    out << genericAppendix(t.genericInstantiation);

  return out;
}
std::ostream & operator<< (std::ostream & out, const Variable & v)
{
  out << v.type << " ";

  std::stringstream sstr;
  std::string s = v.name;
  
  auto var = findVariable(v.name, namespaces, globalCtx);
  if (var.has_value())
    s = vectorStr(std::get<1>(*var), "_", true) + s;

  for (auto m = v.type.modifiers.rbegin(); m != v.type.modifiers.rend(); m++)
  {
    if (m->type == TypeModifierType::Pointer)
    {
      sstr.str(std::string());
      sstr << "*(" << s << ")";
      s = sstr.str();
    }
    else
    {
      sstr.str(std::string());
      sstr << "(" << s << ")[";
      if (m->_staticArray)
        sstr << m->_arraySize;
      sstr << "]";
      s = sstr.str();
    }
  }
  out << s;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Body & b)
{
  b.ctx->parent = globalCtx;
  globalCtx = b.ctx;

  indent(out);
  out << "{\n";
  indentation += 2;

  for (auto v : b.ctx->variables)
  {
    indent(out);
    out << v << ";\n";
  }

  out << "\n";
  
  for (auto s : b.statements)
  {
    indent(out);
    out << s << "\n";
  }

  indent(out, -2);
  out << "}\n";

  globalCtx = b.ctx->parent;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Expr & e)
{
  switch (e.type)
  {
  case ExprType::Func:
  {
    auto f = findFunction(e._func.functionName, e._func.namespacePrefixes, globalCtx);

    if (std::get<0>(*f).defined)
      out << vectorStr(std::get<1>(*f), "_", true);

    out << e._func.functionName;
    if (!e._func.genericInstantiation.empty())
      out << genericAppendix(e._func.genericInstantiation);
    out <<"(" << vectorStr(e._func.arguments, ", ") << ")"; break;
  }
  case ExprType::Method:
  {
    TypeInfo ti = typeExpr(globalPrg, globalCtx, *e._method.expr);
    out <<
      vectorStr(ti.type.namespacePrefixes, "_", true) <<
      ti.type.name << genericAppendix(ti.type.genericInstantiation) << "_" << e._method.methodName;
    if (!e._method.genericInstantiation.empty())
      out << genericAppendix(e._method.genericInstantiation);
    out << "(&" << *e._method.expr << (e._method.arguments.empty() ? "" : ", ") <<
    vectorStr(e._method.arguments, ", ") << ")"; break;
  }
  case ExprType::Lit:
    /**/ if (e._lit.type == LitType::Int) out << e._lit._int;
    else if (e._lit.type == LitType::Decimal) out << e._lit._decimal;
    else if (e._lit.type == LitType::String) out << e._lit._string;
    else if (e._lit.type == LitType::Bool) out << e._lit._bool;
    break;
  case ExprType::Paren:
    out << "(" << e._paren.expr << ")"; break;
  case ExprType::Dot:
    out << *e._dot.expr << (e._dot.isPointer ? "->" : ".") << e._dot.identifier; break;
  case ExprType::PrefixOp:
    out << PrefixOperatorTypeStrings[(int)e._prefixOp.type] << *e._prefixOp.expr; break;
  case ExprType::PostfixOp:
    out << *e._postfixOp.expr << PostfixOperatorTypeStrings[(int)e._postfixOp.type]; break;
  case ExprType::BinaryOp:
    out << *e._binaryOp.lexpr <<
    " " << BinaryOperatorTypeStrings[(int)e._binaryOp.type] << " " <<
    *e._binaryOp.rexpr; break;
  case ExprType::TernaryOp:
    out << *e._ternaryOp.lexpr <<
      " ? " << *e._ternaryOp.rexprTrue <<
      " : " << *e._ternaryOp.rexprFalse; break;
  case ExprType::Bracket:
    out << *e._brackets.lexpr << "[" << *e._brackets.rexpr << "]"; break;
  case ExprType::Identifier:
    auto v = findVariable(e._identifier.identifier, e._identifier.namespacePrefixes, globalCtx);
    if (v.has_value())
      out << vectorStr(std::get<1>(*v), "_", true);
    else
      out << vectorStr(e._identifier.namespacePrefixes, "_", true);

    out << e._identifier.identifier; break;
  }

  return out;
}
std::ostream & operator<< (std::ostream & out, const Stmt & s)
{
  switch (s.type)
  {
  case StmtType::If:
    out << "if (" << s._if.condition << ")\n" << s._if.body; break;
  case StmtType::Switch:
    out << "switch (" << s._switch.ident << ")\n{\n";
    for (auto c : s._switch.cases)
    {
      indent(out, 2);
      out << "case " << *c.expr << ": " << c.body << "break;";
    }
    indent(out, -2);
    out << "}\n";
    break;
  case StmtType::For:
    out << "for (" <<
      s._for.init << "; " <<
      *s._for.condition << "; " <<
      *s._for.action <<
      ")\n" << s._for.body; break;
  case StmtType::While:
    out << "while (" << s._while.condition << ")\n" << s._while.body; break;
  case StmtType::Assign:
    out << s._assign.lexpr << " = " << s._assign.rexpr << ";"; break;
  case StmtType::Return:
    out << "return " << s._return.expr << ";"; break;
  case StmtType::Expr:
    out << s._expr << ";"; break;
  }

  return out;
}


void tocFunction (std::ostream & out, const Function & f, bool stub)
{
  if (!stub && !f.defined) return;

  if (f.genericTypeNames.empty())
  {
    out << f.returnType << " " << namespacePrefix() << f.name << " (" << vectorStr(f.parameters, ", ") << ")";

    if (stub)
    {
      out << ";\n";
    }
    else
    {
      out << "\n" << f.body;
    }
  }
  else
  {
    for (auto instantiation : f.genericInstantiations)
    {
      for (int i = 0; i < f.genericTypeNames.size(); i++)
      {
        currentInstantiation[f.genericTypeNames[i]] = instantiation[i];
      }

      out << f.returnType << " " << namespacePrefix() << f.name << genericAppendix(instantiation) << " (" << vectorStr(f.parameters, ", ") << ")";

      if (stub)
      {
        out << ";\n";
      }
      else
      {
        out << "\n" << f.body;
      }

      currentInstantiation.clear();
    }
  }
}
void tocStruct (std::ostream & out, const Struct & s, bool stub)
{
  if (s.genericTypeNames.empty())
  {
    out << "struct " << namespacePrefix() << s.name;
    if (stub)
    {
      out << ";\n";
      for (auto m : s.methods)
      {
        Function f = m;

        f.parameters.insert(f.parameters.begin(),
        {"this",
          {
            namespaces,
            s.name,
            {
              {TypeModifierType::Pointer, false, -1}
            }
          }
        });
        out << f.returnType << " " <<
          namespacePrefix() << s.name << "_" << f.name <<
          " (" << vectorStr(f.parameters, ", ") << ");\n";
      }
      return;
    }
    out << "\n{\n";
    indentation += 2;

    for (auto m : s.members)
    {
      indent(out);
      out << m << ";\n";
    }

    indent(out, -2);
    out << "};\n";
    
    for (auto m : s.methods)
    {
      Function f = m;
      f.parameters.insert(f.parameters.begin(),
        {"this",
          {
            namespaces,
            s.name,
            {
              {TypeModifierType::Pointer, false, -1}
            }
          }
        });
      out << f.returnType << " " <<
      namespacePrefix() << s.name << "_" << f.name <<
      " (" << vectorStr(f.parameters, ", ") << ")\n" << f.body;
    }
  }
  else
  {
    for (auto instantiation : s.genericInstantiations)
    {
      for (int i = 0; i < s.genericTypeNames.size(); i++)
      {
        currentInstantiation[s.genericTypeNames[i]] = instantiation[i];
      }

      out << "struct " << namespacePrefix() << s.name << genericAppendix(instantiation);
      if (stub)
      {
        out << ";\n";
        for (auto m : s.methods)
        {
          Function f = m;

          f.parameters.insert(f.parameters.begin(),
          {"this",
            {
              namespaces,
              s.name + genericAppendix(instantiation),
              {
                {TypeModifierType::Pointer, false, -1}
              }
            }
          });
          out << f.returnType << " " <<
            namespacePrefix() << s.name << genericAppendix(instantiation) << "_" << f.name <<
            " (" << vectorStr(f.parameters, ", ") << ");\n";
        }
        return;
      }
      out << "\n{\n";
      indentation += 2;

      for (auto m : s.members)
      {
        indent(out);
        out << m << ";\n";
      }

      indent(out, -2);
      out << "};\n";
      
      for (auto m : s.methods)
      {
        Function f = m;
        f.parameters.insert(f.parameters.begin(),
          {"this",
            {
              namespaces,
              s.name + genericAppendix(instantiation),
              {
                {TypeModifierType::Pointer, false, -1}
              }
            }
          });
        out << f.returnType << " " <<
        namespacePrefix() << s.name << genericAppendix(instantiation) << "_" << f.name <<
        " (" << vectorStr(f.parameters, ", ") << ")\n" << f.body;
      }

      currentInstantiation.clear();
    }
  }
}
void tocProgram (std::ostream & out, const Program & p)
{
  globalCtx = p.ctx;

  globalPrg = p;
  for (auto n : p.ctx->namespaces)
  {
    tocNamespace(out, n, true);
  }
  out << "\n\n";
  for (auto s : p.ctx->structs)
  {
    tocStruct(out, s, true);
  }
  out << "\n\n";
  for (auto f : p.ctx->functions)
  {
    tocFunction(out, f, true);
  }
  out << "\n\n";

  for (auto v : p.ctx->variables)
  {
    out << v << ";\n";
  }
  out << "\n\n";
  for (auto n : p.ctx->namespaces)
  {
    tocNamespace(out, n, false);
  }
  out << "\n\n";
  for (auto s : p.ctx->structs)
  {
    tocStruct(out, s, false);
  }
  out << "\n\n";
  for (auto f : p.ctx->functions)
  {
    tocFunction(out, f, false);
  }
  out << "\n\n";
}


void tocNamespace  (std::ostream & out, const Namespace & n, bool stub)
{
  n.ctx->parent = globalCtx;
  globalCtx = n.ctx;

  namespaces.push_back(n.name);
  if (!stub)
  {
    for (auto v : n.ctx->variables)
    {
      out << v << ";\n";
    }
    out << "\n\n";
  }
  for (auto n : n.ctx->namespaces)
  {
    tocNamespace(out, n, stub);
    out << "\n\n";
  }
  for (auto s : n.ctx->structs)
  {
    tocStruct(out, s, stub);
    out << "\n\n";
  }
  for (auto f : n.ctx->functions)
  {
    tocFunction(out, f, stub);
    out << "\n\n";
  }
  namespaces.pop_back();

  globalCtx = n.ctx->parent;
}