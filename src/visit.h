#pragma once

#include "repr.h"

#include <functional>

// struct with callback functions for all relevant types
// tree can be walked selectively by providing only
// needed callbacks
struct Visitor {
  std::function<void(const Type &, const std::shared_ptr<Context> ctx)>                   onType = [](auto, auto){};
  std::function<void(const Expr &, const std::shared_ptr<Context> ctx)>                   onExpr = [](auto, auto){};
  std::function<void(const Stmt &, const std::shared_ptr<Context> ctx)>                   onStmt = [](auto, auto){};
  std::function<void(const Body &, const std::shared_ptr<Context> ctx)>                   onBody = [](auto, auto){};
  std::function<void(const Function &, const std::shared_ptr<Context> ctx)>               onFunction = [](auto, auto){};
  std::function<void(const Variable &, const std::shared_ptr<Context> ctx)>               onVariable = [](auto, auto){};
  std::function<void(const StructMember<Function> &, const std::shared_ptr<Context> ctx)> onStructMethod = [](auto, auto){};
  std::function<void(const StructMember<Variable> &, const std::shared_ptr<Context> ctx)> onStructMember = [](auto, auto){};
  std::function<void(const Struct &, const std::shared_ptr<Context> ctx)>                 onStruct = [](auto, auto){};
  std::function<void(const Namespace &, const std::shared_ptr<Context> ctx)>              onNamespace = [](auto, auto){};
  std::function<void(const Program &, const std::shared_ptr<Context> ctx)>                onProgram = [](auto, auto){};
};

#define VISIT(XS) for (auto x : XS) visit(x);

// simply walk IR by recursively calling functions for all children
struct Visit {
private:
  Visitor v;
  std::shared_ptr<Context> ctx;
public:
  Visit(Visitor v)
  {
    this->v = v;
  }
  void visit(const Type & x)
  {
    v.onType(x, ctx);
  }
  void visit(const Expr & x)
  {
    v.onExpr(x, ctx);

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
    v.onStmt(x, ctx);

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
    v.onBody(x, ctx);

    ctx = x.ctx;

    VISIT(x.ctx->variables)
    VISIT(x.statements)

    ctx = ctx->parent;
  }
  void visit(const Namespace & x)
  {
    v.onNamespace(x, ctx);
    
    ctx = x.ctx;

    VISIT(x.ctx->namespaces)
    VISIT(x.ctx->variables)
    VISIT(x.ctx->structs)
    VISIT(x.ctx->functions)

    ctx = ctx->parent;
  }
  void visit(const Variable & x)
  {
    v.onVariable(x, ctx);
    visit(x.type);
  }
  void visit(const Function & x)
  {
    v.onFunction(x, ctx);

    if (x.defined) {
      for (auto v : x.parameters)
        visit(v.type);
      visit(x.body);
    }
  }
  void visit(const StructMember<Function> & x)
  {
    v.onStructMethod(x, ctx);

    visit(x.t);
  }
  void visit(const StructMember<Variable> & x)
  {
    v.onStructMember(x, ctx);

    visit(x.t);
  }
  void visit(const Struct & x)
  {
    v.onStruct(x, ctx);

    VISIT(x.members)
    VISIT(x.methods)
  }
  void visit(const Program & x)
  {
    v.onProgram(x, ctx);

    ctx = x.ctx;

    VISIT(x.ctx->namespaces)
    VISIT(x.ctx->variables)
    VISIT(x.ctx->structs)
    VISIT(x.ctx->functions)

    ctx = nullptr;
  }
};

#undef VISIT

