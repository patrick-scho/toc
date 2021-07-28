
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

  virtual void enterType(TocParser::TypeContext *ctx) = 0;
  virtual void exitType(TocParser::TypeContext *ctx) = 0;

  virtual void enterFuncDecl(TocParser::FuncDeclContext *ctx) = 0;
  virtual void exitFuncDecl(TocParser::FuncDeclContext *ctx) = 0;

  virtual void enterFunc(TocParser::FuncContext *ctx) = 0;
  virtual void exitFunc(TocParser::FuncContext *ctx) = 0;

  virtual void enterParameter(TocParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(TocParser::ParameterContext *ctx) = 0;

  virtual void enterFirstParameter(TocParser::FirstParameterContext *ctx) = 0;
  virtual void exitFirstParameter(TocParser::FirstParameterContext *ctx) = 0;

  virtual void enterAdditionalParameter(TocParser::AdditionalParameterContext *ctx) = 0;
  virtual void exitAdditionalParameter(TocParser::AdditionalParameterContext *ctx) = 0;

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

  virtual void enterConditional(TocParser::ConditionalContext *ctx) = 0;
  virtual void exitConditional(TocParser::ConditionalContext *ctx) = 0;

  virtual void enterIfCond(TocParser::IfCondContext *ctx) = 0;
  virtual void exitIfCond(TocParser::IfCondContext *ctx) = 0;

  virtual void enterLoop(TocParser::LoopContext *ctx) = 0;
  virtual void exitLoop(TocParser::LoopContext *ctx) = 0;

  virtual void enterWhileLoop(TocParser::WhileLoopContext *ctx) = 0;
  virtual void exitWhileLoop(TocParser::WhileLoopContext *ctx) = 0;

  virtual void enterAssignment(TocParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(TocParser::AssignmentContext *ctx) = 0;

  virtual void enterReturnStmt(TocParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(TocParser::ReturnStmtContext *ctx) = 0;

  virtual void enterExpr(TocParser::ExprContext *ctx) = 0;
  virtual void exitExpr(TocParser::ExprContext *ctx) = 0;

  virtual void enterNonOpExpr(TocParser::NonOpExprContext *ctx) = 0;
  virtual void exitNonOpExpr(TocParser::NonOpExprContext *ctx) = 0;

  virtual void enterNonSubscriptExpr(TocParser::NonSubscriptExprContext *ctx) = 0;
  virtual void exitNonSubscriptExpr(TocParser::NonSubscriptExprContext *ctx) = 0;

  virtual void enterFuncCall(TocParser::FuncCallContext *ctx) = 0;
  virtual void exitFuncCall(TocParser::FuncCallContext *ctx) = 0;

  virtual void enterOperatorExpr(TocParser::OperatorExprContext *ctx) = 0;
  virtual void exitOperatorExpr(TocParser::OperatorExprContext *ctx) = 0;

  virtual void enterBinaryOperator(TocParser::BinaryOperatorContext *ctx) = 0;
  virtual void exitBinaryOperator(TocParser::BinaryOperatorContext *ctx) = 0;

  virtual void enterIdentifier(TocParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(TocParser::IdentifierContext *ctx) = 0;

  virtual void enterLiteral(TocParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(TocParser::LiteralContext *ctx) = 0;

  virtual void enterSubscript(TocParser::SubscriptContext *ctx) = 0;
  virtual void exitSubscript(TocParser::SubscriptContext *ctx) = 0;

  virtual void enterMemberAccess(TocParser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(TocParser::MemberAccessContext *ctx) = 0;

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

