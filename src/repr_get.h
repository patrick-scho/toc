#pragma once

#include "repr.h"

Type                getType(TocParser::TypeContext * ctx);
Variable            getVariable(TocParser::VarContext * ctx);
Body                getBody(TocParser::BodyContext * ctx);
Function            getFunction(TocParser::FuncContext * ctx);
Struct              getStruct(TocParser::StructDeclContext * ctx);
Program             getProgram(TocParser::ProgContext * ctx);
UnaryOperatorType   getUnaryOperatorType(const std::string & s);
BinaryOperatorType  getBinaryOperatorType(const std::string & s);
UnaryOperatorExpr   getUnaryOperatorExpr(TocParser::OpExprContext * ctx);
BinaryOperatorExpr  getBinaryOperatorExpr(TocParser::OpExprContext * ctx);
TernaryOperatorExpr getTernaryOperatorExpr(TocParser::OpExprContext * ctx);
Expr                getExpr(TocParser::NonOpExprContext * ctx);
Expr                getExpr(TocParser::NonAccessExprContext * ctx);
Expr                getExpr(TocParser::ExprContext * ctx);
Stmt                getStmt(TocParser::StmtContext * ctx);

Type getType(TocParser::TypeContext * ctx) {
  Type result;
  result.name = ctx->typeName()->NAME()->toString();
  for (auto m : ctx->typeModifier()) {
    result.modifiers.emplace_back(
      m->toString() == "*" ? TypeModifierType::Pointer : TypeModifierType::Array,
      m->toString() == "*" ? -1 : atoi(m->NUMBER()->toString().c_str())
    );
  }
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
      if (s->varDecl()->var()->expr() != nullptr)
        result.statements.push_back(getStmt(s));
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
  result.returnType = getType(ctx->type());
  if (!ctx->parameter()->var().empty()) {
    for (auto p : ctx->parameter()->var())
      result.parameters.push_back(getVariable(p));
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
UnaryOperatorType getUnaryOperatorType(const std::string & s) {
  for (int i = 0; i < (int)UnaryOperatorType::COUNT; i++) {
    if (UnaryOperatorTypeStrings[i] == s) {
      return (UnaryOperatorType)i;
    }
  }
  return UnaryOperatorType::COUNT;
}
BinaryOperatorType getBinaryOperatorType(const std::string & s) {
  for (int i = 0; i < (int)BinaryOperatorType::COUNT; i++) {
    if (BinaryOperatorTypeStrings[i] == s) {
      return (BinaryOperatorType)i;
    }
  }
  return BinaryOperatorType::COUNT;
}
UnaryOperatorExpr getUnaryOperatorExpr(TocParser::OpExprContext * ctx) {
  UnaryOperatorExpr result;
  if (ctx->prefixOp() != nullptr)
    result.expr = std::make_unique<Expr>(getExpr(ctx->prefixOp()->nonOpExpr()));
  else
    result.expr = std::make_unique<Expr>(getExpr(ctx->postfixOp()->nonOpExpr()));

  std::string op;
  if (ctx->prefixOp() != nullptr)
    op = ctx->prefixOp()->prefix_op()->getText();
  else
    op = ctx->postfixOp()->postfix_op()->getText();

  // TODO: postfix type

  result.type = getUnaryOperatorType(op);

  return result;
}
BinaryOperatorExpr getBinaryOperatorExpr(TocParser::OpExprContext * ctx) {
  BinaryOperatorExpr result;
  result.lexpr = std::make_unique<Expr>(getExpr(ctx->binaryOp()->nonOpExpr(0)));
  result.rexpr = std::make_unique<Expr>(getExpr(ctx->binaryOp()->nonOpExpr(1)));
  
  std::string op = ctx->binaryOp()->binary_op(0)->getText();
  std::cout << op << std::endl;

  result.type = getBinaryOperatorType(op);

  return result;
}
TernaryOperatorExpr getTernaryOperatorExpr(TocParser::OpExprContext * ctx) {
  TernaryOperatorExpr result;
  result.lexpr = std::make_unique<Expr>(getExpr(ctx->ternaryOp()->nonOpExpr()));
  result.rexprTrue = std::make_unique<Expr>(getExpr(ctx->ternaryOp()->expr(0)));
  result.rexprFalse = std::make_unique<Expr>(getExpr(ctx->ternaryOp()->expr(1)));
  return result;
}
Expr getExpr(TocParser::NonOpExprContext * ctx) {
  Expr result;
  if (ctx->funcExpr() != nullptr) {
    result.type = ExprType::Func;
    result._func.functionName = ctx->funcExpr()->funcName()->NAME()->toString();
    for (auto e : ctx->funcExpr()->expr())
      result._func.arguments.push_back(getExpr(e));
  }
  if (ctx->litExpr() != nullptr) {
    result.type = ExprType::Lit;
    if (ctx->litExpr()->INT_LIT() != nullptr) {
      result._lit.type = LitType::Int;
      result._lit._int = atoi(ctx->litExpr()->INT_LIT()->toString().c_str());
    }
    else if (ctx->litExpr()->DECIMAL_LIT() != nullptr) {
      result._lit.type = LitType::Decimal;
      result._lit._decimal = atof(ctx->litExpr()->DECIMAL_LIT()->toString().c_str());
    }
    else if (ctx->litExpr()->STRING_LIT() != nullptr) {
      result._lit.type = LitType::String;
      result._lit._string = ctx->litExpr()->STRING_LIT()->toString();
    }
    else if (ctx->litExpr()->BOOL_LIT() != nullptr) {
      result._lit.type = LitType::Bool;
      result._lit._bool = ctx->litExpr()->BOOL_LIT()->toString() == "true";
    }
  }
  if (ctx->identifierExpr() != nullptr) {
    result.type = ExprType::Identifier;
    result._identifier.name = ctx->identifierExpr()->varName()->NAME()->toString();
  }
  if (ctx->parenExpr() != nullptr) {
    result = getExpr(ctx->parenExpr()->expr());
  }
  if (ctx->accessExpr() != nullptr) {
    // TODO: access chain
    for (auto sub : ctx->accessExpr()->accessSubExpr()) {
      if (sub->accessMember() != nullptr) {
        result.type = ExprType::Dot;
        result._dot.ident.name = sub->accessMember()->identifierExpr()->varName()->NAME()->toString();
      }
      else {
        result.type = ExprType::Brackets;
        result._brackets.lexpr = std::make_unique<Expr>(getExpr(ctx->accessExpr()->nonAccessExpr()));
        result._brackets.rexpr = std::make_unique<Expr>(getExpr(sub->accessBrackets()->expr()));
      }
    }
  }
  return result;
}
Expr getExpr(TocParser::NonAccessExprContext * ctx) {
  Expr result;
  if (ctx->funcExpr() != nullptr) {
    result.type = ExprType::Func;
    result._func.functionName = ctx->funcExpr()->funcName()->NAME()->toString();
    for (auto e : ctx->funcExpr()->expr())
      result._func.arguments.push_back(getExpr(e));
  }
  if (ctx->identifierExpr() != nullptr) {
    result.type = ExprType::Identifier;
    result._identifier.name = ctx->identifierExpr()->varName()->NAME()->toString();
  }
  if (ctx->parenExpr() != nullptr) {
    result = getExpr(ctx->parenExpr()->expr());
  }
  return result;
}
Expr getExpr(TocParser::ExprContext * ctx) {
  Expr result;
  if (ctx->funcExpr() != nullptr) {
    result.type = ExprType::Func;
    result._func.functionName = ctx->funcExpr()->funcName()->NAME()->toString();
    for (auto e : ctx->funcExpr()->expr())
      result._func.arguments.push_back(getExpr(e));
  }
  if (ctx->litExpr() != nullptr) {
    result.type = ExprType::Lit;
    if (ctx->litExpr()->INT_LIT() != nullptr) {
      result._lit.type = LitType::Int;
      result._lit._int = atoi(ctx->litExpr()->INT_LIT()->toString().c_str());
    }
    else if (ctx->litExpr()->DECIMAL_LIT() != nullptr) {
      result._lit.type = LitType::Decimal;
      result._lit._decimal = atof(ctx->litExpr()->DECIMAL_LIT()->toString().c_str());
    }
    else if (ctx->litExpr()->STRING_LIT() != nullptr) {
      result._lit.type = LitType::String;
      result._lit._string = ctx->litExpr()->STRING_LIT()->toString();
    }
    else if (ctx->litExpr()->BOOL_LIT() != nullptr) {
      result._lit.type = LitType::Bool;
      result._lit._bool = ctx->litExpr()->BOOL_LIT()->toString() == "true";
    }
  }
  if (ctx->identifierExpr() != nullptr) {
    result.type = ExprType::Identifier;
    result._identifier.name = ctx->identifierExpr()->varName()->NAME()->toString();
  }
  if (ctx->parenExpr() != nullptr) {
    result = getExpr(ctx->parenExpr()->expr());
  }
  if (ctx->accessExpr() != nullptr) {
    // TODO: access chain
    for (auto sub : ctx->accessExpr()->accessSubExpr()) {
      if (sub->accessMember() != nullptr) {
        result.type = ExprType::Dot;
        result._dot.expr = std::make_unique<Expr>(getExpr(ctx->accessExpr()->nonAccessExpr()));
        result._dot.ident.name = sub->accessMember()->identifierExpr()->varName()->NAME()->toString();
      }
      else {
        result.type = ExprType::Brackets;
        result._brackets.lexpr = std::make_unique<Expr>(getExpr(ctx->accessExpr()->nonAccessExpr()));
        result._brackets.rexpr = std::make_unique<Expr>(getExpr(sub->accessBrackets()->expr()));
      }
    }
  }
  if (ctx->opExpr() != nullptr) {
    if (ctx->opExpr()->prefixOp() != nullptr || ctx->opExpr()->postfixOp() != nullptr) {
      result.type = ExprType::UnaryOperator;
      result._unaryOperator = getUnaryOperatorExpr(ctx->opExpr());
    }
    else if (ctx->opExpr()->binaryOp() != nullptr) {
      result.type = ExprType::BinaryOperator;
      result._binaryOperator = getBinaryOperatorExpr(ctx->opExpr());
      for (int i = 1; i < ctx->opExpr()->binaryOp()->binary_op().size(); i++) {
        Expr tmp = result;
        result._binaryOperator.lexpr = std::make_unique<Expr>(tmp);
        result._binaryOperator.type = getBinaryOperatorType(ctx->opExpr()->binaryOp()->binary_op(i)->getText());
        result._binaryOperator.rexpr = std::make_unique<Expr>(getExpr(ctx->opExpr()->binaryOp()->nonOpExpr(i+1)));
      }
    }
    else if (ctx->opExpr()->ternaryOp() != nullptr) {
      result.type = ExprType::TernaryOperator;
      result._ternaryOperator = getTernaryOperatorExpr(ctx->opExpr());
    }
  }
  return result;
}
Stmt getStmt(TocParser::StmtContext * ctx) {
  Stmt result;
  if (ctx->varDecl() != nullptr && ctx->varDecl()->var()->expr() != nullptr) {
    result.type = StmtType::Assign;
    result._assign.name = ctx->varDecl()->var()->varName()->NAME()->toString();
    result._assign.expr = getExpr(ctx->varDecl()->var()->expr());
  }
  if (ctx->ifStmt() != nullptr) {
    result.type = StmtType::If;
    result._if.condition = getExpr(ctx->ifStmt()->expr());
    result._if.body = getBody(ctx->ifStmt()->body());
    for (auto ei : ctx->ifStmt()->elseIfStmt()) {
      result._if.elses.emplace_back(
        true,
        std::make_unique<Expr>(getExpr(ei->expr())),
        getBody(ei->body())
      );
    }
    if (ctx->ifStmt()->elseStmt() != nullptr) {
      result._if.elses.emplace_back(
        false,
        nullptr,
        getBody(ctx->ifStmt()->elseStmt()->body())
      );
    }
  }
  if (ctx->switchStmt() != nullptr) {
    result.type = StmtType::Switch;
    result._switch.ident.name = ctx->switchStmt()->identifierExpr()->varName()->NAME()->toString();
    for (auto c : ctx->switchStmt()->switchBody()->switchCase()) {
      result._switch.cases.emplace_back(
        std::make_unique<Expr>(getExpr(c->expr())),
        getBody(c->body())
      );
    }
  }
  if (ctx->forStmt() != nullptr) {
    result.type = StmtType::For;
    if (ctx->forStmt()->varInit() != nullptr) {
      result._for.varName = ctx->forStmt()->varInit()->varName()->NAME()->toString();
      result._for.initValue = std::make_unique<Expr>(getExpr(ctx->forStmt()->varInit()->expr()));
    }
    else {
      result._for.varName = ctx->forStmt()->assignStmt()->identifierExpr()->varName()->NAME()->toString();
      result._for.initValue = std::make_unique<Expr>(getExpr(ctx->forStmt()->assignStmt()->expr()));
    }
    result._for.condition = std::make_unique<Expr>(getExpr(ctx->forStmt()->expr(0)));
    result._for.action = std::make_unique<Expr>(getExpr(ctx->forStmt()->expr(1)));
    result._for.body = getBody(ctx->forStmt()->body());
  }
  if (ctx->whileStmt() != nullptr) {
    result.type = StmtType::While;
    result._while.condition = getExpr(ctx->whileStmt()->expr());
    result._while.body = getBody(ctx->whileStmt()->body());
  }
  if (ctx->assignStmt() != nullptr) {
    result.type = StmtType::Assign;
    result._assign.name = ctx->assignStmt()->identifierExpr()->varName()->NAME()->toString();
    result._assign.expr = getExpr(ctx->assignStmt()->expr());
  }
  if (ctx->returnStmt() != nullptr) {
    result.type = StmtType::Return;
    result._return.expr = getExpr(ctx->returnStmt()->expr());
  }
  if (ctx->expr() != nullptr) {
    result.type = StmtType::Expr;
    result._expr = getExpr(ctx->expr());
  }
  return result;
}