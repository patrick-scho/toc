#pragma once

#include <iostream>
#include <sstream>

#include "repr.h"

template<typename T>
std::ostream & operator<< (std::ostream & out, const std::vector<T> & v)
{
  bool comma = false;
  for (auto t : v)
  {
    if (comma) out << ", ";
    else comma = true;
    out << t;
  }
  return out;
}

std::ostream & operator<< (std::ostream & out, const Type & t);
std::ostream & operator<< (std::ostream & out, const Variable & v);
std::ostream & operator<< (std::ostream & out, const Body & b);
std::ostream & operator<< (std::ostream & out, const UnaryOperatorExpr & o);
std::ostream & operator<< (std::ostream & out, const BinaryOperatorExpr & o);
std::ostream & operator<< (std::ostream & out, const TernaryOperatorExpr & o);
std::ostream & operator<< (std::ostream & out, const Expr & e);
std::ostream & operator<< (std::ostream & out, const Stmt & s);

void tocFunction (std::ostream & out, const Function & f, bool stub);
void tocStruct   (std::ostream & out, const Struct & s, bool stub);
void tocProgram  (std::ostream & out, const Program & p);

static const int TAB_WIDTH = 2;
static int indentation = 0;
static void indent(std::ostream & out, int change = 0)
{
  indentation += change;
  out << std::string(indentation, ' ');
}

std::ostream & operator<< (std::ostream & out, const Type & t)
{
  out << t.name;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Variable & v)
{
  out << v.type << " ";

  std::stringstream sstr;
  std::string s = v.name;

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
  indent(out);
  out << "{\n";
  indentation += 2;

  for (auto v : b.variables)
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

  return out;
}
std::ostream & operator<< (std::ostream & out, const UnaryOperatorExpr & o)
{
  if (o.type == UnaryOperatorType::IncrementPost || o.type == UnaryOperatorType::DecrementPost)
  {
    out << UnaryOperatorTypeStrings[(int)o.type] << *o.expr;
  }
  else
  {
    out << *o.expr << UnaryOperatorTypeStrings[(int)o.type];
  }

  return out;
}
std::ostream & operator<< (std::ostream & out, const BinaryOperatorExpr & o)
{
  out << *o.lexpr << " " << BinaryOperatorTypeStrings[(int)o.type] << " " << *o.rexpr;

  return out;
}
std::ostream & operator<< (std::ostream & out, const TernaryOperatorExpr & o)
{
  out << *o.lexpr << " ? " << *o.rexprTrue << " : " << *o.rexprFalse;

  return out;
}
std::ostream & operator<< (std::ostream & out, const Expr & e)
{
  if (e.parenthesized)
    out << "(";

  switch (e.type)
  {
  case ExprType::Func:
    out << e._func.functionName << "(" << e._func.arguments << ")"; break;
  case ExprType::Lit:
    /**/ if (e._lit.type == LitType::Int) out << e._lit._int;
    else if (e._lit.type == LitType::Decimal) out << e._lit._decimal;
    else if (e._lit.type == LitType::String) out << e._lit._string;
    else if (e._lit.type == LitType::Bool) out << e._lit._bool;
    break;
  case ExprType::Identifier:
    out << e._identifier.name; break;
  case ExprType::Brackets:
    out << *e._brackets.lexpr << "[" << *e._brackets.rexpr << "]"; break;
  case ExprType::Dot:
    out << *e._dot.expr << "." << e._dot.ident.name; break;
  case ExprType::UnaryOperator:
    out << e._unaryOperator; break;
  case ExprType::BinaryOperator:
    out << e._binaryOperator; break;
  case ExprType::TernaryOperator:
    out << e._ternaryOperator; break;
  }
  
  if (e.parenthesized)
    out << ")";

  return out;
}
std::ostream & operator<< (std::ostream & out, const Stmt & s)
{
  switch (s.type)
  {
  case StmtType::If:
    out << "if (" << s._if.condition << ")\n" << s._if.body; break;
  case StmtType::Switch:
    out << "switch (" << s._switch.ident.name << ")\n{\n";
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
      s._for.varName << " = " << *s._for.initValue << "; " <<
      *s._for.condition << "; " <<
      *s._for.action <<
      ")\n" << s._for.body; break;
  case StmtType::While:
    out << "while (" << s._while.condition << ")\n" << s._while.body; break;
  case StmtType::Assign:
    out << s._assign.name << " = " << s._assign.expr << ";"; break;
  case StmtType::Return:
    out << "return " << s._return.expr << ";"; break;
  case StmtType::Expr:
    out << s._expr << ";"; break;
  }

  return out;
}


void tocFunction (std::ostream & out, const Function & f, bool stub)
{
  out << f.returnType << " " << f.name << " (" << f.parameters << ")";

  if (stub)
  {
    out << ";\n";
  }
  else
  {
    out << "\n" << f.body;
  }
}
void tocStruct (std::ostream & out, const Struct & s, bool stub)
{
  out << "struct " << s.name;
  if (stub)
  {
    out << ";\n";
    for (auto m : s.methods)
    {
      m.parameters.insert(m.parameters.begin(),
      {"this",
      {s.name,
      {{TypeModifierType::Pointer, false, -1}}}});
      out << m.returnType << " " <<
        s.name << "_" << m.name <<
        " (" << m.parameters << ");\n";
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
    m.parameters.insert(m.parameters.begin(),
    {"this",
    {s.name,
    {{TypeModifierType::Pointer, false, -1}}}});  
    out << m.returnType << " " << s.name << "_" << m.name << " (" << m.parameters << ")\n" << m.body;
  }
}
void tocProgram (std::ostream & out, const Program & p)
{
  for (auto s : p.structs)
  {
    tocStruct(out, s, true);
  }
  for (auto f : p.functions)
  {
    tocFunction(out, f, true);
  }

  for (auto v : p.variables)
  {
    out << v << ";\n";
  }
  for (auto s : p.structs)
  {
    tocStruct(out, s, false);
  }
  for (auto f : p.functions)
  {
    tocFunction(out, f, false);
  }
}
