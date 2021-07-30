
// Generated from Toc.g4 by ANTLR 4.9.2


#include "TocListener.h"

#include "TocParser.h"


using namespace antlrcpp;
using namespace antlr4;

TocParser::TocParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TocParser::~TocParser() {
  delete _interpreter;
}

std::string TocParser::getGrammarFileName() const {
  return "Toc.g4";
}

const std::vector<std::string>& TocParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TocParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

TocParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::ProgContext::EOF() {
  return getToken(TocParser::EOF, 0);
}

std::vector<TocParser::DeclContext *> TocParser::ProgContext::decl() {
  return getRuleContexts<TocParser::DeclContext>();
}

TocParser::DeclContext* TocParser::ProgContext::decl(size_t i) {
  return getRuleContext<TocParser::DeclContext>(i);
}


size_t TocParser::ProgContext::getRuleIndex() const {
  return TocParser::RuleProg;
}

void TocParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void TocParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

TocParser::ProgContext* TocParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, TocParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(80);
      decl();
      setState(83); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__0)
      | (1ULL << TocParser::T__6)
      | (1ULL << TocParser::T__12))) != 0));
    setState(85);
    match(TocParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

TocParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarDeclContext* TocParser::DeclContext::varDecl() {
  return getRuleContext<TocParser::VarDeclContext>(0);
}

TocParser::FuncDeclContext* TocParser::DeclContext::funcDecl() {
  return getRuleContext<TocParser::FuncDeclContext>(0);
}

TocParser::StructDeclContext* TocParser::DeclContext::structDecl() {
  return getRuleContext<TocParser::StructDeclContext>(0);
}


size_t TocParser::DeclContext::getRuleIndex() const {
  return TocParser::RuleDecl;
}

void TocParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void TocParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}

TocParser::DeclContext* TocParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, TocParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(87);
        varDecl();
        break;
      }

      case TocParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(88);
        funcDecl();
        break;
      }

      case TocParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(89);
        structDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

TocParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarContext* TocParser::VarDeclContext::var() {
  return getRuleContext<TocParser::VarContext>(0);
}


size_t TocParser::VarDeclContext::getRuleIndex() const {
  return TocParser::RuleVarDecl;
}

void TocParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void TocParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}

TocParser::VarDeclContext* TocParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, TocParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    match(TocParser::T__0);
    setState(93);
    var();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

TocParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarNameContext* TocParser::VarContext::varName() {
  return getRuleContext<TocParser::VarNameContext>(0);
}

TocParser::TypeContext* TocParser::VarContext::type() {
  return getRuleContext<TocParser::TypeContext>(0);
}

TocParser::ExprContext* TocParser::VarContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::VarContext::getRuleIndex() const {
  return TocParser::RuleVar;
}

void TocParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void TocParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

TocParser::VarContext* TocParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 6, TocParser::RuleVar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    varName();

    setState(96);
    match(TocParser::T__1);
    setState(97);
    type();
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__2) {
      setState(99);
      match(TocParser::T__2);
      setState(100);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarInitContext ------------------------------------------------------------------

TocParser::VarInitContext::VarInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarNameContext* TocParser::VarInitContext::varName() {
  return getRuleContext<TocParser::VarNameContext>(0);
}

TocParser::TypeContext* TocParser::VarInitContext::type() {
  return getRuleContext<TocParser::TypeContext>(0);
}

TocParser::ExprContext* TocParser::VarInitContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::VarInitContext::getRuleIndex() const {
  return TocParser::RuleVarInit;
}

void TocParser::VarInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarInit(this);
}

void TocParser::VarInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarInit(this);
}

TocParser::VarInitContext* TocParser::varInit() {
  VarInitContext *_localctx = _tracker.createInstance<VarInitContext>(_ctx, getState());
  enterRule(_localctx, 8, TocParser::RuleVarInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    varName();

    setState(104);
    match(TocParser::T__1);
    setState(105);
    type();

    setState(107);
    match(TocParser::T__2);
    setState(108);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

TocParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::TypeNameContext* TocParser::TypeContext::typeName() {
  return getRuleContext<TocParser::TypeNameContext>(0);
}

std::vector<TocParser::TypeModifierContext *> TocParser::TypeContext::typeModifier() {
  return getRuleContexts<TocParser::TypeModifierContext>();
}

TocParser::TypeModifierContext* TocParser::TypeContext::typeModifier(size_t i) {
  return getRuleContext<TocParser::TypeModifierContext>(i);
}


size_t TocParser::TypeContext::getRuleIndex() const {
  return TocParser::RuleType;
}

void TocParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void TocParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

TocParser::TypeContext* TocParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 10, TocParser::RuleType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    typeName();
    setState(114);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__3

    || _la == TocParser::T__4) {
      setState(111);
      typeModifier();
      setState(116);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeModifierContext ------------------------------------------------------------------

TocParser::TypeModifierContext::TypeModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::TypeModifierContext::NUMBER() {
  return getToken(TocParser::NUMBER, 0);
}


size_t TocParser::TypeModifierContext::getRuleIndex() const {
  return TocParser::RuleTypeModifier;
}

void TocParser::TypeModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeModifier(this);
}

void TocParser::TypeModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeModifier(this);
}

TocParser::TypeModifierContext* TocParser::typeModifier() {
  TypeModifierContext *_localctx = _tracker.createInstance<TypeModifierContext>(_ctx, getState());
  enterRule(_localctx, 12, TocParser::RuleTypeModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__3: {
        enterOuterAlt(_localctx, 1);
        setState(117);
        match(TocParser::T__3);
        break;
      }

      case TocParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(118);
        match(TocParser::T__4);
        setState(120);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TocParser::NUMBER) {
          setState(119);
          match(TocParser::NUMBER);
        }
        setState(122);
        match(TocParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDeclContext ------------------------------------------------------------------

TocParser::FuncDeclContext::FuncDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncContext* TocParser::FuncDeclContext::func() {
  return getRuleContext<TocParser::FuncContext>(0);
}


size_t TocParser::FuncDeclContext::getRuleIndex() const {
  return TocParser::RuleFuncDecl;
}

void TocParser::FuncDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDecl(this);
}

void TocParser::FuncDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDecl(this);
}

TocParser::FuncDeclContext* TocParser::funcDecl() {
  FuncDeclContext *_localctx = _tracker.createInstance<FuncDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, TocParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(TocParser::T__6);
    setState(126);
    func();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

TocParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncNameContext* TocParser::FuncContext::funcName() {
  return getRuleContext<TocParser::FuncNameContext>(0);
}

TocParser::ParameterContext* TocParser::FuncContext::parameter() {
  return getRuleContext<TocParser::ParameterContext>(0);
}

TocParser::BodyContext* TocParser::FuncContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}

TocParser::TypeContext* TocParser::FuncContext::type() {
  return getRuleContext<TocParser::TypeContext>(0);
}


size_t TocParser::FuncContext::getRuleIndex() const {
  return TocParser::RuleFunc;
}

void TocParser::FuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc(this);
}

void TocParser::FuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc(this);
}

TocParser::FuncContext* TocParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 16, TocParser::RuleFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    funcName();
    setState(129);
    match(TocParser::T__7);
    setState(130);
    parameter();
    setState(131);
    match(TocParser::T__8);

    setState(132);
    match(TocParser::T__1);
    setState(133);
    type();
    setState(135);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

TocParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::VarContext *> TocParser::ParameterContext::var() {
  return getRuleContexts<TocParser::VarContext>();
}

TocParser::VarContext* TocParser::ParameterContext::var(size_t i) {
  return getRuleContext<TocParser::VarContext>(i);
}


size_t TocParser::ParameterContext::getRuleIndex() const {
  return TocParser::RuleParameter;
}

void TocParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void TocParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

TocParser::ParameterContext* TocParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 18, TocParser::RuleParameter);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::NAME) {
      setState(137);
      var();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__9) {
        setState(138);
        match(TocParser::T__9);
        setState(139);
        var();
        setState(144);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

TocParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::StmtContext *> TocParser::BodyContext::stmt() {
  return getRuleContexts<TocParser::StmtContext>();
}

TocParser::StmtContext* TocParser::BodyContext::stmt(size_t i) {
  return getRuleContext<TocParser::StmtContext>(i);
}


size_t TocParser::BodyContext::getRuleIndex() const {
  return TocParser::RuleBody;
}

void TocParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void TocParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}

TocParser::BodyContext* TocParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 20, TocParser::RuleBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(TocParser::T__10);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__0)
      | (1ULL << TocParser::T__7)
      | (1ULL << TocParser::T__13)
      | (1ULL << TocParser::T__15)
      | (1ULL << TocParser::T__17)
      | (1ULL << TocParser::T__18)
      | (1ULL << TocParser::T__19)
      | (1ULL << TocParser::PREFIX_OP)
      | (1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::STRING_LIT)
      | (1ULL << TocParser::BOOL_LIT)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(148);
      stmt();
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(TocParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclContext ------------------------------------------------------------------

TocParser::StructDeclContext::StructDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::StructNameContext* TocParser::StructDeclContext::structName() {
  return getRuleContext<TocParser::StructNameContext>(0);
}

std::vector<TocParser::StructMemberContext *> TocParser::StructDeclContext::structMember() {
  return getRuleContexts<TocParser::StructMemberContext>();
}

TocParser::StructMemberContext* TocParser::StructDeclContext::structMember(size_t i) {
  return getRuleContext<TocParser::StructMemberContext>(i);
}


size_t TocParser::StructDeclContext::getRuleIndex() const {
  return TocParser::RuleStructDecl;
}

void TocParser::StructDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDecl(this);
}

void TocParser::StructDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDecl(this);
}

TocParser::StructDeclContext* TocParser::structDecl() {
  StructDeclContext *_localctx = _tracker.createInstance<StructDeclContext>(_ctx, getState());
  enterRule(_localctx, 22, TocParser::RuleStructDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(TocParser::T__12);
    setState(157);
    structName();
    setState(158);
    match(TocParser::T__10);
    setState(162);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::NAME) {
      setState(159);
      structMember();
      setState(164);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(165);
    match(TocParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructMemberContext ------------------------------------------------------------------

TocParser::StructMemberContext::StructMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::StructVarContext* TocParser::StructMemberContext::structVar() {
  return getRuleContext<TocParser::StructVarContext>(0);
}

TocParser::StructMethodContext* TocParser::StructMemberContext::structMethod() {
  return getRuleContext<TocParser::StructMethodContext>(0);
}


size_t TocParser::StructMemberContext::getRuleIndex() const {
  return TocParser::RuleStructMember;
}

void TocParser::StructMemberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructMember(this);
}

void TocParser::StructMemberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructMember(this);
}

TocParser::StructMemberContext* TocParser::structMember() {
  StructMemberContext *_localctx = _tracker.createInstance<StructMemberContext>(_ctx, getState());
  enterRule(_localctx, 24, TocParser::RuleStructMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(169);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      structVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      structMethod();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructVarContext ------------------------------------------------------------------

TocParser::StructVarContext::StructVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarContext* TocParser::StructVarContext::var() {
  return getRuleContext<TocParser::VarContext>(0);
}


size_t TocParser::StructVarContext::getRuleIndex() const {
  return TocParser::RuleStructVar;
}

void TocParser::StructVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructVar(this);
}

void TocParser::StructVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructVar(this);
}

TocParser::StructVarContext* TocParser::structVar() {
  StructVarContext *_localctx = _tracker.createInstance<StructVarContext>(_ctx, getState());
  enterRule(_localctx, 26, TocParser::RuleStructVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    var();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructMethodContext ------------------------------------------------------------------

TocParser::StructMethodContext::StructMethodContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncContext* TocParser::StructMethodContext::func() {
  return getRuleContext<TocParser::FuncContext>(0);
}


size_t TocParser::StructMethodContext::getRuleIndex() const {
  return TocParser::RuleStructMethod;
}

void TocParser::StructMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructMethod(this);
}

void TocParser::StructMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructMethod(this);
}

TocParser::StructMethodContext* TocParser::structMethod() {
  StructMethodContext *_localctx = _tracker.createInstance<StructMethodContext>(_ctx, getState());
  enterRule(_localctx, 28, TocParser::RuleStructMethod);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    func();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

TocParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarDeclContext* TocParser::StmtContext::varDecl() {
  return getRuleContext<TocParser::VarDeclContext>(0);
}

TocParser::IfStmtContext* TocParser::StmtContext::ifStmt() {
  return getRuleContext<TocParser::IfStmtContext>(0);
}

TocParser::SwitchStmtContext* TocParser::StmtContext::switchStmt() {
  return getRuleContext<TocParser::SwitchStmtContext>(0);
}

TocParser::ForStmtContext* TocParser::StmtContext::forStmt() {
  return getRuleContext<TocParser::ForStmtContext>(0);
}

TocParser::WhileStmtContext* TocParser::StmtContext::whileStmt() {
  return getRuleContext<TocParser::WhileStmtContext>(0);
}

TocParser::AssignStmtContext* TocParser::StmtContext::assignStmt() {
  return getRuleContext<TocParser::AssignStmtContext>(0);
}

TocParser::ReturnStmtContext* TocParser::StmtContext::returnStmt() {
  return getRuleContext<TocParser::ReturnStmtContext>(0);
}

TocParser::ExprContext* TocParser::StmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::StmtContext::getRuleIndex() const {
  return TocParser::RuleStmt;
}

void TocParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void TocParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

TocParser::StmtContext* TocParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 30, TocParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(175);
      varDecl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(176);
      ifStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(177);
      switchStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(178);
      forStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(179);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(180);
      assignStmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(181);
      returnStmt();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(182);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

TocParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::ExprContext *> TocParser::IfStmtContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::IfStmtContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

std::vector<TocParser::BodyContext *> TocParser::IfStmtContext::body() {
  return getRuleContexts<TocParser::BodyContext>();
}

TocParser::BodyContext* TocParser::IfStmtContext::body(size_t i) {
  return getRuleContext<TocParser::BodyContext>(i);
}


size_t TocParser::IfStmtContext::getRuleIndex() const {
  return TocParser::RuleIfStmt;
}

void TocParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}

void TocParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}

TocParser::IfStmtContext* TocParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 32, TocParser::RuleIfStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(TocParser::T__13);
    setState(186);
    expr();
    setState(187);
    body();
    setState(195);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(188);
        match(TocParser::T__14);
        setState(189);
        match(TocParser::T__13);
        setState(190);
        expr();
        setState(191);
        body(); 
      }
      setState(197);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
    setState(200);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__14) {
      setState(198);
      match(TocParser::T__14);
      setState(199);
      body();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchStmtContext ------------------------------------------------------------------

TocParser::SwitchStmtContext::SwitchStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::IdentifierExprContext* TocParser::SwitchStmtContext::identifierExpr() {
  return getRuleContext<TocParser::IdentifierExprContext>(0);
}

TocParser::SwitchBodyContext* TocParser::SwitchStmtContext::switchBody() {
  return getRuleContext<TocParser::SwitchBodyContext>(0);
}


size_t TocParser::SwitchStmtContext::getRuleIndex() const {
  return TocParser::RuleSwitchStmt;
}

void TocParser::SwitchStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchStmt(this);
}

void TocParser::SwitchStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchStmt(this);
}

TocParser::SwitchStmtContext* TocParser::switchStmt() {
  SwitchStmtContext *_localctx = _tracker.createInstance<SwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, TocParser::RuleSwitchStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(TocParser::T__15);
    setState(203);
    identifierExpr();
    setState(204);
    switchBody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchBodyContext ------------------------------------------------------------------

TocParser::SwitchBodyContext::SwitchBodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::ExprContext *> TocParser::SwitchBodyContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::SwitchBodyContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

std::vector<TocParser::BodyContext *> TocParser::SwitchBodyContext::body() {
  return getRuleContexts<TocParser::BodyContext>();
}

TocParser::BodyContext* TocParser::SwitchBodyContext::body(size_t i) {
  return getRuleContext<TocParser::BodyContext>(i);
}


size_t TocParser::SwitchBodyContext::getRuleIndex() const {
  return TocParser::RuleSwitchBody;
}

void TocParser::SwitchBodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitchBody(this);
}

void TocParser::SwitchBodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitchBody(this);
}

TocParser::SwitchBodyContext* TocParser::switchBody() {
  SwitchBodyContext *_localctx = _tracker.createInstance<SwitchBodyContext>(_ctx, getState());
  enterRule(_localctx, 36, TocParser::RuleSwitchBody);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(206);
    match(TocParser::T__10);
    setState(213);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__16) {
      setState(207);
      match(TocParser::T__16);
      setState(208);
      expr();
      setState(209);
      body();
      setState(215);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(216);
    match(TocParser::T__11);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForStmtContext ------------------------------------------------------------------

TocParser::ForStmtContext::ForStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::ExprContext *> TocParser::ForStmtContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::ForStmtContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

TocParser::BodyContext* TocParser::ForStmtContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}

TocParser::VarInitContext* TocParser::ForStmtContext::varInit() {
  return getRuleContext<TocParser::VarInitContext>(0);
}

TocParser::AssignStmtContext* TocParser::ForStmtContext::assignStmt() {
  return getRuleContext<TocParser::AssignStmtContext>(0);
}


size_t TocParser::ForStmtContext::getRuleIndex() const {
  return TocParser::RuleForStmt;
}

void TocParser::ForStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStmt(this);
}

void TocParser::ForStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStmt(this);
}

TocParser::ForStmtContext* TocParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, TocParser::RuleForStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(TocParser::T__17);
    setState(221);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(219);
      varInit();
      break;
    }

    case 2: {
      setState(220);
      assignStmt();
      break;
    }

    default:
      break;
    }
    setState(223);
    match(TocParser::T__9);
    setState(224);
    expr();
    setState(225);
    match(TocParser::T__9);
    setState(226);
    expr();
    setState(227);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

TocParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::WhileStmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::BodyContext* TocParser::WhileStmtContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}


size_t TocParser::WhileStmtContext::getRuleIndex() const {
  return TocParser::RuleWhileStmt;
}

void TocParser::WhileStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStmt(this);
}

void TocParser::WhileStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStmt(this);
}

TocParser::WhileStmtContext* TocParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, TocParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(TocParser::T__18);
    setState(230);
    expr();
    setState(231);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignStmtContext ------------------------------------------------------------------

TocParser::AssignStmtContext::AssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::IdentifierExprContext* TocParser::AssignStmtContext::identifierExpr() {
  return getRuleContext<TocParser::IdentifierExprContext>(0);
}

TocParser::ExprContext* TocParser::AssignStmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::AssignStmtContext::getRuleIndex() const {
  return TocParser::RuleAssignStmt;
}

void TocParser::AssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStmt(this);
}

void TocParser::AssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStmt(this);
}

TocParser::AssignStmtContext* TocParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 42, TocParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    identifierExpr();
    setState(234);
    match(TocParser::T__2);
    setState(235);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

TocParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::ReturnStmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::ReturnStmtContext::getRuleIndex() const {
  return TocParser::RuleReturnStmt;
}

void TocParser::ReturnStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStmt(this);
}

void TocParser::ReturnStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStmt(this);
}

TocParser::ReturnStmtContext* TocParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 44, TocParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(TocParser::T__19);
    setState(238);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

TocParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncExprContext* TocParser::ExprContext::funcExpr() {
  return getRuleContext<TocParser::FuncExprContext>(0);
}

TocParser::LitExprContext* TocParser::ExprContext::litExpr() {
  return getRuleContext<TocParser::LitExprContext>(0);
}

TocParser::IdentifierExprContext* TocParser::ExprContext::identifierExpr() {
  return getRuleContext<TocParser::IdentifierExprContext>(0);
}

TocParser::ParenExprContext* TocParser::ExprContext::parenExpr() {
  return getRuleContext<TocParser::ParenExprContext>(0);
}

TocParser::AccessExprContext* TocParser::ExprContext::accessExpr() {
  return getRuleContext<TocParser::AccessExprContext>(0);
}

TocParser::OpExprContext* TocParser::ExprContext::opExpr() {
  return getRuleContext<TocParser::OpExprContext>(0);
}


size_t TocParser::ExprContext::getRuleIndex() const {
  return TocParser::RuleExpr;
}

void TocParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void TocParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}

TocParser::ExprContext* TocParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 46, TocParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(240);
      funcExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(241);
      litExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(242);
      identifierExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(243);
      parenExpr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(244);
      accessExpr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(245);
      opExpr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonOpExprContext ------------------------------------------------------------------

TocParser::NonOpExprContext::NonOpExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncExprContext* TocParser::NonOpExprContext::funcExpr() {
  return getRuleContext<TocParser::FuncExprContext>(0);
}

TocParser::LitExprContext* TocParser::NonOpExprContext::litExpr() {
  return getRuleContext<TocParser::LitExprContext>(0);
}

TocParser::IdentifierExprContext* TocParser::NonOpExprContext::identifierExpr() {
  return getRuleContext<TocParser::IdentifierExprContext>(0);
}

TocParser::ParenExprContext* TocParser::NonOpExprContext::parenExpr() {
  return getRuleContext<TocParser::ParenExprContext>(0);
}

TocParser::AccessExprContext* TocParser::NonOpExprContext::accessExpr() {
  return getRuleContext<TocParser::AccessExprContext>(0);
}


size_t TocParser::NonOpExprContext::getRuleIndex() const {
  return TocParser::RuleNonOpExpr;
}

void TocParser::NonOpExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonOpExpr(this);
}

void TocParser::NonOpExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonOpExpr(this);
}

TocParser::NonOpExprContext* TocParser::nonOpExpr() {
  NonOpExprContext *_localctx = _tracker.createInstance<NonOpExprContext>(_ctx, getState());
  enterRule(_localctx, 48, TocParser::RuleNonOpExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(253);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(248);
      funcExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(249);
      litExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(250);
      identifierExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(251);
      parenExpr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(252);
      accessExpr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NonAccessExprContext ------------------------------------------------------------------

TocParser::NonAccessExprContext::NonAccessExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncExprContext* TocParser::NonAccessExprContext::funcExpr() {
  return getRuleContext<TocParser::FuncExprContext>(0);
}

TocParser::IdentifierExprContext* TocParser::NonAccessExprContext::identifierExpr() {
  return getRuleContext<TocParser::IdentifierExprContext>(0);
}

TocParser::ParenExprContext* TocParser::NonAccessExprContext::parenExpr() {
  return getRuleContext<TocParser::ParenExprContext>(0);
}


size_t TocParser::NonAccessExprContext::getRuleIndex() const {
  return TocParser::RuleNonAccessExpr;
}

void TocParser::NonAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonAccessExpr(this);
}

void TocParser::NonAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonAccessExpr(this);
}

TocParser::NonAccessExprContext* TocParser::nonAccessExpr() {
  NonAccessExprContext *_localctx = _tracker.createInstance<NonAccessExprContext>(_ctx, getState());
  enterRule(_localctx, 50, TocParser::RuleNonAccessExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(255);
      funcExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(256);
      identifierExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(257);
      parenExpr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncExprContext ------------------------------------------------------------------

TocParser::FuncExprContext::FuncExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncNameContext* TocParser::FuncExprContext::funcName() {
  return getRuleContext<TocParser::FuncNameContext>(0);
}

std::vector<TocParser::ExprContext *> TocParser::FuncExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::FuncExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}


size_t TocParser::FuncExprContext::getRuleIndex() const {
  return TocParser::RuleFuncExpr;
}

void TocParser::FuncExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncExpr(this);
}

void TocParser::FuncExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncExpr(this);
}

TocParser::FuncExprContext* TocParser::funcExpr() {
  FuncExprContext *_localctx = _tracker.createInstance<FuncExprContext>(_ctx, getState());
  enterRule(_localctx, 52, TocParser::RuleFuncExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(260);
    funcName();
    setState(261);
    match(TocParser::T__7);
    setState(270);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__7)
      | (1ULL << TocParser::PREFIX_OP)
      | (1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::STRING_LIT)
      | (1ULL << TocParser::BOOL_LIT)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(262);
      expr();
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__9) {
        setState(263);
        match(TocParser::T__9);
        setState(264);
        expr();
        setState(269);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(272);
    match(TocParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpExprContext ------------------------------------------------------------------

TocParser::OpExprContext::OpExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::BinaryOpContext* TocParser::OpExprContext::binaryOp() {
  return getRuleContext<TocParser::BinaryOpContext>(0);
}

TocParser::PrefixOpContext* TocParser::OpExprContext::prefixOp() {
  return getRuleContext<TocParser::PrefixOpContext>(0);
}

TocParser::PostfixOpContext* TocParser::OpExprContext::postfixOp() {
  return getRuleContext<TocParser::PostfixOpContext>(0);
}

TocParser::TernaryOpContext* TocParser::OpExprContext::ternaryOp() {
  return getRuleContext<TocParser::TernaryOpContext>(0);
}


size_t TocParser::OpExprContext::getRuleIndex() const {
  return TocParser::RuleOpExpr;
}

void TocParser::OpExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpExpr(this);
}

void TocParser::OpExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpExpr(this);
}

TocParser::OpExprContext* TocParser::opExpr() {
  OpExprContext *_localctx = _tracker.createInstance<OpExprContext>(_ctx, getState());
  enterRule(_localctx, 54, TocParser::RuleOpExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(278);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(274);
      binaryOp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(275);
      prefixOp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(276);
      postfixOp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(277);
      ternaryOp();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOpContext ------------------------------------------------------------------

TocParser::BinaryOpContext::BinaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::NonOpExprContext *> TocParser::BinaryOpContext::nonOpExpr() {
  return getRuleContexts<TocParser::NonOpExprContext>();
}

TocParser::NonOpExprContext* TocParser::BinaryOpContext::nonOpExpr(size_t i) {
  return getRuleContext<TocParser::NonOpExprContext>(i);
}

std::vector<tree::TerminalNode *> TocParser::BinaryOpContext::BINARY_OP() {
  return getTokens(TocParser::BINARY_OP);
}

tree::TerminalNode* TocParser::BinaryOpContext::BINARY_OP(size_t i) {
  return getToken(TocParser::BINARY_OP, i);
}


size_t TocParser::BinaryOpContext::getRuleIndex() const {
  return TocParser::RuleBinaryOp;
}

void TocParser::BinaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOp(this);
}

void TocParser::BinaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOp(this);
}

TocParser::BinaryOpContext* TocParser::binaryOp() {
  BinaryOpContext *_localctx = _tracker.createInstance<BinaryOpContext>(_ctx, getState());
  enterRule(_localctx, 56, TocParser::RuleBinaryOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    nonOpExpr();
    setState(281);
    match(TocParser::BINARY_OP);
    setState(282);
    nonOpExpr();
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::BINARY_OP) {
      setState(283);
      match(TocParser::BINARY_OP);
      setState(284);
      nonOpExpr();
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixOpContext ------------------------------------------------------------------

TocParser::PrefixOpContext::PrefixOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::PrefixOpContext::PREFIX_OP() {
  return getToken(TocParser::PREFIX_OP, 0);
}

TocParser::NonOpExprContext* TocParser::PrefixOpContext::nonOpExpr() {
  return getRuleContext<TocParser::NonOpExprContext>(0);
}


size_t TocParser::PrefixOpContext::getRuleIndex() const {
  return TocParser::RulePrefixOp;
}

void TocParser::PrefixOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixOp(this);
}

void TocParser::PrefixOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixOp(this);
}

TocParser::PrefixOpContext* TocParser::prefixOp() {
  PrefixOpContext *_localctx = _tracker.createInstance<PrefixOpContext>(_ctx, getState());
  enterRule(_localctx, 58, TocParser::RulePrefixOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(TocParser::PREFIX_OP);
    setState(291);
    nonOpExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixOpContext ------------------------------------------------------------------

TocParser::PostfixOpContext::PostfixOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::NonOpExprContext* TocParser::PostfixOpContext::nonOpExpr() {
  return getRuleContext<TocParser::NonOpExprContext>(0);
}

tree::TerminalNode* TocParser::PostfixOpContext::POSTFIX_OP() {
  return getToken(TocParser::POSTFIX_OP, 0);
}


size_t TocParser::PostfixOpContext::getRuleIndex() const {
  return TocParser::RulePostfixOp;
}

void TocParser::PostfixOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfixOp(this);
}

void TocParser::PostfixOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfixOp(this);
}

TocParser::PostfixOpContext* TocParser::postfixOp() {
  PostfixOpContext *_localctx = _tracker.createInstance<PostfixOpContext>(_ctx, getState());
  enterRule(_localctx, 60, TocParser::RulePostfixOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    nonOpExpr();
    setState(294);
    match(TocParser::POSTFIX_OP);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TernaryOpContext ------------------------------------------------------------------

TocParser::TernaryOpContext::TernaryOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::NonOpExprContext* TocParser::TernaryOpContext::nonOpExpr() {
  return getRuleContext<TocParser::NonOpExprContext>(0);
}

std::vector<TocParser::ExprContext *> TocParser::TernaryOpContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::TernaryOpContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}


size_t TocParser::TernaryOpContext::getRuleIndex() const {
  return TocParser::RuleTernaryOp;
}

void TocParser::TernaryOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTernaryOp(this);
}

void TocParser::TernaryOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTernaryOp(this);
}

TocParser::TernaryOpContext* TocParser::ternaryOp() {
  TernaryOpContext *_localctx = _tracker.createInstance<TernaryOpContext>(_ctx, getState());
  enterRule(_localctx, 62, TocParser::RuleTernaryOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(296);
    nonOpExpr();
    setState(297);
    match(TocParser::T__20);
    setState(298);
    expr();
    setState(299);
    match(TocParser::T__1);
    setState(300);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierExprContext ------------------------------------------------------------------

TocParser::IdentifierExprContext::IdentifierExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarNameContext* TocParser::IdentifierExprContext::varName() {
  return getRuleContext<TocParser::VarNameContext>(0);
}


size_t TocParser::IdentifierExprContext::getRuleIndex() const {
  return TocParser::RuleIdentifierExpr;
}

void TocParser::IdentifierExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpr(this);
}

void TocParser::IdentifierExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpr(this);
}

TocParser::IdentifierExprContext* TocParser::identifierExpr() {
  IdentifierExprContext *_localctx = _tracker.createInstance<IdentifierExprContext>(_ctx, getState());
  enterRule(_localctx, 64, TocParser::RuleIdentifierExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(302);
    varName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LitExprContext ------------------------------------------------------------------

TocParser::LitExprContext::LitExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::LitExprContext::INT_LIT() {
  return getToken(TocParser::INT_LIT, 0);
}

tree::TerminalNode* TocParser::LitExprContext::DECIMAL_LIT() {
  return getToken(TocParser::DECIMAL_LIT, 0);
}

tree::TerminalNode* TocParser::LitExprContext::STRING_LIT() {
  return getToken(TocParser::STRING_LIT, 0);
}

tree::TerminalNode* TocParser::LitExprContext::BOOL_LIT() {
  return getToken(TocParser::BOOL_LIT, 0);
}


size_t TocParser::LitExprContext::getRuleIndex() const {
  return TocParser::RuleLitExpr;
}

void TocParser::LitExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLitExpr(this);
}

void TocParser::LitExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLitExpr(this);
}

TocParser::LitExprContext* TocParser::litExpr() {
  LitExprContext *_localctx = _tracker.createInstance<LitExprContext>(_ctx, getState());
  enterRule(_localctx, 66, TocParser::RuleLitExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::STRING_LIT)
      | (1ULL << TocParser::BOOL_LIT))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessExprContext ------------------------------------------------------------------

TocParser::AccessExprContext::AccessExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::NonAccessExprContext* TocParser::AccessExprContext::nonAccessExpr() {
  return getRuleContext<TocParser::NonAccessExprContext>(0);
}

std::vector<TocParser::IdentifierExprContext *> TocParser::AccessExprContext::identifierExpr() {
  return getRuleContexts<TocParser::IdentifierExprContext>();
}

TocParser::IdentifierExprContext* TocParser::AccessExprContext::identifierExpr(size_t i) {
  return getRuleContext<TocParser::IdentifierExprContext>(i);
}

std::vector<TocParser::ExprContext *> TocParser::AccessExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::AccessExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}


size_t TocParser::AccessExprContext::getRuleIndex() const {
  return TocParser::RuleAccessExpr;
}

void TocParser::AccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAccessExpr(this);
}

void TocParser::AccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAccessExpr(this);
}

TocParser::AccessExprContext* TocParser::accessExpr() {
  AccessExprContext *_localctx = _tracker.createInstance<AccessExprContext>(_ctx, getState());
  enterRule(_localctx, 68, TocParser::RuleAccessExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    nonAccessExpr();
    setState(313); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(313);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case TocParser::T__21:
        case TocParser::T__22: {
          setState(307);
          _la = _input->LA(1);
          if (!(_la == TocParser::T__21

          || _la == TocParser::T__22)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(308);
          identifierExpr();
          break;
        }

        case TocParser::T__4: {
          setState(309);
          match(TocParser::T__4);
          setState(310);
          expr();
          setState(311);
          match(TocParser::T__5);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(315); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__21)
      | (1ULL << TocParser::T__22))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParenExprContext ------------------------------------------------------------------

TocParser::ParenExprContext::ParenExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::ParenExprContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::ParenExprContext::getRuleIndex() const {
  return TocParser::RuleParenExpr;
}

void TocParser::ParenExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpr(this);
}

void TocParser::ParenExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpr(this);
}

TocParser::ParenExprContext* TocParser::parenExpr() {
  ParenExprContext *_localctx = _tracker.createInstance<ParenExprContext>(_ctx, getState());
  enterRule(_localctx, 70, TocParser::RuleParenExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(317);
    match(TocParser::T__7);
    setState(318);
    expr();
    setState(319);
    match(TocParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncNameContext ------------------------------------------------------------------

TocParser::FuncNameContext::FuncNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::FuncNameContext::NAME() {
  return getToken(TocParser::NAME, 0);
}


size_t TocParser::FuncNameContext::getRuleIndex() const {
  return TocParser::RuleFuncName;
}

void TocParser::FuncNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncName(this);
}

void TocParser::FuncNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncName(this);
}

TocParser::FuncNameContext* TocParser::funcName() {
  FuncNameContext *_localctx = _tracker.createInstance<FuncNameContext>(_ctx, getState());
  enterRule(_localctx, 72, TocParser::RuleFuncName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(TocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarNameContext ------------------------------------------------------------------

TocParser::VarNameContext::VarNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::VarNameContext::NAME() {
  return getToken(TocParser::NAME, 0);
}


size_t TocParser::VarNameContext::getRuleIndex() const {
  return TocParser::RuleVarName;
}

void TocParser::VarNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarName(this);
}

void TocParser::VarNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarName(this);
}

TocParser::VarNameContext* TocParser::varName() {
  VarNameContext *_localctx = _tracker.createInstance<VarNameContext>(_ctx, getState());
  enterRule(_localctx, 74, TocParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(323);
    match(TocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

TocParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::TypeNameContext::NAME() {
  return getToken(TocParser::NAME, 0);
}


size_t TocParser::TypeNameContext::getRuleIndex() const {
  return TocParser::RuleTypeName;
}

void TocParser::TypeNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeName(this);
}

void TocParser::TypeNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeName(this);
}

TocParser::TypeNameContext* TocParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 76, TocParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    match(TocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructNameContext ------------------------------------------------------------------

TocParser::StructNameContext::StructNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::StructNameContext::NAME() {
  return getToken(TocParser::NAME, 0);
}


size_t TocParser::StructNameContext::getRuleIndex() const {
  return TocParser::RuleStructName;
}

void TocParser::StructNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructName(this);
}

void TocParser::StructNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructName(this);
}

TocParser::StructNameContext* TocParser::structName() {
  StructNameContext *_localctx = _tracker.createInstance<StructNameContext>(_ctx, getState());
  enterRule(_localctx, 78, TocParser::RuleStructName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(TocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> TocParser::_decisionToDFA;
atn::PredictionContextCache TocParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TocParser::_atn;
std::vector<uint16_t> TocParser::_serializedATN;

std::vector<std::string> TocParser::_ruleNames = {
  "prog", "decl", "varDecl", "var", "varInit", "type", "typeModifier", "funcDecl", 
  "func", "parameter", "body", "structDecl", "structMember", "structVar", 
  "structMethod", "stmt", "ifStmt", "switchStmt", "switchBody", "forStmt", 
  "whileStmt", "assignStmt", "returnStmt", "expr", "nonOpExpr", "nonAccessExpr", 
  "funcExpr", "opExpr", "binaryOp", "prefixOp", "postfixOp", "ternaryOp", 
  "identifierExpr", "litExpr", "accessExpr", "parenExpr", "funcName", "varName", 
  "typeName", "structName"
};

std::vector<std::string> TocParser::_literalNames = {
  "", "'var'", "':'", "'='", "'*'", "'['", "']'", "'func'", "'('", "')'", 
  "','", "'{'", "'}'", "'struct'", "'if'", "'else'", "'switch'", "'case'", 
  "'for'", "'while'", "'return'", "'\u003F'", "'.'", "'->'"
};

std::vector<std::string> TocParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "POSTFIX_OP", "PREFIX_OP", "BINARY_OP", "INT_LIT", 
  "DECIMAL_LIT", "STRING_LIT", "BOOL_LIT", "NAME", "WS", "NEWLINE", "NUMBER"
};

dfa::Vocabulary TocParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TocParser::_tokenNames;

TocParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x24, 0x14c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x3, 0x2, 0x6, 0x2, 0x54, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
       0x55, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
       0x5d, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x68, 0xa, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x73, 0xa, 0x7, 0xc, 0x7, 0xe, 
       0x7, 0x76, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x7b, 
       0xa, 0x8, 0x3, 0x8, 0x5, 0x8, 0x7e, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x7, 0xb, 0x8f, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x92, 0xb, 0xb, 0x5, 
       0xb, 0x94, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0x98, 0xa, 0xc, 
       0xc, 0xc, 0xe, 0xc, 0x9b, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xa3, 0xa, 0xd, 0xc, 0xd, 
       0xe, 0xd, 0xa6, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
       0x5, 0xe, 0xac, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xba, 0xa, 0x11, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x7, 0x12, 0xc4, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xc7, 0xb, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xcb, 0xa, 0x12, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xd6, 0xa, 0x14, 0xc, 0x14, 0xe, 
       0x14, 0xd9, 0xb, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x5, 0x15, 0xe0, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
       0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xf9, 0xa, 0x19, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x100, 0xa, 
       0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x105, 0xa, 0x1b, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 
       0x10c, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x10f, 0xb, 0x1c, 0x5, 0x1c, 
       0x111, 0xa, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x119, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x120, 0xa, 0x1e, 0xc, 
       0x1e, 0xe, 0x1e, 0x123, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
       0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x24, 0x6, 0x24, 0x13c, 0xa, 0x24, 0xd, 0x24, 0xe, 
       0x24, 0x13d, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
       0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 
       0x3, 0x29, 0x3, 0x29, 0x2, 0x2, 0x2a, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
       0x50, 0x2, 0x4, 0x3, 0x2, 0x1d, 0x20, 0x3, 0x2, 0x18, 0x19, 0x2, 
       0x14d, 0x2, 0x53, 0x3, 0x2, 0x2, 0x2, 0x4, 0x5c, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x61, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0x69, 0x3, 0x2, 0x2, 0x2, 0xc, 0x70, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x82, 0x3, 
       0x2, 0x2, 0x2, 0x14, 0x93, 0x3, 0x2, 0x2, 0x2, 0x16, 0x95, 0x3, 0x2, 
       0x2, 0x2, 0x18, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xab, 0x3, 0x2, 0x2, 
       0x2, 0x1c, 0xad, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xaf, 0x3, 0x2, 0x2, 0x2, 
       0x20, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x22, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x24, 
       0xcc, 0x3, 0x2, 0x2, 0x2, 0x26, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x28, 0xdc, 
       0x3, 0x2, 0x2, 0x2, 0x2a, 0xe7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xeb, 0x3, 
       0x2, 0x2, 0x2, 0x2e, 0xef, 0x3, 0x2, 0x2, 0x2, 0x30, 0xf8, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0xff, 0x3, 0x2, 0x2, 0x2, 0x34, 0x104, 0x3, 0x2, 
       0x2, 0x2, 0x36, 0x106, 0x3, 0x2, 0x2, 0x2, 0x38, 0x118, 0x3, 0x2, 
       0x2, 0x2, 0x3a, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x124, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x127, 0x3, 0x2, 0x2, 0x2, 0x40, 0x12a, 0x3, 0x2, 
       0x2, 0x2, 0x42, 0x130, 0x3, 0x2, 0x2, 0x2, 0x44, 0x132, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x134, 0x3, 0x2, 0x2, 0x2, 0x48, 0x13f, 0x3, 0x2, 
       0x2, 0x2, 0x4a, 0x143, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x145, 0x3, 0x2, 
       0x2, 0x2, 0x4e, 0x147, 0x3, 0x2, 0x2, 0x2, 0x50, 0x149, 0x3, 0x2, 
       0x2, 0x2, 0x52, 0x54, 0x5, 0x4, 0x3, 0x2, 0x53, 0x52, 0x3, 0x2, 0x2, 
       0x2, 0x54, 0x55, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 
       0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 
       0x58, 0x7, 0x2, 0x2, 0x3, 0x58, 0x3, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5d, 
       0x5, 0x6, 0x4, 0x2, 0x5a, 0x5d, 0x5, 0x10, 0x9, 0x2, 0x5b, 0x5d, 
       0x5, 0x18, 0xd, 0x2, 0x5c, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 
       0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5, 0x3, 
       0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x8, 
       0x5, 0x2, 0x60, 0x7, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x5, 0x4c, 0x27, 
       0x2, 0x62, 0x63, 0x7, 0x4, 0x2, 0x2, 0x63, 0x64, 0x5, 0xc, 0x7, 0x2, 
       0x64, 0x67, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x5, 0x2, 0x2, 0x66, 
       0x68, 0x5, 0x30, 0x19, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 
       0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x9, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
       0x5, 0x4c, 0x27, 0x2, 0x6a, 0x6b, 0x7, 0x4, 0x2, 0x2, 0x6b, 0x6c, 
       0x5, 0xc, 0x7, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
       0x5, 0x2, 0x2, 0x6e, 0x6f, 0x5, 0x30, 0x19, 0x2, 0x6f, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x70, 0x74, 0x5, 0x4e, 0x28, 0x2, 0x71, 0x73, 0x5, 
       0xe, 0x8, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x76, 0x3, 0x2, 
       0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 
       0x2, 0x75, 0xd, 0x3, 0x2, 0x2, 0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 
       0x77, 0x7e, 0x7, 0x6, 0x2, 0x2, 0x78, 0x7a, 0x7, 0x7, 0x2, 0x2, 0x79, 
       0x7b, 0x7, 0x24, 0x2, 0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 
       0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7e, 
       0x7, 0x8, 0x2, 0x2, 0x7d, 0x77, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x78, 0x3, 
       0x2, 0x2, 0x2, 0x7e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x9, 
       0x2, 0x2, 0x80, 0x81, 0x5, 0x12, 0xa, 0x2, 0x81, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x82, 0x83, 0x5, 0x4a, 0x26, 0x2, 0x83, 0x84, 0x7, 0xa, 
       0x2, 0x2, 0x84, 0x85, 0x5, 0x14, 0xb, 0x2, 0x85, 0x86, 0x7, 0xb, 
       0x2, 0x2, 0x86, 0x87, 0x7, 0x4, 0x2, 0x2, 0x87, 0x88, 0x5, 0xc, 0x7, 
       0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x5, 0x16, 0xc, 
       0x2, 0x8a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x90, 0x5, 0x8, 0x5, 0x2, 
       0x8c, 0x8d, 0x7, 0xc, 0x2, 0x2, 0x8d, 0x8f, 0x5, 0x8, 0x5, 0x2, 0x8e, 
       0x8c, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x92, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 
       0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 0x3, 
       0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x93, 0x8b, 0x3, 0x2, 
       0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x15, 0x3, 0x2, 0x2, 
       0x2, 0x95, 0x99, 0x7, 0xd, 0x2, 0x2, 0x96, 0x98, 0x5, 0x20, 0x11, 
       0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 
       0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 
       0x9c, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
       0x7, 0xe, 0x2, 0x2, 0x9d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 
       0xf, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0x50, 0x29, 0x2, 0xa0, 0xa4, 0x7, 
       0xd, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x1a, 0xe, 0x2, 0xa2, 0xa1, 0x3, 
       0x2, 0x2, 0x2, 0xa3, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 
       0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa7, 0x3, 0x2, 0x2, 
       0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0xe, 0x2, 0x2, 
       0xa8, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x5, 0x1c, 0xf, 0x2, 
       0xaa, 0xac, 0x5, 0x1e, 0x10, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 
       0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xad, 
       0xae, 0x5, 0x8, 0x5, 0x2, 0xae, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
       0x5, 0x12, 0xa, 0x2, 0xb0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xba, 
       0x5, 0x6, 0x4, 0x2, 0xb2, 0xba, 0x5, 0x22, 0x12, 0x2, 0xb3, 0xba, 
       0x5, 0x24, 0x13, 0x2, 0xb4, 0xba, 0x5, 0x28, 0x15, 0x2, 0xb5, 0xba, 
       0x5, 0x2a, 0x16, 0x2, 0xb6, 0xba, 0x5, 0x2c, 0x17, 0x2, 0xb7, 0xba, 
       0x5, 0x2e, 0x18, 0x2, 0xb8, 0xba, 0x5, 0x30, 0x19, 0x2, 0xb9, 0xb1, 
       0x3, 0x2, 0x2, 0x2, 0xb9, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb3, 0x3, 
       0x2, 0x2, 0x2, 0xb9, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb5, 0x3, 0x2, 
       0x2, 0x2, 0xb9, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 
       0x2, 0xb9, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0x21, 0x3, 0x2, 0x2, 0x2, 
       0xbb, 0xbc, 0x7, 0x10, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x30, 0x19, 0x2, 
       0xbd, 0xc5, 0x5, 0x16, 0xc, 0x2, 0xbe, 0xbf, 0x7, 0x11, 0x2, 0x2, 
       0xbf, 0xc0, 0x7, 0x10, 0x2, 0x2, 0xc0, 0xc1, 0x5, 0x30, 0x19, 0x2, 
       0xc1, 0xc2, 0x5, 0x16, 0xc, 0x2, 0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 
       0xc3, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 
       0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xca, 
       0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x7, 
       0x11, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x16, 0xc, 0x2, 0xca, 0xc8, 0x3, 
       0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0xcc, 0xcd, 0x7, 0x12, 0x2, 0x2, 0xcd, 0xce, 0x5, 0x42, 
       0x22, 0x2, 0xce, 0xcf, 0x5, 0x26, 0x14, 0x2, 0xcf, 0x25, 0x3, 0x2, 
       0x2, 0x2, 0xd0, 0xd7, 0x7, 0xd, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x13, 
       0x2, 0x2, 0xd2, 0xd3, 0x5, 0x30, 0x19, 0x2, 0xd3, 0xd4, 0x5, 0x16, 
       0xc, 0x2, 0xd4, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd1, 0x3, 0x2, 0x2, 
       0x2, 0xd6, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 
       0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xda, 0x3, 0x2, 0x2, 0x2, 0xd9, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0xe, 0x2, 0x2, 0xdb, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x7, 0x14, 0x2, 0x2, 0xdd, 0xe0, 
       0x5, 0xa, 0x6, 0x2, 0xde, 0xe0, 0x5, 0x2c, 0x17, 0x2, 0xdf, 0xdd, 
       0x3, 0x2, 0x2, 0x2, 0xdf, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 
       0x2, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0xc, 0x2, 0x2, 0xe2, 0xe3, 0x5, 0x30, 
       0x19, 0x2, 0xe3, 0xe4, 0x7, 0xc, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x30, 
       0x19, 0x2, 0xe5, 0xe6, 0x5, 0x16, 0xc, 0x2, 0xe6, 0x29, 0x3, 0x2, 
       0x2, 0x2, 0xe7, 0xe8, 0x7, 0x15, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x30, 
       0x19, 0x2, 0xe9, 0xea, 0x5, 0x16, 0xc, 0x2, 0xea, 0x2b, 0x3, 0x2, 
       0x2, 0x2, 0xeb, 0xec, 0x5, 0x42, 0x22, 0x2, 0xec, 0xed, 0x7, 0x5, 
       0x2, 0x2, 0xed, 0xee, 0x5, 0x30, 0x19, 0x2, 0xee, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0xef, 0xf0, 0x7, 0x16, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x30, 
       0x19, 0x2, 0xf1, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf9, 0x5, 0x36, 
       0x1c, 0x2, 0xf3, 0xf9, 0x5, 0x44, 0x23, 0x2, 0xf4, 0xf9, 0x5, 0x42, 
       0x22, 0x2, 0xf5, 0xf9, 0x5, 0x48, 0x25, 0x2, 0xf6, 0xf9, 0x5, 0x46, 
       0x24, 0x2, 0xf7, 0xf9, 0x5, 0x38, 0x1d, 0x2, 0xf8, 0xf2, 0x3, 0x2, 
       0x2, 0x2, 0xf8, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf4, 0x3, 0x2, 0x2, 
       0x2, 0xf8, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 
       0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0x31, 0x3, 0x2, 0x2, 0x2, 0xfa, 
       0x100, 0x5, 0x36, 0x1c, 0x2, 0xfb, 0x100, 0x5, 0x44, 0x23, 0x2, 0xfc, 
       0x100, 0x5, 0x42, 0x22, 0x2, 0xfd, 0x100, 0x5, 0x48, 0x25, 0x2, 0xfe, 
       0x100, 0x5, 0x46, 0x24, 0x2, 0xff, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xff, 
       0xfb, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xff, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x101, 0x105, 0x5, 0x36, 0x1c, 0x2, 0x102, 0x105, 
       0x5, 0x42, 0x22, 0x2, 0x103, 0x105, 0x5, 0x48, 0x25, 0x2, 0x104, 
       0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 0x2, 0x2, 0x104, 
       0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x35, 0x3, 0x2, 0x2, 0x2, 0x106, 
       0x107, 0x5, 0x4a, 0x26, 0x2, 0x107, 0x110, 0x7, 0xa, 0x2, 0x2, 0x108, 
       0x10d, 0x5, 0x30, 0x19, 0x2, 0x109, 0x10a, 0x7, 0xc, 0x2, 0x2, 0x10a, 
       0x10c, 0x5, 0x30, 0x19, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 
       0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 
       0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x111, 0x3, 0x2, 0x2, 0x2, 0x10f, 
       0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x108, 0x3, 0x2, 0x2, 0x2, 0x110, 
       0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 
       0x113, 0x7, 0xb, 0x2, 0x2, 0x113, 0x37, 0x3, 0x2, 0x2, 0x2, 0x114, 
       0x119, 0x5, 0x3a, 0x1e, 0x2, 0x115, 0x119, 0x5, 0x3c, 0x1f, 0x2, 
       0x116, 0x119, 0x5, 0x3e, 0x20, 0x2, 0x117, 0x119, 0x5, 0x40, 0x21, 
       0x2, 0x118, 0x114, 0x3, 0x2, 0x2, 0x2, 0x118, 0x115, 0x3, 0x2, 0x2, 
       0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x117, 0x3, 0x2, 0x2, 
       0x2, 0x119, 0x39, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x5, 0x32, 0x1a, 
       0x2, 0x11b, 0x11c, 0x7, 0x1c, 0x2, 0x2, 0x11c, 0x121, 0x5, 0x32, 
       0x1a, 0x2, 0x11d, 0x11e, 0x7, 0x1c, 0x2, 0x2, 0x11e, 0x120, 0x5, 
       0x32, 0x1a, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x122, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x7, 0x1b, 0x2, 0x2, 0x125, 0x126, 
       0x5, 0x32, 0x1a, 0x2, 0x126, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
       0x5, 0x32, 0x1a, 0x2, 0x128, 0x129, 0x7, 0x1a, 0x2, 0x2, 0x129, 0x3f, 
       0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 0x5, 0x32, 0x1a, 0x2, 0x12b, 0x12c, 
       0x7, 0x17, 0x2, 0x2, 0x12c, 0x12d, 0x5, 0x30, 0x19, 0x2, 0x12d, 0x12e, 
       0x7, 0x4, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x30, 0x19, 0x2, 0x12f, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x5, 0x4c, 0x27, 0x2, 0x131, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x9, 0x2, 0x2, 0x2, 0x133, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x134, 0x13b, 0x5, 0x34, 0x1b, 0x2, 0x135, 0x136, 
       0x9, 0x3, 0x2, 0x2, 0x136, 0x13c, 0x5, 0x42, 0x22, 0x2, 0x137, 0x138, 
       0x7, 0x7, 0x2, 0x2, 0x138, 0x139, 0x5, 0x30, 0x19, 0x2, 0x139, 0x13a, 
       0x7, 0x8, 0x2, 0x2, 0x13a, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x135, 
       0x3, 0x2, 0x2, 0x2, 0x13b, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 
       0x3, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x13e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
       0x7, 0xa, 0x2, 0x2, 0x140, 0x141, 0x5, 0x30, 0x19, 0x2, 0x141, 0x142, 
       0x7, 0xb, 0x2, 0x2, 0x142, 0x49, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
       0x7, 0x21, 0x2, 0x2, 0x144, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 
       0x7, 0x21, 0x2, 0x2, 0x146, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 
       0x7, 0x21, 0x2, 0x2, 0x148, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 
       0x7, 0x21, 0x2, 0x2, 0x14a, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x55, 
       0x5c, 0x67, 0x74, 0x7a, 0x7d, 0x90, 0x93, 0x99, 0xa4, 0xab, 0xb9, 
       0xc5, 0xca, 0xd7, 0xdf, 0xf8, 0xff, 0x104, 0x10d, 0x110, 0x118, 0x121, 
       0x13b, 0x13d, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TocParser::Initializer TocParser::_init;
