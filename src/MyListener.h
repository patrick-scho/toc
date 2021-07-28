#include "TocBaseListener.h"

#include <iostream>

using namespace std;

class MyListener : public TocBaseListener {
  void enterVarDecl(TocParser::VarDeclContext * ctx) {
    cout
      << ctx->var()->type()->getText()
      << " "
      << ctx->var()->varName()->getText();

    if (ctx->var()->expr() != nullptr) {
      cout << " = ";
    }
  }
  void exitVarDecl(TocParser::VarDeclContext * ctx) {
    cout << ";" << endl;
  }

  void enterFuncDecl(TocParser::FuncDeclContext * ctx) {
    cout
      << ctx->type()->getText()
      << " "
      << ctx->funcName()->getText()
      << "(";

    if (ctx->parameter()->firstParameter() != nullptr) {
      cout
        << ctx->parameter()->firstParameter()->var()->type()->getText()
        << " "
        << ctx->parameter()->firstParameter()->var()->varName()->getText();
    }

    for (auto * p : ctx->parameter()->additionalParameter()) {
      cout
        << ", "
        << p->var()->type()->getText()
        << " "
        << p->var()->varName()->getText();
    }

    cout
      << ")";
  }

  void enterBody(TocParser::BodyContext * ctx) {
    cout
      << "{" << endl;
  }
  void exitBody(TocParser::BodyContext * ctx) {
    cout
      << "}" << endl;
  }

  void enterIfCond(TocParser::IfCondContext * ctx) {
    cout
      << "if (";
    enterExpr(ctx->expr());
    cout
      << ")";
  }
};