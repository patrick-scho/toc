
// Generated from Toc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TocParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TocParser.
 */
class  TocListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(TocParser::ProgContext *ctx) = 0;
  virtual void exitProg(TocParser::ProgContext *ctx) = 0;

  virtual void enterDecl(TocParser::DeclContext *ctx) = 0;
  virtual void exitDecl(TocParser::DeclContext *ctx) = 0;

  virtual void enterVarDecl(TocParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(TocParser::VarDeclContext *ctx) = 0;

  virtual void enterVar(TocParser::VarContext *ctx) = 0;
  virtual void exitVar(TocParser::VarContext *ctx) = 0;

  virtual void enterVarInit(TocParser::VarInitContext *ctx) = 0;
  virtual void exitVarInit(TocParser::VarInitContext *ctx) = 0;

  virtual void enterType(TocParser::TypeContext *ctx) = 0;
  virtual void exitType(TocParser::TypeContext *ctx) = 0;

  virtual void enterTypeModifier(TocParser::TypeModifierContext *ctx) = 0;
  virtual void exitTypeModifier(TocParser::TypeModifierContext *ctx) = 0;

  virtual void enterFuncDecl(TocParser::FuncDeclContext *ctx) = 0;
  virtual void exitFuncDecl(TocParser::FuncDeclContext *ctx) = 0;

  virtual void enterFunc(TocParser::FuncContext *ctx) = 0;
  virtual void exitFunc(TocParser::FuncContext *ctx) = 0;

  virtual void enterParameter(TocParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(TocParser::ParameterContext *ctx) = 0;

  virtual void enterBody(TocParser::BodyContext *ctx) = 0;
  virtual void exitBody(TocParser::BodyContext *ctx) = 0;

  virtual void enterStructDecl(TocParser::StructDeclContext *ctx) = 0;
  virtual void exitStructDecl(TocParser::StructDeclContext *ctx) = 0;

  virtual void enterStructMember(TocParser::StructMemberContext *ctx) = 0;
  virtual void exitStructMember(TocParser::StructMemberContext *ctx) = 0;

  virtual void enterStructVar(TocParser::StructVarContext *ctx) = 0;
  virtual void exitStructVar(TocParser::StructVarContext *ctx) = 0;

  virtual void enterStructMethod(TocParser::StructMethodContext *ctx) = 0;
  virtual void exitStructMethod(TocParser::StructMethodContext *ctx) = 0;

  virtual void enterStmt(TocParser::StmtContext *ctx) = 0;
  virtual void exitStmt(TocParser::StmtContext *ctx) = 0;

  virtual void enterIfStmt(TocParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(TocParser::IfStmtContext *ctx) = 0;

  virtual void enterSwitchStmt(TocParser::SwitchStmtContext *ctx) = 0;
  virtual void exitSwitchStmt(TocParser::SwitchStmtContext *ctx) = 0;

  virtual void enterSwitchBody(TocParser::SwitchBodyContext *ctx) = 0;
  virtual void exitSwitchBody(TocParser::SwitchBodyContext *ctx) = 0;

  virtual void enterForStmt(TocParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(TocParser::ForStmtContext *ctx) = 0;

  virtual void enterWhileStmt(TocParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(TocParser::WhileStmtContext *ctx) = 0;

  virtual void enterAssignStmt(TocParser::AssignStmtContext *ctx) = 0;
  virtual void exitAssignStmt(TocParser::AssignStmtContext *ctx) = 0;

  virtual void enterReturnStmt(TocParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(TocParser::ReturnStmtContext *ctx) = 0;

  virtual void enterExpr(TocParser::ExprContext *ctx) = 0;
  virtual void exitExpr(TocParser::ExprContext *ctx) = 0;

  virtual void enterNonOpExpr(TocParser::NonOpExprContext *ctx) = 0;
  virtual void exitNonOpExpr(TocParser::NonOpExprContext *ctx) = 0;

  virtual void enterNonAccessExpr(TocParser::NonAccessExprContext *ctx) = 0;
  virtual void exitNonAccessExpr(TocParser::NonAccessExprContext *ctx) = 0;

  virtual void enterFuncExpr(TocParser::FuncExprContext *ctx) = 0;
  virtual void exitFuncExpr(TocParser::FuncExprContext *ctx) = 0;

  virtual void enterOpExpr(TocParser::OpExprContext *ctx) = 0;
  virtual void exitOpExpr(TocParser::OpExprContext *ctx) = 0;

  virtual void enterBinaryOp(TocParser::BinaryOpContext *ctx) = 0;
  virtual void exitBinaryOp(TocParser::BinaryOpContext *ctx) = 0;

  virtual void enterPrefixOp(TocParser::PrefixOpContext *ctx) = 0;
  virtual void exitPrefixOp(TocParser::PrefixOpContext *ctx) = 0;

  virtual void enterPostfixOp(TocParser::PostfixOpContext *ctx) = 0;
  virtual void exitPostfixOp(TocParser::PostfixOpContext *ctx) = 0;

  virtual void enterTernaryOp(TocParser::TernaryOpContext *ctx) = 0;
  virtual void exitTernaryOp(TocParser::TernaryOpContext *ctx) = 0;

  virtual void enterIdentifierExpr(TocParser::IdentifierExprContext *ctx) = 0;
  virtual void exitIdentifierExpr(TocParser::IdentifierExprContext *ctx) = 0;

  virtual void enterLitExpr(TocParser::LitExprContext *ctx) = 0;
  virtual void exitLitExpr(TocParser::LitExprContext *ctx) = 0;

  virtual void enterAccessExpr(TocParser::AccessExprContext *ctx) = 0;
  virtual void exitAccessExpr(TocParser::AccessExprContext *ctx) = 0;

  virtual void enterParenExpr(TocParser::ParenExprContext *ctx) = 0;
  virtual void exitParenExpr(TocParser::ParenExprContext *ctx) = 0;

  virtual void enterFuncName(TocParser::FuncNameContext *ctx) = 0;
  virtual void exitFuncName(TocParser::FuncNameContext *ctx) = 0;

  virtual void enterVarName(TocParser::VarNameContext *ctx) = 0;
  virtual void exitVarName(TocParser::VarNameContext *ctx) = 0;

  virtual void enterTypeName(TocParser::TypeNameContext *ctx) = 0;
  virtual void exitTypeName(TocParser::TypeNameContext *ctx) = 0;

  virtual void enterStructName(TocParser::StructNameContext *ctx) = 0;
  virtual void exitStructName(TocParser::StructNameContext *ctx) = 0;


};

