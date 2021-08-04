
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
    T__50 = 51, T__51 = 52, T__52 = 53, T__53 = 54, T__54 = 55, T__55 = 56, 
    T__56 = 57, T__57 = 58, INT_LIT = 59, DECIMAL_LIT = 60, BOOL_LIT = 61, 
    StringLit = 62, NAME = 63, WS = 64, NEWLINE = 65
  };

  enum {
    RuleProg = 0, RuleDecl = 1, RuleNamespaceDecl = 2, RuleVarDecl = 3, 
    RuleVar = 4, RuleVarInit = 5, RuleType = 6, RuleTypeModifier = 7, RuleNamespaceSpecifier = 8, 
    RuleFuncDecl = 9, RuleFunc = 10, RuleParameter = 11, RuleBody = 12, 
    RuleStructDecl = 13, RuleStructMember = 14, RuleStructVar = 15, RuleStructMethod = 16, 
    RulePrivateDecl = 17, RuleGenericDecl = 18, RuleGenericInstantiation = 19, 
    RuleStmt = 20, RuleIfStmt = 21, RuleElseIfStmt = 22, RuleElseStmt = 23, 
    RuleSwitchStmt = 24, RuleSwitchBody = 25, RuleSwitchCase = 26, RuleForStmt = 27, 
    RuleWhileStmt = 28, RuleAssignStmt = 29, RuleReturnStmt = 30, RuleExpr = 31, 
    RuleDot = 32, RuleArrow = 33, RuleLiteral = 34, RuleFuncName = 35, RuleVarName = 36, 
    RuleTypeName = 37, RuleStructName = 38, RulePostfix_op = 39, RulePrefix_op = 40, 
    RuleBinary_op = 41
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
  class NamespaceDeclContext;
  class VarDeclContext;
  class VarContext;
  class VarInitContext;
  class TypeContext;
  class TypeModifierContext;
  class NamespaceSpecifierContext;
  class FuncDeclContext;
  class FuncContext;
  class ParameterContext;
  class BodyContext;
  class StructDeclContext;
  class StructMemberContext;
  class StructVarContext;
  class StructMethodContext;
  class PrivateDeclContext;
  class GenericDeclContext;
  class GenericInstantiationContext;
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
  class DotContext;
  class ArrowContext;
  class LiteralContext;
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
    NamespaceDeclContext *namespaceDecl();

   
  };

  DeclContext* decl();

  class  NamespaceDeclContext : public antlr4::ParserRuleContext {
  public:
    NamespaceDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    std::vector<DeclContext *> decl();
    DeclContext* decl(size_t i);

   
  };

  NamespaceDeclContext* namespaceDecl();

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
    std::vector<NamespaceSpecifierContext *> namespaceSpecifier();
    NamespaceSpecifierContext* namespaceSpecifier(size_t i);
    GenericInstantiationContext *genericInstantiation();
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

  class  NamespaceSpecifierContext : public antlr4::ParserRuleContext {
  public:
    NamespaceSpecifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();

   
  };

  NamespaceSpecifierContext* namespaceSpecifier();

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
    TypeContext *type();
    BodyContext *body();
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
    PrivateDeclContext *privateDecl();
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

  class  PrivateDeclContext : public antlr4::ParserRuleContext {
  public:
    PrivateDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  PrivateDeclContext* privateDecl();

  class  GenericDeclContext : public antlr4::ParserRuleContext {
  public:
    GenericDeclContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);

   
  };

  GenericDeclContext* genericDecl();

  class  GenericInstantiationContext : public antlr4::ParserRuleContext {
  public:
    GenericInstantiationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeContext *> type();
    TypeContext* type(size_t i);

   
  };

  GenericInstantiationContext* genericInstantiation();

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
    ExprContext *expr();
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
    VarInitContext *varInit();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    BodyContext *body();

   
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
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);

   
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
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  DotExprContext : public ExprContext {
  public:
    DotExprContext(ExprContext *ctx);

    ExprContext *expr();
    VarNameContext *varName();
    DotContext *dot();
    ArrowContext *arrow();
  };

  class  FuncExprContext : public ExprContext {
  public:
    FuncExprContext(ExprContext *ctx);

    FuncNameContext *funcName();
    std::vector<NamespaceSpecifierContext *> namespaceSpecifier();
    NamespaceSpecifierContext* namespaceSpecifier(size_t i);
    GenericInstantiationContext *genericInstantiation();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
  };

  class  BracketExprContext : public ExprContext {
  public:
    BracketExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
  };

  class  PrefixOpExprContext : public ExprContext {
  public:
    PrefixOpExprContext(ExprContext *ctx);

    Prefix_opContext *prefix_op();
    ExprContext *expr();
  };

  class  MethodExprContext : public ExprContext {
  public:
    MethodExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    FuncNameContext *funcName();
    GenericInstantiationContext *genericInstantiation();
  };

  class  PostfixOpExprContext : public ExprContext {
  public:
    PostfixOpExprContext(ExprContext *ctx);

    ExprContext *expr();
    Postfix_opContext *postfix_op();
  };

  class  BinaryOpExprContext : public ExprContext {
  public:
    BinaryOpExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Binary_opContext *binary_op();
  };

  class  TernaryOpExprContext : public ExprContext {
  public:
    TernaryOpExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
  };

  class  LitExprContext : public ExprContext {
  public:
    LitExprContext(ExprContext *ctx);

    LiteralContext *literal();
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    ExprContext *expr();
  };

  class  IdentifierExprContext : public ExprContext {
  public:
    IdentifierExprContext(ExprContext *ctx);

    VarNameContext *varName();
    std::vector<NamespaceSpecifierContext *> namespaceSpecifier();
    NamespaceSpecifierContext* namespaceSpecifier(size_t i);
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  DotContext : public antlr4::ParserRuleContext {
  public:
    DotContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  DotContext* dot();

  class  ArrowContext : public antlr4::ParserRuleContext {
  public:
    ArrowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

   
  };

  ArrowContext* arrow();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT_LIT();
    antlr4::tree::TerminalNode *DECIMAL_LIT();
    antlr4::tree::TerminalNode *StringLit();
    antlr4::tree::TerminalNode *BOOL_LIT();

   
  };

  LiteralContext* literal();

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


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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

