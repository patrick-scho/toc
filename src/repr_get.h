#pragma once

#include "repr.h"

Type getType(TocParser::TypeContext * ctx);
Variable getVariable(TocParser::VarContext * ctx);
Body getBody(TocParser::BodyContext * ctx);
Function getFunction(TocParser::FuncContext * ctx);
Struct getStruct(TocParser::StructDeclContext * ctx);
Program getProgram(TocParser::ProgContext * ctx);
OperatorExpr getOperatorExpr(TocParser::OperatorExprContext * ctx);
Expr getExpression(TocParser::ExprContext * ctx);
Stmt getStmt(TocParser::StmtContext * ctx);

Type getType(TocParser::TypeContext * ctx) {
  Type result;
  result.name = ctx->typeName()->NAME()->toString();
  return result;
}
Variable getVariable(TocParser::VarContext * ctx) {
  Variable result;
  result.name = ctx->varName()->NAME()->toString();
  result.type = getType(ctx->type());
  return result;
}
Body getBody(TocParser::BodyContext * ctx) {
  Body result;
  for (auto s : ctx->stmt()) {
    if (s->varDecl() != nullptr) {
      result.variables.push_back(getVariable(s->varDecl()->var()));
    }
    else {
      result.statements.push_back(getStmt(s));
    }
  }
  return result;
}
Function getFunction(TocParser::FuncContext * ctx) {
  Function result;
  result.name = ctx->funcName()->NAME()->toString();
  if (ctx->parameter()->firstParameter() != nullptr) {
    result.parameters.push_back(getVariable(ctx->parameter()->firstParameter()->var()));
    for (auto p : ctx->parameter()->additionalParameter())
      result.parameters.push_back(getVariable(p->var()));
  }
  result.body = getBody(ctx->body());
  return result;
}
Struct getStruct(TocParser::StructDeclContext * ctx) {
  Struct result;
  result.name = ctx->structName()->NAME()->toString();
  for (auto m : ctx->structMember()) {
    if (m->structVar() != nullptr) {
      result.members.push_back(getVariable(m->structVar()->var()));
    }
    if (m->structMethod() != nullptr) {
      result.methods.push_back(getFunction(m->structMethod()->func()));
    }
  }
  return result;
}
Program getProgram(TocParser::ProgContext * ctx) {
  Program result;
  for (auto d : ctx->decl()) {
    if (d->varDecl() != nullptr) {
      result.variables.push_back(getVariable(d->varDecl()->var()));
    }
    if (d->funcDecl() != nullptr) {
      result.functions.push_back(getFunction(d->funcDecl()->func()));
    }
    if (d->structDecl() != nullptr) {
      result.structs.push_back(getStruct(d->structDecl()));
    }
  }
  return result;
}
OperatorExpr getOperatorExpr(TocParser::OperatorExprContext * ctx) {
  OperatorExpr result;
  //result.lexpr = getExpr(ctx->binaryOperator()->nonOpExpr(0));
  //result.rexpr = getExpr(ctx->binaryOperator()->nonOpExpr(1));
  std::string op = ctx->binaryOperator()->BINARY_OPERATOR(0)->toString();
  if (op == "+")  result.type = OperatorType::Plus;
  if (op == "-")  result.type = OperatorType::Minus;
  if (op == "*")  result.type = OperatorType::Multiply;
  if (op == "/")  result.type = OperatorType::Divide;
  if (op == "==") result.type = OperatorType::Equals;
  if (op == "!=") result.type = OperatorType::NotEquals;
  if (op == "<")  result.type = OperatorType::LessThan;
  if (op == ">")  result.type = OperatorType::GreaterThan;
  return result;
}
Expr getExpr(TocParser::ExprContext * ctx) {
  Expr result;
  if (ctx->funcCall() != nullptr) {
    result.type = ExprType::Call;
    for (auto e : ctx->funcCall()->expr())
      result._call.arguments.push_back(getExpr(e));
    //result._call.function = ctx->funcCall()->funcName();
  }
  if (ctx->literal() != nullptr) {
    result.type = ExprType::Literal;
    result._literal.i = atoi(ctx->literal()->INTLIT()->toString().c_str());
  }
  if (ctx->identifier() != nullptr) {
    result.type = ExprType::Variable;
    result._variable.name = ctx->identifier()->varName()->NAME()->toString();
  }
  if (ctx->subscript() != nullptr) {
    result.type = ExprType::Brackets;
    //result._brackets.lexpr = getExpr(ctx->subscript()->nonSubscriptExpr());
    result._brackets.rexpr = std::make_unique<Expr>(getExpr(ctx->subscript()->expr()));
  }
  if (ctx->memberAccess() != nullptr) {
    result.type = ExprType::Dot;
    //result._dot.lexpr = ctx->memberAccess()->identifier(0);
    result._dot.name = ctx->memberAccess()->identifier(1)->varName()->NAME()->toString();
  }
  if (ctx->operatorExpr() != nullptr) {
    result.type = ExprType::Operator;
    result._operator = getOperatorExpr(ctx->operatorExpr());
  }
  return result;
}
Stmt getStmt(TocParser::StmtContext * ctx) {
  Stmt result;
  if (ctx->conditional() != nullptr) {
    result.type = StmtType::If;
    result._if.condition = getExpr(ctx->conditional()->ifCond()->expr());
    result._if.body = getBody(ctx->conditional()->ifCond()->body());
  }
  if (ctx->loop() != nullptr) {
    result.type = StmtType::While;
    result._while.condition = getExpr(ctx->loop()->whileLoop()->expr());
    result._while.body = getBody(ctx->loop()->whileLoop()->body());
  }
  if (ctx->assignment() != nullptr) {
    result.type = StmtType::Assign;
    //result._assign.lexpr = getExpr(ctx->assignment()->);
    result._assign.rexpr = getExpr(ctx->assignment()->expr());
  }
  if (ctx->returnStmt() != nullptr) {
    result.type = StmtType::Return;
    result._return.expr = getExpr(ctx->returnStmt()->expr());
  }
  if (ctx->expr() != nullptr) {
    result.type = StmtType::Expr;
    result._expr = getExpr(ctx->expr());
  }
  if (ctx->varDecl() != nullptr && ctx->varDecl()->var()->expr() != nullptr) {
    result.type = StmtType::Assign;
    result._assign.rexpr = getExpr(ctx->varDecl()->var()->expr());
  }
  return result;
}