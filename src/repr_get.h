#pragma once

#include "repr.h"

Type                getType(TocParser::TypeContext * ctx);
Variable            getVariable(TocParser::VarContext * ctx);
Body                getBody(TocParser::BodyContext * ctx, std::shared_ptr<Context> parent);
Function            getFunction(TocParser::FuncContext * ctx, std::shared_ptr<Context> parent);
Struct              getStruct(TocParser::StructDeclContext * ctx, std::shared_ptr<Context> parent);
Namespace           getNamespace(TocParser::NamespaceDeclContext * ctx, std::shared_ptr<Context> parent);
Program             getProgram(TocParser::ProgContext * ctx, std::shared_ptr<Context> parent);


Expr                getExpr(TocParser::FuncExprContext * ctx);
Expr                getExpr(TocParser::MethodExprContext * ctx);
Expr                getExpr(TocParser::LitExprContext * ctx);
Expr                getExpr(TocParser::ParenExprContext * ctx);
Expr                getExpr(TocParser::DotExprContext * ctx);
Expr                getExpr(TocParser::PrefixOpExprContext * ctx);
Expr                getExpr(TocParser::PostfixOpExprContext * ctx);
Expr                getExpr(TocParser::BinaryOpExprContext * ctx);
Expr                getExpr(TocParser::TernaryOpExprContext * ctx);
Expr                getExpr(TocParser::BracketExprContext * ctx);
Expr                getExpr(TocParser::IdentifierExprContext * ctx);
Expr                getExpr(TocParser::ExprContext * ctx);

Stmt                getStmt(TocParser::StmtContext * ctx, std::shared_ptr<Context> parent);

Type getType(TocParser::TypeContext * ctx)
{
  Type result;
  for (auto n : ctx->namespaceSpecifier())
    result.namespacePrefixes.push_back(n->typeName()->getText());
  result.name = ctx->typeName()->NAME()->toString();
  for (auto m : ctx->typeModifier())
  {
    bool isPointer = m->getText() == "*";
    bool isStaticArray = m->INT_LIT() != nullptr;

    result.modifiers.emplace_back(
      isPointer ? TypeModifierType::Pointer : TypeModifierType::Array,
      isStaticArray,
      isStaticArray ? atoi(m->INT_LIT()->toString().c_str()) : -1
    );
  }
  return result;
}
Variable getVariable(TocParser::VarContext * ctx)
{
  Variable result;
  result.name = ctx->varName()->NAME()->toString();
  result.type = getType(ctx->type());
  return result;
}
Body getBody(TocParser::BodyContext * ctx, std::shared_ptr<Context> parent)
{
  Body result;
  result.ctx = std::make_unique<Context>();
  result.ctx->parent = parent;
  for (auto s : ctx->stmt())
  {
    if (s->varDecl() != nullptr)
    {
      result.ctx->variables.push_back(getVariable(s->varDecl()->var()));
      if (s->varDecl()->var()->expr() != nullptr)
        result.statements.push_back(getStmt(s, result.ctx));
    }
    else
    {
      result.statements.push_back(getStmt(s, result.ctx));
    }
  }
  return result;
}
Function getFunction(TocParser::FuncContext * ctx, std::shared_ptr<Context> parent)
{
  Function result;
  result.name = ctx->funcName()->NAME()->toString();
  result.returnType = getType(ctx->type());
  if (!ctx->parameter()->var().empty())
  {
    for (auto p : ctx->parameter()->var())
      result.parameters.push_back(getVariable(p));
  }
  if (ctx->body() != nullptr)
  {
    result.body = getBody(ctx->body(), parent);
    result.defined = true;
  }
  else
  {
    result.defined = false;
  }
  return result;
}
Struct getStruct(TocParser::StructDeclContext * ctx, std::shared_ptr<Context> parent)
{
  Struct result;
  result.name = ctx->structName()->NAME()->toString();
  for (auto m : ctx->structMember())
  {
    if (m->structVar() != nullptr)
    {
      result.members.push_back({
        getVariable(m->structVar()->var()),
        m->privateDecl() != nullptr
      });
    }
    if (m->structMethod() != nullptr)
    {
      result.methods.push_back({
        getFunction(m->structMethod()->func(), parent),
        m->privateDecl() != nullptr
      });
    }
  }
  return result;
}
Namespace getNamespace(TocParser::NamespaceDeclContext * ctx, std::shared_ptr<Context> parent)
{
  Namespace result;
  result.ctx = std::make_unique<Context>();
  result.name = ctx->typeName()->getText();
  for (auto d : ctx->decl())
  {
    if (d->varDecl() != nullptr)
    {
      result.ctx->variables.push_back(getVariable(d->varDecl()->var()));
    }
    if (d->funcDecl() != nullptr)
    {
      result.functions.push_back(getFunction(d->funcDecl()->func(), result.ctx));
    }
    if (d->structDecl() != nullptr)
    {
      result.structs.push_back(getStruct(d->structDecl(), result.ctx));
    }
    if (d->namespaceDecl() != nullptr)
    {
      result.namespaces.push_back(getNamespace(d->namespaceDecl(), result.ctx));
    }
  }
  return result;
}
Program getProgram(TocParser::ProgContext * ctx, std::shared_ptr<Context> parent)
{
  Program result;
  result.ctx = std::make_unique<Context>();
  for (auto d : ctx->decl())
  {
    if (d->varDecl() != nullptr)
    {
      result.ctx->variables.push_back(getVariable(d->varDecl()->var()));
    }
    if (d->funcDecl() != nullptr)
    {
      result.functions.push_back(getFunction(d->funcDecl()->func(), result.ctx));
    }
    if (d->structDecl() != nullptr)
    {
      result.structs.push_back(getStruct(d->structDecl(), result.ctx));
    }
    if (d->namespaceDecl() != nullptr)
    {
      result.namespaces.push_back(getNamespace(d->namespaceDecl(), result.ctx));
    }
  }
  return result;
}
template<typename OpType>
OpType getOperatorType(const std::string & s, std::string typeStrings[])
{
  for (int i = 0; i < (int)OpType::COUNT; i++)
  {
    if (typeStrings[i] == s)
    {
      return (OpType)i;
    }
  }
  return OpType::COUNT;
}













Expr getExpr(TocParser::FuncExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Func;
  for (auto n : ctx->namespaceSpecifier())
    result._func.namespacePrefixes.push_back(n->typeName()->getText());
  result._func.functionName = ctx->funcName()->NAME()->toString();
  for (auto e : ctx->expr())
    result._func.arguments.push_back(getExpr(e));
  return result;
}
Expr getExpr(TocParser::MethodExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Method;
  result._method.expr = std::make_unique<Expr>(getExpr(ctx->expr(0)));
  result._method.methodName = ctx->funcName()->NAME()->toString();
  for (int i = 1; i < ctx->expr().size(); i++)
    result._method.arguments.push_back(getExpr(ctx->expr(i)));
  return result;
}
Expr getExpr(TocParser::LitExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Lit;
  if (ctx->literal()->INT_LIT() != nullptr)
  {
    result._lit.type = LitType::Int;
    result._lit._int = atoi(ctx->literal()->INT_LIT()->toString().c_str());
  }
  else if (ctx->literal()->DECIMAL_LIT() != nullptr)
  {
    result._lit.type = LitType::Decimal;
    result._lit._decimal = atof(ctx->literal()->DECIMAL_LIT()->toString().c_str());
  }
  else if (ctx->literal()->StringLit() != nullptr)
  {
    result._lit.type = LitType::String;
    result._lit._string = ctx->literal()->StringLit()->toString();
  }
  else if (ctx->literal()->BOOL_LIT() != nullptr)
  {
    result._lit.type = LitType::Bool;
    result._lit._bool = ctx->literal()->BOOL_LIT()->toString() == "true";
  }
  return result;
}
Expr getExpr(TocParser::ParenExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Paren;
  result._paren.expr = std::make_unique<Expr>(getExpr(ctx->expr()));
  return result;
}
Expr getExpr(TocParser::DotExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Dot;
  result._dot.expr = std::make_unique<Expr>(getExpr(ctx->expr()));
  result._dot.identifier = ctx->varName()->getText();
  return result;
}
Expr getExpr(TocParser::PrefixOpExprContext * ctx)
{
  Expr result;
  result.type = ExprType::PrefixOp;
  result._prefixOp.expr = std::make_unique<Expr>(getExpr(ctx->expr()));
  result._prefixOp.type = getOperatorType<PrefixOperatorType>(
    ctx->prefix_op()->getText(),
    PrefixOperatorTypeStrings);
  return result;
}
Expr getExpr(TocParser::PostfixOpExprContext * ctx)
{
  Expr result;
  result.type = ExprType::PostfixOp;
  result._postfixOp.expr = std::make_unique<Expr>(getExpr(ctx->expr()));
  result._postfixOp.type = getOperatorType<PostfixOperatorType>(
    ctx->postfix_op()->getText(),
    PostfixOperatorTypeStrings);
  return result;
}
Expr getExpr(TocParser::BinaryOpExprContext * ctx)
{
  Expr result;
  result.type = ExprType::BinaryOp;
  result._binaryOp.lexpr = std::make_unique<Expr>(getExpr(ctx->expr(0)));
  result._binaryOp.rexpr = std::make_unique<Expr>(getExpr(ctx->expr(1)));
  result._binaryOp.type = getOperatorType<BinaryOperatorType>(
    ctx->binary_op()->getText(),
    BinaryOperatorTypeStrings);
  return result;
}
Expr getExpr(TocParser::TernaryOpExprContext * ctx)
{
  Expr result;
  result.type = ExprType::TernaryOp;
  result._ternaryOp.lexpr = std::make_unique<Expr>(getExpr(ctx->expr(0)));
  result._ternaryOp.rexprTrue = std::make_unique<Expr>(getExpr(ctx->expr(1)));
  result._ternaryOp.rexprFalse = std::make_unique<Expr>(getExpr(ctx->expr(2)));
  return result;
}
Expr getExpr(TocParser::BracketExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Bracket;
  result._brackets.lexpr = std::make_unique<Expr>(getExpr(ctx->expr(0)));
  result._brackets.rexpr = std::make_unique<Expr>(getExpr(ctx->expr(1)));
  return result;
}
Expr getExpr(TocParser::IdentifierExprContext * ctx)
{
  Expr result;
  result.type = ExprType::Identifier;
  for (auto n : ctx->namespaceSpecifier())
    result._identifier.namespacePrefixes.push_back(n->typeName()->getText());
  result._identifier.identifier = ctx->varName()->getText();
  return result;
}











Expr getExpr(TocParser::ExprContext * ctx)
{
  Expr result;
  if (dynamic_cast<TocParser::FuncExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::FuncExprContext *>(ctx));
  if (dynamic_cast<TocParser::MethodExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::MethodExprContext *>(ctx));
  if (dynamic_cast<TocParser::LitExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::LitExprContext *>(ctx));
  if (dynamic_cast<TocParser::ParenExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::ParenExprContext *>(ctx));
  if (dynamic_cast<TocParser::DotExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::DotExprContext *>(ctx));
  if (dynamic_cast<TocParser::PrefixOpExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::PrefixOpExprContext *>(ctx));
  if (dynamic_cast<TocParser::PostfixOpExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::PostfixOpExprContext *>(ctx));
  if (dynamic_cast<TocParser::BinaryOpExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::BinaryOpExprContext *>(ctx));
  if (dynamic_cast<TocParser::TernaryOpExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::TernaryOpExprContext *>(ctx));
  if (dynamic_cast<TocParser::BracketExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::BracketExprContext *>(ctx));
  if (dynamic_cast<TocParser::IdentifierExprContext *>(ctx) != nullptr)
    result = getExpr(dynamic_cast<TocParser::IdentifierExprContext *>(ctx));
  return result;
}
Stmt getStmt(TocParser::StmtContext * ctx, std::shared_ptr<Context> parent)
{
  Stmt result;
  if (ctx->varDecl() != nullptr && ctx->varDecl()->var()->expr() != nullptr)
  {
    result.type = StmtType::Assign;
    result._assign.lexpr.type = ExprType::Identifier;
    result._assign.lexpr._identifier.identifier = ctx->varDecl()->var()->varName()->getText();
    result._assign.rexpr = getExpr(ctx->varDecl()->var()->expr());
  }
  if (ctx->ifStmt() != nullptr)
  {
    result.type = StmtType::If;
    result._if.condition = getExpr(ctx->ifStmt()->expr());
    result._if.body = getBody(ctx->ifStmt()->body(), parent);
    for (auto ei : ctx->ifStmt()->elseIfStmt())
    {
      result._if.elses.emplace_back(
        true,
        std::make_unique<Expr>(getExpr(ei->expr())),
        getBody(ei->body(), parent)
      );
    }
    if (ctx->ifStmt()->elseStmt() != nullptr)
    {
      result._if.elses.emplace_back(
        false,
        nullptr,
        getBody(ctx->ifStmt()->elseStmt()->body(), parent)
      );
    }
  }
  if (ctx->switchStmt() != nullptr)
  {
    result.type = StmtType::Switch;
    result._switch.ident = std::make_unique<Expr>(getExpr(ctx->switchStmt()->expr()));
    for (auto c : ctx->switchStmt()->switchBody()->switchCase())
    {
      result._switch.cases.emplace_back(
        std::make_unique<Expr>(getExpr(c->expr())),
        getBody(c->body(), parent)
      );
    }
  }
  if (ctx->forStmt() != nullptr)
  {
    result.type = StmtType::For;
    result._for.init = std::make_unique<AssignStmt>();
    result._for.init->lexpr.type = ExprType::Identifier;
    result._for.init->lexpr._identifier.identifier = ctx->forStmt()->varInit()->varName()->getText();
    result._for.init->rexpr = getExpr(ctx->forStmt()->varInit()->expr());
    result._for.condition = std::make_unique<Expr>(getExpr(ctx->forStmt()->expr(0)));
    result._for.action = std::make_unique<Expr>(getExpr(ctx->forStmt()->expr(1)));
    result._for.body = getBody(ctx->forStmt()->body(), parent);
  }
  if (ctx->whileStmt() != nullptr)
  {
    result.type = StmtType::While;
    result._while.condition = getExpr(ctx->whileStmt()->expr());
    result._while.body = getBody(ctx->whileStmt()->body(), parent);
  }
  if (ctx->assignStmt() != nullptr)
  {
    result.type = StmtType::Assign;
    result._assign.lexpr = getExpr(ctx->assignStmt()->expr(0));
    result._assign.rexpr = getExpr(ctx->assignStmt()->expr(1));
  }
  if (ctx->returnStmt() != nullptr)
  {
    result.type = StmtType::Return;
    result._return.expr = getExpr(ctx->returnStmt()->expr());
  }
  if (ctx->expr() != nullptr)
  {
    result.type = StmtType::Expr;
    result._expr = getExpr(ctx->expr());
  }
  return result;
}