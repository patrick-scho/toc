
// Generated from Toc.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  TocParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, T__43 = 44, 
    T__44 = 45, T__45 = 46, T__46 = 47, T__47 = 48, T__48 = 49, T__49 = 50, 
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, INT_LIT = 56, 
    DECIMAL_LIT = 57, STRING_LIT = 58, BOOL_LIT = 59, NAME = 60, WS = 61, 
    NEWLINE = 62
  };

  enum {
    RuleProg = 0, RuleDecl = 1, RuleVarDecl = 2, RuleVar = 3, RuleVarInit = 4, 
    RuleType = 5, RuleTypeModifier = 6, RuleFuncDecl = 7, RuleFunc = 8, 
    RuleParameter = 9, RuleBody = 10, RuleStructDecl = 11, RuleStructMember = 12, 
    RuleStructVar = 13, RuleStructMethod = 14, RuleGenericDecl = 15, RuleStmt = 16, 
    RuleIfStmt = 17, RuleElseIfStmt = 18, RuleElseStmt = 19, RuleSwitchStmt = 20, 
    RuleSwitchBody = 21, RuleSwitchCase = 22, RuleForStmt = 23, RuleWhileStmt = 24, 
    RuleAssignStmt = 25, RuleReturnStmt = 26, RuleExpr = 27, RuleNonOpExpr = 28, 
    RuleNonAccessExpr = 29, RuleFuncExpr = 30, RuleOpExpr = 31, RuleBinaryOp = 32, 
    RulePrefixOp = 33, RulePostfixOp = 34, RuleTernaryOp = 35, RuleIdentifierExpr = 36, 
    RuleLitExpr = 37, RuleAccessExpr = 38, RuleAccessSubExpr = 39, RuleAccessMember = 40, 
    RuleAccessBrackets = 41, RuleParenExpr = 42, RuleFuncName = 43, RuleVarName = 44, 
    RuleTypeName = 45, RuleStructName = 46, RulePostfix_op = 47, RulePrefix_op = 48, 
    RuleBinary_op = 49
  };

  explicit TocParser(antlr4::TokenStream *input);
  ~TocParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class DeclContext;
  class VarDeclContext;
  class VarContext;
  class VarInitContext;
  class TypeContext;
  class TypeModifierContext;
  class FuncDeclContext;
  class FuncContext;
  class ParameterContext;
  class BodyContext;
  class StructDeclContext;
  class StructMemberContext;
  class StructVarContext;
  class StructMethodContext;
  class GenericDeclContext;
  class StmtContext;
  class IfStmtContext;
  class ElseIfStmtContext;
  class ElseStmtContext;
  class SwitchStmtContext;
  class SwitchBodyContext;
  class SwitchCaseContext;
  class ForStmtContext;
  class WhileStmtContext;
  class AssignStmtContext;
  class ReturnStmtContext;
  class ExprContext;
  class NonOpExprContext;
  class NonAccessExprContext;
  class FuncExprContext;
  class OpExprContext;
  class BinaryOpContext;
  class PrefixOpContext;
  class PostfixOpContext;
  class TernaryOpContext;
  class IdentifierExprContext;
  class LitExprContext;
  class AccessExprContext;
  class AccessSubExprContext;
  class AccessMemberContext;
  class AccessBracketsContext;
  class ParenExprContext;
  class FuncNameContext;
  class VarNameContext;
  class TypeNameContext;
  class StructNameContext;
  class Postfix_opContext;
  class Prefix_opContext;
  class Binary_opContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);

   
  };

  ProgContext* prog();

  class  DeclContext : public antlr4::ParserRuleContext {
  public:
    DeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclContext *varDecl();
    FuncDeclContext *funcDecl();
    StructDeclContext *structDecl();

   
  };

  DeclContext* decl();

  class  VarDeclContext : public antlr4::ParserRuleContext {
  public:
    VarDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();

   
  };

  VarDeclContext* varDecl();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();
    TypeContext *type();
    ExprContext *expr();

   
  };

  VarContext* var();

  class  VarInitContext : public antlr4::ParserRuleContext {
  public:
    VarInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();
    TypeContext *type();
    ExprContext *expr();

   
  };

  VarInitContext* varInit();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    std::vector<TypeModifierContext *> typeModifier();
    TypeModifierContext* typeModifier(size_t i);

   
  };

  TypeContext* type();

  class  TypeModifierContext : public antlr4::ParserRuleContext {
  public:
    TypeModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LIT();

   
  };

  TypeModifierContext* typeModifier();

  class  FuncDeclContext : public antlr4::ParserRuleContext {
  public:
    FuncDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncContext *func();

   
  };

  FuncDeclContext* funcDecl();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncNameContext *funcName();
    ParameterContext *parameter();
    BodyContext *body();
    TypeContext *type();
    GenericDeclContext *genericDecl();

   
  };

  FuncContext* func();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarContext *> var();
    VarContext* var(size_t i);

   
  };

  ParameterContext* parameter();

  class  BodyContext : public antlr4::ParserRuleContext {
  public:
    BodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

   
  };

  BodyContext* body();

  class  StructDeclContext : public antlr4::ParserRuleContext {
  public:
    StructDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructNameContext *structName();
    GenericDeclContext *genericDecl();
    std::vector<StructMemberContext *> structMember();
    StructMemberContext* structMember(size_t i);

   
  };

  StructDeclContext* structDecl();

  class  StructMemberContext : public antlr4::ParserRuleContext {
  public:
    StructMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StructVarContext *structVar();
    StructMethodContext *structMethod();

   
  };

  StructMemberContext* structMember();

  class  StructVarContext : public antlr4::ParserRuleContext {
  public:
    StructVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();

   
  };

  StructVarContext* structVar();

  class  StructMethodContext : public antlr4::ParserRuleContext {
  public:
    StructMethodContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncContext *func();

   
  };

  StructMethodContext* structMethod();

  class  GenericDeclContext : public antlr4::ParserRuleContext {
  public:
    GenericDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);

   
  };

  GenericDeclContext* genericDecl();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarDeclContext *varDecl();
    IfStmtContext *ifStmt();
    SwitchStmtContext *switchStmt();
    ForStmtContext *forStmt();
    WhileStmtContext *whileStmt();
    AssignStmtContext *assignStmt();
    ReturnStmtContext *returnStmt();
    ExprContext *expr();

   
  };

  StmtContext* stmt();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BodyContext *body();
    std::vector<ElseIfStmtContext *> elseIfStmt();
    ElseIfStmtContext* elseIfStmt(size_t i);
    ElseStmtContext *elseStmt();

   
  };

  IfStmtContext* ifStmt();

  class  ElseIfStmtContext : public antlr4::ParserRuleContext {
  public:
    ElseIfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BodyContext *body();

   
  };

  ElseIfStmtContext* elseIfStmt();

  class  ElseStmtContext : public antlr4::ParserRuleContext {
  public:
    ElseStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BodyContext *body();

   
  };

  ElseStmtContext* elseStmt();

  class  SwitchStmtContext : public antlr4::ParserRuleContext {
  public:
    SwitchStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierExprContext *identifierExpr();
    SwitchBodyContext *switchBody();

   
  };

  SwitchStmtContext* switchStmt();

  class  SwitchBodyContext : public antlr4::ParserRuleContext {
  public:
    SwitchBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SwitchCaseContext *> switchCase();
    SwitchCaseContext* switchCase(size_t i);

   
  };

  SwitchBodyContext* switchBody();

  class  SwitchCaseContext : public antlr4::ParserRuleContext {
  public:
    SwitchCaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BodyContext *body();

   
  };

  SwitchCaseContext* switchCase();

  class  ForStmtContext : public antlr4::ParserRuleContext {
  public:
    ForStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    BodyContext *body();
    VarInitContext *varInit();
    AssignStmtContext *assignStmt();

   
  };

  ForStmtContext* forStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    BodyContext *body();

   
  };

  WhileStmtContext* whileStmt();

  class  AssignStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierExprContext *identifierExpr();
    ExprContext *expr();

   
  };

  AssignStmtContext* assignStmt();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

   
  };

  ReturnStmtContext* returnStmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncExprContext *funcExpr();
    LitExprContext *litExpr();
    IdentifierExprContext *identifierExpr();
    ParenExprContext *parenExpr();
    AccessExprContext *accessExpr();
    OpExprContext *opExpr();

   
  };

  ExprContext* expr();

  class  NonOpExprContext : public antlr4::ParserRuleContext {
  public:
    NonOpExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncExprContext *funcExpr();
    LitExprContext *litExpr();
    IdentifierExprContext *identifierExpr();
    ParenExprContext *parenExpr();
    AccessExprContext *accessExpr();

   
  };

  NonOpExprContext* nonOpExpr();

  class  NonAccessExprContext : public antlr4::ParserRuleContext {
  public:
    NonAccessExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncExprContext *funcExpr();
    IdentifierExprContext *identifierExpr();
    ParenExprContext *parenExpr();

   
  };

  NonAccessExprContext* nonAccessExpr();

  class  FuncExprContext : public antlr4::ParserRuleContext {
  public:
    FuncExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FuncNameContext *funcName();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

   
  };

  FuncExprContext* funcExpr();

  class  OpExprContext : public antlr4::ParserRuleContext {
  public:
    OpExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BinaryOpContext *binaryOp();
    PrefixOpContext *prefixOp();
    PostfixOpContext *postfixOp();
    TernaryOpContext *ternaryOp();

   
  };

  OpExprContext* opExpr();

  class  BinaryOpContext : public antlr4::ParserRuleContext {
  public:
    BinaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NonOpExprContext *> nonOpExpr();
    NonOpExprContext* nonOpExpr(size_t i);
    std::vector<Binary_opContext *> binary_op();
    Binary_opContext* binary_op(size_t i);

   
  };

  BinaryOpContext* binaryOp();

  class  PrefixOpContext : public antlr4::ParserRuleContext {
  public:
    PrefixOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Prefix_opContext *prefix_op();
    NonOpExprContext *nonOpExpr();

   
  };

  PrefixOpContext* prefixOp();

  class  PostfixOpContext : public antlr4::ParserRuleContext {
  public:
    PostfixOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonOpExprContext *nonOpExpr();
    Postfix_opContext *postfix_op();

   
  };

  PostfixOpContext* postfixOp();

  class  TernaryOpContext : public antlr4::ParserRuleContext {
  public:
    TernaryOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonOpExprContext *nonOpExpr();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

   
  };

  TernaryOpContext* ternaryOp();

  class  IdentifierExprContext : public antlr4::ParserRuleContext {
  public:
    IdentifierExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarNameContext *varName();

   
  };

  IdentifierExprContext* identifierExpr();

  class  LitExprContext : public antlr4::ParserRuleContext {
  public:
    LitExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LIT();
    antlr4::tree::TerminalNode *DECIMAL_LIT();
    antlr4::tree::TerminalNode *STRING_LIT();
    antlr4::tree::TerminalNode *BOOL_LIT();

   
  };

  LitExprContext* litExpr();

  class  AccessExprContext : public antlr4::ParserRuleContext {
  public:
    AccessExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NonAccessExprContext *nonAccessExpr();
    std::vector<AccessSubExprContext *> accessSubExpr();
    AccessSubExprContext* accessSubExpr(size_t i);

   
  };

  AccessExprContext* accessExpr();

  class  AccessSubExprContext : public antlr4::ParserRuleContext {
  public:
    AccessSubExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AccessMemberContext *accessMember();
    AccessBracketsContext *accessBrackets();

   
  };

  AccessSubExprContext* accessSubExpr();

  class  AccessMemberContext : public antlr4::ParserRuleContext {
  public:
    AccessMemberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierExprContext *identifierExpr();

   
  };

  AccessMemberContext* accessMember();

  class  AccessBracketsContext : public antlr4::ParserRuleContext {
  public:
    AccessBracketsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

   
  };

  AccessBracketsContext* accessBrackets();

  class  ParenExprContext : public antlr4::ParserRuleContext {
  public:
    ParenExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();

   
  };

  ParenExprContext* parenExpr();

  class  FuncNameContext : public antlr4::ParserRuleContext {
  public:
    FuncNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

   
  };

  FuncNameContext* funcName();

  class  VarNameContext : public antlr4::ParserRuleContext {
  public:
    VarNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

   
  };

  VarNameContext* varName();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

   
  };

  TypeNameContext* typeName();

  class  StructNameContext : public antlr4::ParserRuleContext {
  public:
    StructNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

   
  };

  StructNameContext* structName();

  class  Postfix_opContext : public antlr4::ParserRuleContext {
  public:
    Postfix_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Postfix_opContext* postfix_op();

  class  Prefix_opContext : public antlr4::ParserRuleContext {
  public:
    Prefix_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Postfix_opContext *postfix_op();

   
  };

  Prefix_opContext* prefix_op();

  class  Binary_opContext : public antlr4::ParserRuleContext {
  public:
    Binary_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  Binary_opContext* binary_op();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

