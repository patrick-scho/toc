
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
    setState(75); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(74);
      decl();
      setState(77); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__0)
      | (1ULL << TocParser::T__3)
      | (1ULL << TocParser::T__9))) != 0));
    setState(79);
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
    setState(84);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(81);
        varDecl();
        break;
      }

      case TocParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(82);
        funcDecl();
        break;
      }

      case TocParser::T__9: {
        enterOuterAlt(_localctx, 3);
        setState(83);
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
    setState(86);
    match(TocParser::T__0);
    setState(87);
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
    setState(89);
    varName();

    setState(90);
    match(TocParser::T__1);
    setState(91);
    type();
    setState(95);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__2) {
      setState(93);
      match(TocParser::T__2);
      setState(94);
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

//----------------- TypeContext ------------------------------------------------------------------

TocParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::TypeNameContext* TocParser::TypeContext::typeName() {
  return getRuleContext<TocParser::TypeNameContext>(0);
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
  enterRule(_localctx, 8, TocParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    typeName();
   
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
  enterRule(_localctx, 10, TocParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(TocParser::T__3);
    setState(100);
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
  enterRule(_localctx, 12, TocParser::RuleFunc);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    funcName();
    setState(103);
    match(TocParser::T__4);
    setState(104);
    parameter();
    setState(105);
    match(TocParser::T__5);

    setState(106);
    match(TocParser::T__1);
    setState(107);
    type();
    setState(109);
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

TocParser::FirstParameterContext* TocParser::ParameterContext::firstParameter() {
  return getRuleContext<TocParser::FirstParameterContext>(0);
}

std::vector<TocParser::AdditionalParameterContext *> TocParser::ParameterContext::additionalParameter() {
  return getRuleContexts<TocParser::AdditionalParameterContext>();
}

TocParser::AdditionalParameterContext* TocParser::ParameterContext::additionalParameter(size_t i) {
  return getRuleContext<TocParser::AdditionalParameterContext>(i);
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
  enterRule(_localctx, 14, TocParser::RuleParameter);
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
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::NAME) {
      setState(111);
      firstParameter();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__6) {
        setState(112);
        additionalParameter();
        setState(117);
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

//----------------- FirstParameterContext ------------------------------------------------------------------

TocParser::FirstParameterContext::FirstParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarContext* TocParser::FirstParameterContext::var() {
  return getRuleContext<TocParser::VarContext>(0);
}


size_t TocParser::FirstParameterContext::getRuleIndex() const {
  return TocParser::RuleFirstParameter;
}

void TocParser::FirstParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFirstParameter(this);
}

void TocParser::FirstParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFirstParameter(this);
}

TocParser::FirstParameterContext* TocParser::firstParameter() {
  FirstParameterContext *_localctx = _tracker.createInstance<FirstParameterContext>(_ctx, getState());
  enterRule(_localctx, 16, TocParser::RuleFirstParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    var();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AdditionalParameterContext ------------------------------------------------------------------

TocParser::AdditionalParameterContext::AdditionalParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarContext* TocParser::AdditionalParameterContext::var() {
  return getRuleContext<TocParser::VarContext>(0);
}


size_t TocParser::AdditionalParameterContext::getRuleIndex() const {
  return TocParser::RuleAdditionalParameter;
}

void TocParser::AdditionalParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditionalParameter(this);
}

void TocParser::AdditionalParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditionalParameter(this);
}

TocParser::AdditionalParameterContext* TocParser::additionalParameter() {
  AdditionalParameterContext *_localctx = _tracker.createInstance<AdditionalParameterContext>(_ctx, getState());
  enterRule(_localctx, 18, TocParser::RuleAdditionalParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(TocParser::T__6);
    setState(123);
    var();
   
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
    setState(125);
    match(TocParser::T__7);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__0)
      | (1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__10)
      | (1ULL << TocParser::T__11)
      | (1ULL << TocParser::T__12)
      | (1ULL << TocParser::INTLIT)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(126);
      stmt();
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(132);
    match(TocParser::T__8);
   
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
    setState(134);
    match(TocParser::T__9);
    setState(135);
    structName();
    setState(136);
    match(TocParser::T__7);
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::NAME) {
      setState(137);
      structMember();
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    match(TocParser::T__8);
   
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
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(145);
      structVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(146);
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
    setState(149);
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
    setState(151);
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

TocParser::ConditionalContext* TocParser::StmtContext::conditional() {
  return getRuleContext<TocParser::ConditionalContext>(0);
}

TocParser::LoopContext* TocParser::StmtContext::loop() {
  return getRuleContext<TocParser::LoopContext>(0);
}

TocParser::AssignmentContext* TocParser::StmtContext::assignment() {
  return getRuleContext<TocParser::AssignmentContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(159);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(153);
      varDecl();
      break;
    }

    case 2: {
      setState(154);
      conditional();
      break;
    }

    case 3: {
      setState(155);
      loop();
      break;
    }

    case 4: {
      setState(156);
      assignment();
      break;
    }

    case 5: {
      setState(157);
      returnStmt();
      break;
    }

    case 6: {
      setState(158);
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

//----------------- ConditionalContext ------------------------------------------------------------------

TocParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::IfCondContext* TocParser::ConditionalContext::ifCond() {
  return getRuleContext<TocParser::IfCondContext>(0);
}


size_t TocParser::ConditionalContext::getRuleIndex() const {
  return TocParser::RuleConditional;
}

void TocParser::ConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional(this);
}

void TocParser::ConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional(this);
}

TocParser::ConditionalContext* TocParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 32, TocParser::RuleConditional);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    ifCond();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfCondContext ------------------------------------------------------------------

TocParser::IfCondContext::IfCondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::IfCondContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::BodyContext* TocParser::IfCondContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}


size_t TocParser::IfCondContext::getRuleIndex() const {
  return TocParser::RuleIfCond;
}

void TocParser::IfCondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfCond(this);
}

void TocParser::IfCondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfCond(this);
}

TocParser::IfCondContext* TocParser::ifCond() {
  IfCondContext *_localctx = _tracker.createInstance<IfCondContext>(_ctx, getState());
  enterRule(_localctx, 34, TocParser::RuleIfCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(TocParser::T__10);
    setState(164);
    expr();
    setState(165);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopContext ------------------------------------------------------------------

TocParser::LoopContext::LoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::WhileLoopContext* TocParser::LoopContext::whileLoop() {
  return getRuleContext<TocParser::WhileLoopContext>(0);
}


size_t TocParser::LoopContext::getRuleIndex() const {
  return TocParser::RuleLoop;
}

void TocParser::LoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoop(this);
}

void TocParser::LoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoop(this);
}

TocParser::LoopContext* TocParser::loop() {
  LoopContext *_localctx = _tracker.createInstance<LoopContext>(_ctx, getState());
  enterRule(_localctx, 36, TocParser::RuleLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    whileLoop();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileLoopContext ------------------------------------------------------------------

TocParser::WhileLoopContext::WhileLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::WhileLoopContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::BodyContext* TocParser::WhileLoopContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}


size_t TocParser::WhileLoopContext::getRuleIndex() const {
  return TocParser::RuleWhileLoop;
}

void TocParser::WhileLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileLoop(this);
}

void TocParser::WhileLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileLoop(this);
}

TocParser::WhileLoopContext* TocParser::whileLoop() {
  WhileLoopContext *_localctx = _tracker.createInstance<WhileLoopContext>(_ctx, getState());
  enterRule(_localctx, 38, TocParser::RuleWhileLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(TocParser::T__11);
    setState(170);
    expr();
    setState(171);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

TocParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::IdentifierContext* TocParser::AssignmentContext::identifier() {
  return getRuleContext<TocParser::IdentifierContext>(0);
}

TocParser::ExprContext* TocParser::AssignmentContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::AssignmentContext::getRuleIndex() const {
  return TocParser::RuleAssignment;
}

void TocParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void TocParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}

TocParser::AssignmentContext* TocParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 40, TocParser::RuleAssignment);

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
    identifier();
    setState(174);
    match(TocParser::T__2);
    setState(175);
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
  enterRule(_localctx, 42, TocParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(TocParser::T__12);
    setState(178);
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

TocParser::FuncCallContext* TocParser::ExprContext::funcCall() {
  return getRuleContext<TocParser::FuncCallContext>(0);
}

TocParser::LiteralContext* TocParser::ExprContext::literal() {
  return getRuleContext<TocParser::LiteralContext>(0);
}

TocParser::IdentifierContext* TocParser::ExprContext::identifier() {
  return getRuleContext<TocParser::IdentifierContext>(0);
}

TocParser::SubscriptContext* TocParser::ExprContext::subscript() {
  return getRuleContext<TocParser::SubscriptContext>(0);
}

TocParser::MemberAccessContext* TocParser::ExprContext::memberAccess() {
  return getRuleContext<TocParser::MemberAccessContext>(0);
}

TocParser::ParenExprContext* TocParser::ExprContext::parenExpr() {
  return getRuleContext<TocParser::ParenExprContext>(0);
}

TocParser::OperatorExprContext* TocParser::ExprContext::operatorExpr() {
  return getRuleContext<TocParser::OperatorExprContext>(0);
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
  enterRule(_localctx, 44, TocParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(187);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(180);
      funcCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(182);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(183);
      subscript();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(184);
      memberAccess();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(185);
      parenExpr();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(186);
      operatorExpr();
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

TocParser::FuncCallContext* TocParser::NonOpExprContext::funcCall() {
  return getRuleContext<TocParser::FuncCallContext>(0);
}

TocParser::LiteralContext* TocParser::NonOpExprContext::literal() {
  return getRuleContext<TocParser::LiteralContext>(0);
}

TocParser::IdentifierContext* TocParser::NonOpExprContext::identifier() {
  return getRuleContext<TocParser::IdentifierContext>(0);
}

TocParser::SubscriptContext* TocParser::NonOpExprContext::subscript() {
  return getRuleContext<TocParser::SubscriptContext>(0);
}

TocParser::MemberAccessContext* TocParser::NonOpExprContext::memberAccess() {
  return getRuleContext<TocParser::MemberAccessContext>(0);
}

TocParser::ParenExprContext* TocParser::NonOpExprContext::parenExpr() {
  return getRuleContext<TocParser::ParenExprContext>(0);
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
  enterRule(_localctx, 46, TocParser::RuleNonOpExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(195);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(189);
      funcCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(190);
      literal();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(191);
      identifier();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(192);
      subscript();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(193);
      memberAccess();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(194);
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

//----------------- NonSubscriptExprContext ------------------------------------------------------------------

TocParser::NonSubscriptExprContext::NonSubscriptExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncCallContext* TocParser::NonSubscriptExprContext::funcCall() {
  return getRuleContext<TocParser::FuncCallContext>(0);
}

TocParser::IdentifierContext* TocParser::NonSubscriptExprContext::identifier() {
  return getRuleContext<TocParser::IdentifierContext>(0);
}

TocParser::MemberAccessContext* TocParser::NonSubscriptExprContext::memberAccess() {
  return getRuleContext<TocParser::MemberAccessContext>(0);
}

TocParser::ParenExprContext* TocParser::NonSubscriptExprContext::parenExpr() {
  return getRuleContext<TocParser::ParenExprContext>(0);
}


size_t TocParser::NonSubscriptExprContext::getRuleIndex() const {
  return TocParser::RuleNonSubscriptExpr;
}

void TocParser::NonSubscriptExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNonSubscriptExpr(this);
}

void TocParser::NonSubscriptExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNonSubscriptExpr(this);
}

TocParser::NonSubscriptExprContext* TocParser::nonSubscriptExpr() {
  NonSubscriptExprContext *_localctx = _tracker.createInstance<NonSubscriptExprContext>(_ctx, getState());
  enterRule(_localctx, 48, TocParser::RuleNonSubscriptExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(197);
      funcCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(198);
      identifier();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(199);
      memberAccess();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(200);
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

//----------------- FuncCallContext ------------------------------------------------------------------

TocParser::FuncCallContext::FuncCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::FuncNameContext* TocParser::FuncCallContext::funcName() {
  return getRuleContext<TocParser::FuncNameContext>(0);
}

std::vector<TocParser::ExprContext *> TocParser::FuncCallContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::FuncCallContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}


size_t TocParser::FuncCallContext::getRuleIndex() const {
  return TocParser::RuleFuncCall;
}

void TocParser::FuncCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCall(this);
}

void TocParser::FuncCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCall(this);
}

TocParser::FuncCallContext* TocParser::funcCall() {
  FuncCallContext *_localctx = _tracker.createInstance<FuncCallContext>(_ctx, getState());
  enterRule(_localctx, 50, TocParser::RuleFuncCall);
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
    setState(203);
    funcName();
    setState(204);
    match(TocParser::T__4);
    setState(213);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__4)
      | (1ULL << TocParser::INTLIT)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(205);
      expr();
      setState(210);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__6) {
        setState(206);
        match(TocParser::T__6);
        setState(207);
        expr();
        setState(212);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(215);
    match(TocParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorExprContext ------------------------------------------------------------------

TocParser::OperatorExprContext::OperatorExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::BinaryOperatorContext* TocParser::OperatorExprContext::binaryOperator() {
  return getRuleContext<TocParser::BinaryOperatorContext>(0);
}


size_t TocParser::OperatorExprContext::getRuleIndex() const {
  return TocParser::RuleOperatorExpr;
}

void TocParser::OperatorExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperatorExpr(this);
}

void TocParser::OperatorExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperatorExpr(this);
}

TocParser::OperatorExprContext* TocParser::operatorExpr() {
  OperatorExprContext *_localctx = _tracker.createInstance<OperatorExprContext>(_ctx, getState());
  enterRule(_localctx, 52, TocParser::RuleOperatorExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(217);
    binaryOperator();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinaryOperatorContext ------------------------------------------------------------------

TocParser::BinaryOperatorContext::BinaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::NonOpExprContext *> TocParser::BinaryOperatorContext::nonOpExpr() {
  return getRuleContexts<TocParser::NonOpExprContext>();
}

TocParser::NonOpExprContext* TocParser::BinaryOperatorContext::nonOpExpr(size_t i) {
  return getRuleContext<TocParser::NonOpExprContext>(i);
}

std::vector<tree::TerminalNode *> TocParser::BinaryOperatorContext::BINARY_OPERATOR() {
  return getTokens(TocParser::BINARY_OPERATOR);
}

tree::TerminalNode* TocParser::BinaryOperatorContext::BINARY_OPERATOR(size_t i) {
  return getToken(TocParser::BINARY_OPERATOR, i);
}


size_t TocParser::BinaryOperatorContext::getRuleIndex() const {
  return TocParser::RuleBinaryOperator;
}

void TocParser::BinaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinaryOperator(this);
}

void TocParser::BinaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinaryOperator(this);
}

TocParser::BinaryOperatorContext* TocParser::binaryOperator() {
  BinaryOperatorContext *_localctx = _tracker.createInstance<BinaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 54, TocParser::RuleBinaryOperator);
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
    setState(219);
    nonOpExpr();
    setState(220);
    match(TocParser::BINARY_OPERATOR);
    setState(221);
    nonOpExpr();
    setState(226);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::BINARY_OPERATOR) {
      setState(222);
      match(TocParser::BINARY_OPERATOR);
      setState(223);
      nonOpExpr();
      setState(228);
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

//----------------- IdentifierContext ------------------------------------------------------------------

TocParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::VarNameContext* TocParser::IdentifierContext::varName() {
  return getRuleContext<TocParser::VarNameContext>(0);
}


size_t TocParser::IdentifierContext::getRuleIndex() const {
  return TocParser::RuleIdentifier;
}

void TocParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void TocParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}

TocParser::IdentifierContext* TocParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 56, TocParser::RuleIdentifier);

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
    varName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

TocParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TocParser::LiteralContext::INTLIT() {
  return getToken(TocParser::INTLIT, 0);
}


size_t TocParser::LiteralContext::getRuleIndex() const {
  return TocParser::RuleLiteral;
}

void TocParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void TocParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}

TocParser::LiteralContext* TocParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 58, TocParser::RuleLiteral);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(231);
    match(TocParser::INTLIT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubscriptContext ------------------------------------------------------------------

TocParser::SubscriptContext::SubscriptContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::NonSubscriptExprContext* TocParser::SubscriptContext::nonSubscriptExpr() {
  return getRuleContext<TocParser::NonSubscriptExprContext>(0);
}

TocParser::ExprContext* TocParser::SubscriptContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::SubscriptContext::getRuleIndex() const {
  return TocParser::RuleSubscript;
}

void TocParser::SubscriptContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubscript(this);
}

void TocParser::SubscriptContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubscript(this);
}

TocParser::SubscriptContext* TocParser::subscript() {
  SubscriptContext *_localctx = _tracker.createInstance<SubscriptContext>(_ctx, getState());
  enterRule(_localctx, 60, TocParser::RuleSubscript);

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
    nonSubscriptExpr();
    setState(234);
    match(TocParser::T__13);
    setState(235);
    expr();
    setState(236);
    match(TocParser::T__14);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccessContext ------------------------------------------------------------------

TocParser::MemberAccessContext::MemberAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::IdentifierContext *> TocParser::MemberAccessContext::identifier() {
  return getRuleContexts<TocParser::IdentifierContext>();
}

TocParser::IdentifierContext* TocParser::MemberAccessContext::identifier(size_t i) {
  return getRuleContext<TocParser::IdentifierContext>(i);
}


size_t TocParser::MemberAccessContext::getRuleIndex() const {
  return TocParser::RuleMemberAccess;
}

void TocParser::MemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccess(this);
}

void TocParser::MemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TocListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccess(this);
}

TocParser::MemberAccessContext* TocParser::memberAccess() {
  MemberAccessContext *_localctx = _tracker.createInstance<MemberAccessContext>(_ctx, getState());
  enterRule(_localctx, 62, TocParser::RuleMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    identifier();
    setState(239);
    match(TocParser::T__15);
    setState(240);
    identifier();
   
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
  enterRule(_localctx, 64, TocParser::RuleParenExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(242);
    match(TocParser::T__4);
    setState(243);
    expr();
    setState(244);
    match(TocParser::T__5);
   
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
  enterRule(_localctx, 66, TocParser::RuleFuncName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
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
  enterRule(_localctx, 68, TocParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
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
  enterRule(_localctx, 70, TocParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(250);
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
  enterRule(_localctx, 72, TocParser::RuleStructName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
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
  "prog", "decl", "varDecl", "var", "type", "funcDecl", "func", "parameter", 
  "firstParameter", "additionalParameter", "body", "structDecl", "structMember", 
  "structVar", "structMethod", "stmt", "conditional", "ifCond", "loop", 
  "whileLoop", "assignment", "returnStmt", "expr", "nonOpExpr", "nonSubscriptExpr", 
  "funcCall", "operatorExpr", "binaryOperator", "identifier", "literal", 
  "subscript", "memberAccess", "parenExpr", "funcName", "varName", "typeName", 
  "structName"
};

std::vector<std::string> TocParser::_literalNames = {
  "", "'var'", "':'", "'='", "'func'", "'('", "')'", "','", "'{'", "'}'", 
  "'struct'", "'if'", "'while'", "'return'", "'['", "']'", "'.'"
};

std::vector<std::string> TocParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "BINARY_OPERATOR", 
  "INTLIT", "NAME", "WS", "NEWLINE"
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
       0x3, 0x17, 0x101, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x26, 0x3, 0x2, 0x6, 0x2, 0x4e, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
       0x4f, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
       0x57, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x62, 0xa, 0x5, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x74, 0xa, 0x9, 0xc, 0x9, 
       0xe, 0x9, 0x77, 0xb, 0x9, 0x5, 0x9, 0x79, 0xa, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 
       0x82, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0x85, 0xb, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x8d, 0xa, 
       0xd, 0xc, 0xd, 0xe, 0xd, 0x90, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xe, 0x3, 0xe, 0x5, 0xe, 0x96, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x11, 0x5, 0x11, 0xa2, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 
       0x5, 0x18, 0xbe, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xc6, 0xa, 0x19, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0xcc, 0xa, 0x1a, 0x3, 
       0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0xd3, 
       0xa, 0x1b, 0xc, 0x1b, 0xe, 0x1b, 0xd6, 0xb, 0x1b, 0x5, 0x1b, 0xd8, 
       0xa, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 
       0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 0x1d, 0xe3, 0xa, 
       0x1d, 0xc, 0x1d, 0xe, 0x1d, 0xe6, 0xb, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
       0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 
       0x2, 0x2, 0x27, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
       0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 
       0x42, 0x44, 0x46, 0x48, 0x4a, 0x2, 0x2, 0x2, 0xfa, 0x2, 0x4d, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0x56, 0x3, 0x2, 0x2, 0x2, 0x6, 0x58, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0x5b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x63, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0x65, 0x3, 0x2, 0x2, 0x2, 0xe, 0x68, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0x78, 0x3, 0x2, 0x2, 0x2, 0x12, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x7c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x88, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0x95, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x97, 0x3, 
       0x2, 0x2, 0x2, 0x1e, 0x99, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa1, 0x3, 0x2, 
       0x2, 0x2, 0x22, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x24, 0xa5, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x28, 0xab, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0xbd, 0x3, 0x2, 0x2, 0x2, 0x30, 0xc5, 0x3, 0x2, 0x2, 0x2, 0x32, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0x34, 0xcd, 0x3, 0x2, 0x2, 0x2, 0x36, 0xdb, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xe7, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0xe9, 0x3, 0x2, 0x2, 0x2, 0x3e, 0xeb, 0x3, 0x2, 0x2, 
       0x2, 0x40, 0xf0, 0x3, 0x2, 0x2, 0x2, 0x42, 0xf4, 0x3, 0x2, 0x2, 0x2, 
       0x44, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x46, 0xfa, 0x3, 0x2, 0x2, 0x2, 0x48, 
       0xfc, 0x3, 0x2, 0x2, 0x2, 0x4a, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 
       0x5, 0x4, 0x3, 0x2, 0x4d, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
       0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 
       0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x2, 0x2, 
       0x3, 0x52, 0x3, 0x3, 0x2, 0x2, 0x2, 0x53, 0x57, 0x5, 0x6, 0x4, 0x2, 
       0x54, 0x57, 0x5, 0xc, 0x7, 0x2, 0x55, 0x57, 0x5, 0x18, 0xd, 0x2, 
       0x56, 0x53, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 
       0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 
       0x7, 0x3, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x8, 0x5, 0x2, 0x5a, 0x7, 0x3, 
       0x2, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0x46, 0x24, 0x2, 0x5c, 0x5d, 0x7, 
       0x4, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0xa, 0x6, 0x2, 0x5e, 0x61, 0x3, 0x2, 
       0x2, 0x2, 0x5f, 0x60, 0x7, 0x5, 0x2, 0x2, 0x60, 0x62, 0x5, 0x2e, 
       0x18, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 
       0x2, 0x2, 0x62, 0x9, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x5, 0x48, 0x25, 
       0x2, 0x64, 0xb, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x6, 0x2, 0x2, 
       0x66, 0x67, 0x5, 0xe, 0x8, 0x2, 0x67, 0xd, 0x3, 0x2, 0x2, 0x2, 0x68, 
       0x69, 0x5, 0x44, 0x23, 0x2, 0x69, 0x6a, 0x7, 0x7, 0x2, 0x2, 0x6a, 
       0x6b, 0x5, 0x10, 0x9, 0x2, 0x6b, 0x6c, 0x7, 0x8, 0x2, 0x2, 0x6c, 
       0x6d, 0x7, 0x4, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0xa, 0x6, 0x2, 0x6e, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x16, 0xc, 0x2, 0x70, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x71, 0x75, 0x5, 0x12, 0xa, 0x2, 0x72, 0x74, 0x5, 
       0x14, 0xb, 0x2, 0x73, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x77, 0x3, 
       0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 
       0x2, 0x2, 0x76, 0x79, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 
       0x2, 0x78, 0x71, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 
       0x79, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x8, 0x5, 0x2, 0x7b, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x9, 0x2, 0x2, 0x7d, 0x7e, 
       0x5, 0x8, 0x5, 0x2, 0x7e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x83, 0x7, 
       0xa, 0x2, 0x2, 0x80, 0x82, 0x5, 0x20, 0x11, 0x2, 0x81, 0x80, 0x3, 
       0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 
       0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x86, 0x3, 0x2, 0x2, 
       0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0xb, 0x2, 0x2, 
       0x87, 0x17, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0xc, 0x2, 0x2, 0x89, 
       0x8a, 0x5, 0x4a, 0x26, 0x2, 0x8a, 0x8e, 0x7, 0xa, 0x2, 0x2, 0x8b, 
       0x8d, 0x5, 0x1a, 0xe, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 
       0x90, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
       0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8e, 0x3, 
       0x2, 0x2, 0x2, 0x91, 0x92, 0x7, 0xb, 0x2, 0x2, 0x92, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x93, 0x96, 0x5, 0x1c, 0xf, 0x2, 0x94, 0x96, 0x5, 0x1e, 
       0x10, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x94, 0x3, 0x2, 
       0x2, 0x2, 0x96, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x5, 0x8, 0x5, 
       0x2, 0x98, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0xe, 0x8, 0x2, 
       0x9a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x9b, 0xa2, 0x5, 0x6, 0x4, 0x2, 0x9c, 
       0xa2, 0x5, 0x22, 0x12, 0x2, 0x9d, 0xa2, 0x5, 0x26, 0x14, 0x2, 0x9e, 
       0xa2, 0x5, 0x2a, 0x16, 0x2, 0x9f, 0xa2, 0x5, 0x2c, 0x17, 0x2, 0xa0, 
       0xa2, 0x5, 0x2e, 0x18, 0x2, 0xa1, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa1, 
       0x9c, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9d, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9e, 
       0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa0, 0x3, 
       0x2, 0x2, 0x2, 0xa2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x5, 0x24, 
       0x13, 0x2, 0xa4, 0x23, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0xd, 
       0x2, 0x2, 0xa6, 0xa7, 0x5, 0x2e, 0x18, 0x2, 0xa7, 0xa8, 0x5, 0x16, 
       0xc, 0x2, 0xa8, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x28, 
       0x15, 0x2, 0xaa, 0x27, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0xe, 
       0x2, 0x2, 0xac, 0xad, 0x5, 0x2e, 0x18, 0x2, 0xad, 0xae, 0x5, 0x16, 
       0xc, 0x2, 0xae, 0x29, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 0x3a, 
       0x1e, 0x2, 0xb0, 0xb1, 0x7, 0x5, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x2e, 
       0x18, 0x2, 0xb2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0xf, 
       0x2, 0x2, 0xb4, 0xb5, 0x5, 0x2e, 0x18, 0x2, 0xb5, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0xb6, 0xbe, 0x5, 0x34, 0x1b, 0x2, 0xb7, 0xbe, 0x5, 0x3c, 
       0x1f, 0x2, 0xb8, 0xbe, 0x5, 0x3a, 0x1e, 0x2, 0xb9, 0xbe, 0x5, 0x3e, 
       0x20, 0x2, 0xba, 0xbe, 0x5, 0x40, 0x21, 0x2, 0xbb, 0xbe, 0x5, 0x42, 
       0x22, 0x2, 0xbc, 0xbe, 0x5, 0x36, 0x1c, 0x2, 0xbd, 0xb6, 0x3, 0x2, 
       0x2, 0x2, 0xbd, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb8, 0x3, 0x2, 0x2, 
       0x2, 0xbd, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xba, 0x3, 0x2, 0x2, 0x2, 
       0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 
       0x2f, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc6, 0x5, 0x34, 0x1b, 0x2, 0xc0, 
       0xc6, 0x5, 0x3c, 0x1f, 0x2, 0xc1, 0xc6, 0x5, 0x3a, 0x1e, 0x2, 0xc2, 
       0xc6, 0x5, 0x3e, 0x20, 0x2, 0xc3, 0xc6, 0x5, 0x40, 0x21, 0x2, 0xc4, 
       0xc6, 0x5, 0x42, 0x22, 0x2, 0xc5, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc5, 
       0xc0, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc2, 
       0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc4, 0x3, 
       0x2, 0x2, 0x2, 0xc6, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xcc, 0x5, 0x34, 
       0x1b, 0x2, 0xc8, 0xcc, 0x5, 0x3a, 0x1e, 0x2, 0xc9, 0xcc, 0x5, 0x40, 
       0x21, 0x2, 0xca, 0xcc, 0x5, 0x42, 0x22, 0x2, 0xcb, 0xc7, 0x3, 0x2, 
       0x2, 0x2, 0xcb, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 
       0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x33, 0x3, 0x2, 0x2, 0x2, 
       0xcd, 0xce, 0x5, 0x44, 0x23, 0x2, 0xce, 0xd7, 0x7, 0x7, 0x2, 0x2, 
       0xcf, 0xd4, 0x5, 0x2e, 0x18, 0x2, 0xd0, 0xd1, 0x7, 0x9, 0x2, 0x2, 
       0xd1, 0xd3, 0x5, 0x2e, 0x18, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 0x2, 
       0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 
       0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 
       0x3, 0x2, 0x2, 0x2, 0xd7, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 
       0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x8, 
       0x2, 0x2, 0xda, 0x35, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x38, 
       0x1d, 0x2, 0xdc, 0x37, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x30, 
       0x19, 0x2, 0xde, 0xdf, 0x7, 0x13, 0x2, 0x2, 0xdf, 0xe4, 0x5, 0x30, 
       0x19, 0x2, 0xe0, 0xe1, 0x7, 0x13, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0x30, 
       0x19, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 
       0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 
       0x2, 0xe5, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 
       0xe7, 0xe8, 0x5, 0x46, 0x24, 0x2, 0xe8, 0x3b, 0x3, 0x2, 0x2, 0x2, 
       0xe9, 0xea, 0x7, 0x14, 0x2, 0x2, 0xea, 0x3d, 0x3, 0x2, 0x2, 0x2, 
       0xeb, 0xec, 0x5, 0x32, 0x1a, 0x2, 0xec, 0xed, 0x7, 0x10, 0x2, 0x2, 
       0xed, 0xee, 0x5, 0x2e, 0x18, 0x2, 0xee, 0xef, 0x7, 0x11, 0x2, 0x2, 
       0xef, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x5, 0x3a, 0x1e, 0x2, 
       0xf1, 0xf2, 0x7, 0x12, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x3a, 0x1e, 0x2, 
       0xf3, 0x41, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x7, 0x2, 0x2, 0xf5, 
       0xf6, 0x5, 0x2e, 0x18, 0x2, 0xf6, 0xf7, 0x7, 0x8, 0x2, 0x2, 0xf7, 
       0x43, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x15, 0x2, 0x2, 0xf9, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x15, 0x2, 0x2, 0xfb, 
       0x47, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x15, 0x2, 0x2, 0xfd, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x15, 0x2, 0x2, 0xff, 
       0x4b, 0x3, 0x2, 0x2, 0x2, 0x11, 0x4f, 0x56, 0x61, 0x75, 0x78, 0x83, 
       0x8e, 0x95, 0xa1, 0xbd, 0xc5, 0xcb, 0xd4, 0xd7, 0xe4, 
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
