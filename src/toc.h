#pragma once

#include <iostream>

#include "TocParser.h"

void toc(std::ostream & o, TocParser::ProgContext * ctx);
void toc(std::ostream & o, TocParser::VarDeclContext * ctx);
void toc(std::ostream & o, TocParser::FuncContext * ctx);
void toc(std::ostream & o, TocParser::StructDeclContext * ctx);
void toc(std::ostream & o, TocParser::BodyContext * ctx);
void toc(std::ostream & o, TocParser::StmtContext * ctx);
void toc(std::ostream & o, TocParser::IfCondContext * ctx);
void toc(std::ostream & o, TocParser::WhileLoopContext * ctx);
void toc(std::ostream & o, TocParser::AssignmentContext * ctx);
void toc(std::ostream & o, TocParser::ReturnStmtContext * ctx);
void toc(std::ostream & o, TocParser::ExprContext * ctx);
void toc(std::ostream & o, TocParser::NonOpExprContext * ctx);
void toc(std::ostream & o, TocParser::NonSubscriptExprContext * ctx);
void toc(std::ostream & o, TocParser::FuncCallContext * ctx);
void toc(std::ostream & o, TocParser::IdentifierContext * ctx);
void toc(std::ostream & o, TocParser::LiteralContext * ctx);
void toc(std::ostream & o, TocParser::SubscriptContext * ctx);
void toc(std::ostream & o, TocParser::MemberAccessContext * ctx);
void toc(std::ostream & o, TocParser::ParenExprContext * ctx);
void toc(std::ostream & o, TocParser::BinaryOperatorContext * ctx);

void toc_stub(std::ostream & o, TocParser::FuncContext * ctx);
void toc_stub(std::ostream & o, TocParser::StructDeclContext * ctx);


void toc(std::ostream & o, TocParser::ProgContext * ctx) {
  for (auto * decl : ctx->decl()) {
    /**/ if (decl->structDecl() != nullptr) toc_stub(o, decl->structDecl());
    else if (decl->funcDecl()   != nullptr) toc_stub(o, decl->funcDecl()->func());
  }
  for (auto * decl : ctx->decl()) {
    if (decl->varDecl()    != nullptr) {
      toc(o, decl->varDecl());
      o << ";\n";
    }
    else if (decl->structDecl() != nullptr) toc(o, decl->structDecl());
    else if (decl->funcDecl()   != nullptr) toc(o, decl->funcDecl()->func());
  }
}
void toc(std::ostream & o, TocParser::VarDeclContext * ctx) {
  o
    << ctx->var()->type()->getText()
    << " "
    << ctx->var()->varName()->getText();
  
  if (ctx->var()->expr() != nullptr) {
    o << " = ";
    toc(o, ctx->var()->expr());
  }
}
void toc(std::ostream & o, TocParser::FuncContext * ctx) {
  o
    << ctx->type()->getText()
    << " "
    << ctx->funcName()->getText()
    << "(";

  if (ctx->parameter()->firstParameter() != nullptr) {
    o
      << ctx->parameter()->firstParameter()->var()->type()->getText()
      << " "
      << ctx->parameter()->firstParameter()->var()->varName()->getText();

    for (auto * par : ctx->parameter()->additionalParameter()) {
      o
        << ", "
        << par->var()->type()->getText()
        << " "
        << par->var()->varName()->getText();
    }
  }

  o << ")\n{\n";

  toc(o, ctx->body());

  o << "}\n";
}
void toc(std::ostream & o, TocParser::StructDeclContext * ctx) {
  o
    << "typedef struct "
    << ctx->structName()->getText()
    << "\n{\n";

  for (auto * member : ctx->structMember()) {
    if (member->structVar() != nullptr) {
      o
        << member->structVar()->var()->type()->getText()
        << " "
        << member->structVar()->var()->varName()->getText()
        << ";\n";
    }
  }
  o << "} "
    << ctx->structName()->getText()
    << ";\n";
  for (auto * member : ctx->structMember()) {
    if (member->structMethod() != nullptr) {
      o
        << member->structMethod()->func()->type()->getText()
        << " "
        << ctx->structName()->getText()
        << "_"
        << member->structMethod()->func()->funcName()->getText()
        << "("
        << ctx->structName()->getText()
        << " * this";

      if (member->structMethod()->func()->parameter()->firstParameter() != nullptr) {
        o
          << ", "
          << member->structMethod()->func()->parameter()->firstParameter()->var()->type()->getText()
          << " "
          << member->structMethod()->func()->parameter()->firstParameter()->var()->varName()->getText();

        for (auto * par : member->structMethod()->func()->parameter()->additionalParameter()) {
          o
            << ", "
            << par->var()->type()->getText()
            << " "
            << par->var()->varName()->getText();
        }
      }

      o << ")\n{\n";

      toc(o, member->structMethod()->func()->body());

      o << "}\n";
    }
  }
}
void toc(std::ostream & o, TocParser::BodyContext * ctx) {
  for (auto * stmt : ctx->stmt()) {
    toc(o, stmt);
    o << "\n";
  }
}
void toc(std::ostream & o, TocParser::StmtContext * ctx) {
  /**/ if (ctx->varDecl() != nullptr) toc(o, ctx->varDecl());
  else if (ctx->conditional() != nullptr) toc(o, ctx->conditional()->ifCond());
  else if (ctx->loop() != nullptr) toc(o, ctx->loop()->whileLoop());
  else if (ctx->assignment() != nullptr) toc(o, ctx->assignment());
  else if (ctx->returnStmt() != nullptr) toc(o, ctx->returnStmt());
  else if (ctx->expr() != nullptr) toc(o, ctx->expr());

  if (ctx->conditional() == nullptr && ctx->loop() == nullptr)
    o << ";";
}
void toc(std::ostream & o, TocParser::IfCondContext * ctx) {
  o << "if (";
  toc(o, ctx->expr());
  o << ")\n{\n";
  toc(o, ctx->body());
  o << "}\n";
}
void toc(std::ostream & o, TocParser::WhileLoopContext * ctx) {
  o << "while (";
  toc(o, ctx->expr());
  o << ")\n{\n";
  toc(o, ctx->body());
  o << "}\n";
}
void toc(std::ostream & o, TocParser::AssignmentContext * ctx) {
  toc(o, ctx->identifier());
  o << " = ";
  toc(o, ctx->expr());
}
void toc(std::ostream & o, TocParser::ReturnStmtContext * ctx) {
  o << "return ";
  toc(o, ctx->expr());
}
void toc(std::ostream & o, TocParser::ExprContext * ctx) {
    /**/ if (ctx->funcCall()     != nullptr) toc(o, ctx->funcCall());
    else if (ctx->identifier()   != nullptr) toc(o, ctx->identifier());
    else if (ctx->literal()      != nullptr) toc(o, ctx->literal());
    else if (ctx->subscript()    != nullptr) toc(o, ctx->subscript());
    else if (ctx->memberAccess() != nullptr) toc(o, ctx->memberAccess());
    else if (ctx->parenExpr()    != nullptr) toc(o, ctx->parenExpr());
    else if (ctx->operatorExpr() != nullptr) toc(o, ctx->operatorExpr()->binaryOperator());
}
void toc(std::ostream & o, TocParser::NonOpExprContext * ctx) {
    /**/ if (ctx->funcCall()     != nullptr) toc(o, ctx->funcCall());
    else if (ctx->identifier()   != nullptr) toc(o, ctx->identifier());
    else if (ctx->literal()      != nullptr) toc(o, ctx->literal());
    else if (ctx->subscript()    != nullptr) toc(o, ctx->subscript());
    else if (ctx->memberAccess() != nullptr) toc(o, ctx->memberAccess());
    else if (ctx->parenExpr()    != nullptr) toc(o, ctx->parenExpr());
}
void toc(std::ostream & o, TocParser::NonSubscriptExprContext * ctx) {
    /**/ if (ctx->funcCall()     != nullptr) toc(o, ctx->funcCall());
    else if (ctx->identifier()   != nullptr) toc(o, ctx->identifier());
    else if (ctx->memberAccess() != nullptr) toc(o, ctx->memberAccess());
    else if (ctx->parenExpr()    != nullptr) toc(o, ctx->parenExpr());
}
void toc(std::ostream & o, TocParser::FuncCallContext * ctx) {
  o
    << ctx->funcName()->getText()
    << "(";
  for (int i = 0; i < ctx->expr().size(); i++) {
    if (i != 0) o << ", ";
    toc(o, ctx->expr(i));
  }
  o << ")";
}
void toc(std::ostream & o, TocParser::IdentifierContext * ctx) {
  o << ctx->getText();
}
void toc(std::ostream & o, TocParser::LiteralContext * ctx) {
  if (ctx->INTLIT() != nullptr) o << ctx->INTLIT()->getText();
}
void toc(std::ostream & o, TocParser::SubscriptContext * ctx) {
  toc(o, ctx->nonSubscriptExpr());
  o << "[";
  toc(o, ctx->expr());
  o << "]";
}
void toc(std::ostream & o, TocParser::MemberAccessContext * ctx) {
  toc(o, ctx->identifier(0));
  o << ".";
  toc(o, ctx->identifier(1));
}
void toc(std::ostream & o, TocParser::ParenExprContext * ctx) {
  o << "(";
  toc(o, ctx->expr());
  o << ")";
}
void toc(std::ostream & o, TocParser::BinaryOperatorContext * ctx) {
  for (int i = 0; i < ctx->BINARY_OPERATOR().size(); i++) {
    toc(o, ctx->nonOpExpr(i));
    o
      << " "
      << ctx->BINARY_OPERATOR(i)->getText()
      << " ";
    toc(o, ctx->nonOpExpr(i + 1));
  }
}

void toc_stub(std::ostream & o, TocParser::FuncContext * ctx) {
  o
    << ctx->type()->getText()
    << " "
    << ctx->funcName()->getText()
    << "(";

  if (ctx->parameter()->firstParameter() != nullptr) {
    o
      << ctx->parameter()->firstParameter()->var()->type()->getText()
      << " "
      << ctx->parameter()->firstParameter()->var()->varName()->getText();

    for (auto * par : ctx->parameter()->additionalParameter()) {
      o
        << ", "
        << par->var()->type()->getText()
        << " "
        << par->var()->varName()->getText();
    }
  }

  o << ");\n";
}
void toc_stub(std::ostream & o, TocParser::StructDeclContext * ctx) {
  o
    << "struct "
    << ctx->structName()->getText()
    << ";\n";
}
