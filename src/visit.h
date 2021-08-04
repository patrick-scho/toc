#pragma once

#include "repr.h"

#include <functional>

struct Visitor {
  std::function<void(const Type &, const std::vector<std::string> & namespaces)> onType = [](auto, auto){};
  std::function<void(const Expr &, const std::vector<std::string> & namespaces)> onExpr = [](auto, auto){};
  std::function<void(const Stmt &, const std::vector<std::string> & namespaces)> onStmt = [](auto, auto){};
  std::function<void(const Body &, const std::vector<std::string> & namespaces)> onBody = [](auto, auto){};
  std::function<void(const Function &, const std::vector<std::string> & namespaces)> onFunction = [](auto, auto){};
  std::function<void(const Variable &, const std::vector<std::string> & namespaces)> onVariable = [](auto, auto){};
  std::function<void(const StructMember<Function> &, const std::vector<std::string> & namespaces)> onStructMethod = [](auto, auto){};
  std::function<void(const StructMember<Variable> &, const std::vector<std::string> & namespaces)> onStructMember = [](auto, auto){};
  std::function<void(const Struct &, const std::vector<std::string> & namespaces)> onStruct = [](auto, auto){};
  std::function<void(const Namespace &, const std::vector<std::string> & namespaces)> onNamespace = [](auto, auto){};
  std::function<void(const Program &, const std::vector<std::string> & namespaces)> onProgram = [](auto, auto){};
};

#define VISIT(XS) for (auto x : XS) visit(x);

struct Visit {
private:
  Visitor v;
  std::vector<std::string> namespaces;
public:
  Visit(Visitor v)
  {
    this->v = v;
  }
  void visit(const Type & x)
  {
    v.onType(x, namespaces);
  }
  void visit(const Expr & x)
  {
    v.onExpr(x, namespaces);

    switch (x.type)
    {
      case ExprType::Func:
        VISIT(x._func.arguments)
        break;
      case ExprType::Method:
        visit(*x._method.expr);
        VISIT(x._method.arguments);
        break;
      case ExprType::Lit:
        break;
      case ExprType::Paren:
        visit(*x._paren.expr);
        break;
      case ExprType::Dot:
        visit(*x._dot.expr);
        break;
      case ExprType::PrefixOp:
        visit(*x._prefixOp.expr);
        break;
      case ExprType::PostfixOp:
        visit(*x._postfixOp.expr);
        break;
      case ExprType::BinaryOp:
        visit(*x._binaryOp.lexpr);
        visit(*x._binaryOp.rexpr);
        break;
      case ExprType::TernaryOp:
        visit(*x._ternaryOp.lexpr);
        visit(*x._ternaryOp.rexprTrue);
        visit(*x._ternaryOp.rexprFalse);
        break;
      case ExprType::Bracket:
        visit(*x._brackets.lexpr);
        visit(*x._brackets.rexpr);
        break;
      case ExprType::Identifier:
        break;
    }
  }
  void visit(const Stmt & x)
  {
    v.onStmt(x, namespaces);

    switch (x.type)
    {
    case StmtType::Assign:
      visit(x._assign.lexpr);
      visit(x._assign.rexpr);
      break;
    case StmtType::Expr:
      visit(x._expr);
      break;
    case StmtType::For:
      visit(x._for.init->lexpr);
      visit(x._for.init->rexpr);
      visit(*x._for.condition);
      visit(*x._for.action);
      visit(x._for.body);
      break;
    case StmtType::If:
      visit(x._if.condition);
      visit(x._if.body);
      for (auto e : x._if.elses)
      {
        if (e._if)
          visit(*e.expr);
        visit(e.body);
      }
      break;
    case StmtType::Return:
      visit(x._return.expr);
      break;
    case StmtType::Switch:
      visit(*x._switch.ident);
      for (auto c : x._switch.cases)
      {
        visit(*c.expr);
        visit(c.body);
      }
      break;
    case StmtType::While:
      visit(x._while.condition);
      visit(x._while.body);
      break;
    }
  }
  void visit(const Body & x)
  {
    v.onBody(x, namespaces);

    VISIT(x.ctx->variables)
    VISIT(x.statements)
  }
  void visit(const Namespace & x)
  {
    v.onNamespace(x, namespaces);

    namespaces.push_back(x.name);

    VISIT(x.namespaces)
    VISIT(x.ctx->variables)
    VISIT(x.structs)
    VISIT(x.functions)

    namespaces.pop_back();
  }
  void visit(const Variable & x)
  {
    v.onVariable(x, namespaces);
    visit(x.type);
  }
  void visit(const Function & x)
  {
    v.onFunction(x, namespaces);

    if (x.defined) {
      visit(x.body);
      for (auto v : x.parameters)
        visit(v.type);
    }
  }
  void visit(const StructMember<Function> & x)
  {
    v.onStructMethod(x, namespaces);

    visit(x.t);
  }
  void visit(const StructMember<Variable> & x)
  {
    v.onStructMember(x, namespaces);

    visit(x.t);
  }
  void visit(const Struct & x)
  {
    v.onStruct(x, namespaces);

    VISIT(x.members)
    VISIT(x.methods)
  }
  void visit(const Program & x)
  {
    v.onProgram(x, namespaces);

    VISIT(x.namespaces)
    VISIT(x.ctx->variables)
    VISIT(x.structs)
    VISIT(x.functions)
  }
};

#undef VISIT

