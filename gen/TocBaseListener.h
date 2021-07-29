
// Generated from Toc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "TocListener.h"


/**
 * This class provides an empty implementation of TocListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TocBaseListener : public TocListener {
public:

  virtual void enterProg(TocParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(TocParser::ProgContext * /*ctx*/) override { }

  virtual void enterDecl(TocParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(TocParser::DeclContext * /*ctx*/) override { }

  virtual void enterVarDecl(TocParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(TocParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterVar(TocParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(TocParser::VarContext * /*ctx*/) override { }

  virtual void enterType(TocParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(TocParser::TypeContext * /*ctx*/) override { }

  virtual void enterFuncDecl(TocParser::FuncDeclContext * /*ctx*/) override { }
  virtual void exitFuncDecl(TocParser::FuncDeclContext * /*ctx*/) override { }

  virtual void enterFunc(TocParser::FuncContext * /*ctx*/) override { }
  virtual void exitFunc(TocParser::FuncContext * /*ctx*/) override { }

  virtual void enterParameter(TocParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(TocParser::ParameterContext * /*ctx*/) override { }

  virtual void enterBody(TocParser::BodyContext * /*ctx*/) override { }
  virtual void exitBody(TocParser::BodyContext * /*ctx*/) override { }

  virtual void enterStructDecl(TocParser::StructDeclContext * /*ctx*/) override { }
  virtual void exitStructDecl(TocParser::StructDeclContext * /*ctx*/) override { }

  virtual void enterStructMember(TocParser::StructMemberContext * /*ctx*/) override { }
  virtual void exitStructMember(TocParser::StructMemberContext * /*ctx*/) override { }

  virtual void enterStructVar(TocParser::StructVarContext * /*ctx*/) override { }
  virtual void exitStructVar(TocParser::StructVarContext * /*ctx*/) override { }

  virtual void enterStructMethod(TocParser::StructMethodContext * /*ctx*/) override { }
  virtual void exitStructMethod(TocParser::StructMethodContext * /*ctx*/) override { }

  virtual void enterStmt(TocParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(TocParser::StmtContext * /*ctx*/) override { }

  virtual void enterConditional(TocParser::ConditionalContext * /*ctx*/) override { }
  virtual void exitConditional(TocParser::ConditionalContext * /*ctx*/) override { }

  virtual void enterIfCond(TocParser::IfCondContext * /*ctx*/) override { }
  virtual void exitIfCond(TocParser::IfCondContext * /*ctx*/) override { }

  virtual void enterLoop(TocParser::LoopContext * /*ctx*/) override { }
  virtual void exitLoop(TocParser::LoopContext * /*ctx*/) override { }

  virtual void enterWhileLoop(TocParser::WhileLoopContext * /*ctx*/) override { }
  virtual void exitWhileLoop(TocParser::WhileLoopContext * /*ctx*/) override { }

  virtual void enterAssignment(TocParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(TocParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterReturnStmt(TocParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(TocParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterExpr(TocParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(TocParser::ExprContext * /*ctx*/) override { }

  virtual void enterNonOpExpr(TocParser::NonOpExprContext * /*ctx*/) override { }
  virtual void exitNonOpExpr(TocParser::NonOpExprContext * /*ctx*/) override { }

  virtual void enterNonSubscriptExpr(TocParser::NonSubscriptExprContext * /*ctx*/) override { }
  virtual void exitNonSubscriptExpr(TocParser::NonSubscriptExprContext * /*ctx*/) override { }

  virtual void enterNonAccessExpr(TocParser::NonAccessExprContext * /*ctx*/) override { }
  virtual void exitNonAccessExpr(TocParser::NonAccessExprContext * /*ctx*/) override { }

  virtual void enterFuncCall(TocParser::FuncCallContext * /*ctx*/) override { }
  virtual void exitFuncCall(TocParser::FuncCallContext * /*ctx*/) override { }

  virtual void enterOperatorExpr(TocParser::OperatorExprContext * /*ctx*/) override { }
  virtual void exitOperatorExpr(TocParser::OperatorExprContext * /*ctx*/) override { }

  virtual void enterBinaryOperator(TocParser::BinaryOperatorContext * /*ctx*/) override { }
  virtual void exitBinaryOperator(TocParser::BinaryOperatorContext * /*ctx*/) override { }

  virtual void enterIdentifier(TocParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(TocParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterLiteral(TocParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(TocParser::LiteralContext * /*ctx*/) override { }

  virtual void enterSubscript(TocParser::SubscriptContext * /*ctx*/) override { }
  virtual void exitSubscript(TocParser::SubscriptContext * /*ctx*/) override { }

  virtual void enterMemberAccess(TocParser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(TocParser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterParenExpr(TocParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(TocParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterFuncName(TocParser::FuncNameContext * /*ctx*/) override { }
  virtual void exitFuncName(TocParser::FuncNameContext * /*ctx*/) override { }

  virtual void enterVarName(TocParser::VarNameContext * /*ctx*/) override { }
  virtual void exitVarName(TocParser::VarNameContext * /*ctx*/) override { }

  virtual void enterTypeName(TocParser::TypeNameContext * /*ctx*/) override { }
  virtual void exitTypeName(TocParser::TypeNameContext * /*ctx*/) override { }

  virtual void enterStructName(TocParser::StructNameContext * /*ctx*/) override { }
  virtual void exitStructName(TocParser::StructNameContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

