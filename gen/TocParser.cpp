
// Generated from Toc.g4 by ANTLR 4.9.2



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
    setState(101); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(100);
      decl();
      setState(103); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__1)
      | (1ULL << TocParser::T__7)
      | (1ULL << TocParser::T__13))) != 0));
    setState(105);
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
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(107);
        varDecl();
        setState(108);
        match(TocParser::T__0);
        break;
      }

      case TocParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(110);
        funcDecl();
        break;
      }

      case TocParser::T__13: {
        enterOuterAlt(_localctx, 3);
        setState(111);
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
    setState(114);
    match(TocParser::T__1);
    setState(115);
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
    setState(117);
    varName();

    setState(118);
    match(TocParser::T__2);
    setState(119);
    type();
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__3) {
      setState(121);
      match(TocParser::T__3);
      setState(122);
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
    setState(125);
    varName();

    setState(126);
    match(TocParser::T__2);
    setState(127);
    type();

    setState(129);
    match(TocParser::T__3);
    setState(130);
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
    setState(132);
    typeName();
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__4

    || _la == TocParser::T__5) {
      setState(133);
      typeModifier();
      setState(138);
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

tree::TerminalNode* TocParser::TypeModifierContext::INT_LIT() {
  return getToken(TocParser::INT_LIT, 0);
}


size_t TocParser::TypeModifierContext::getRuleIndex() const {
  return TocParser::RuleTypeModifier;
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
    setState(145);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(139);
        match(TocParser::T__4);
        break;
      }

      case TocParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(140);
        match(TocParser::T__5);
        setState(142);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TocParser::INT_LIT) {
          setState(141);
          match(TocParser::INT_LIT);
        }
        setState(144);
        match(TocParser::T__6);
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
    setState(147);
    match(TocParser::T__7);
    setState(148);
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

TocParser::GenericDeclContext* TocParser::FuncContext::genericDecl() {
  return getRuleContext<TocParser::GenericDeclContext>(0);
}


size_t TocParser::FuncContext::getRuleIndex() const {
  return TocParser::RuleFunc;
}


TocParser::FuncContext* TocParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 16, TocParser::RuleFunc);
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
    setState(150);
    funcName();
    setState(152);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__14) {
      setState(151);
      genericDecl();
    }
    setState(154);
    match(TocParser::T__8);
    setState(155);
    parameter();
    setState(156);
    match(TocParser::T__9);

    setState(157);
    match(TocParser::T__2);
    setState(158);
    type();
    setState(160);
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
    setState(170);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::NAME) {
      setState(162);
      var();
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__10) {
        setState(163);
        match(TocParser::T__10);
        setState(164);
        var();
        setState(169);
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
    setState(172);
    match(TocParser::T__11);
    setState(176);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__1)
      | (1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__8)
      | (1ULL << TocParser::T__16)
      | (1ULL << TocParser::T__18)
      | (1ULL << TocParser::T__20)
      | (1ULL << TocParser::T__21)
      | (1ULL << TocParser::T__22)
      | (1ULL << TocParser::T__26)
      | (1ULL << TocParser::T__27)
      | (1ULL << TocParser::T__28)
      | (1ULL << TocParser::T__29)
      | (1ULL << TocParser::T__30)
      | (1ULL << TocParser::T__31)
      | (1ULL << TocParser::T__32)
      | (1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::STRING_LIT)
      | (1ULL << TocParser::BOOL_LIT)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(173);
      stmt();
      setState(178);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179);
    match(TocParser::T__12);
   
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

TocParser::GenericDeclContext* TocParser::StructDeclContext::genericDecl() {
  return getRuleContext<TocParser::GenericDeclContext>(0);
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
    setState(181);
    match(TocParser::T__13);
    setState(182);
    structName();
    setState(184);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__14) {
      setState(183);
      genericDecl();
    }
    setState(186);
    match(TocParser::T__11);
    setState(190);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::NAME) {
      setState(187);
      structMember();
      setState(192);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(193);
    match(TocParser::T__12);
   
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
    setState(197);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(195);
      structVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(196);
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
    setState(199);
    var();
    setState(200);
    match(TocParser::T__0);
   
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
    setState(202);
    func();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericDeclContext ------------------------------------------------------------------

TocParser::GenericDeclContext::GenericDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TocParser::TypeNameContext *> TocParser::GenericDeclContext::typeName() {
  return getRuleContexts<TocParser::TypeNameContext>();
}

TocParser::TypeNameContext* TocParser::GenericDeclContext::typeName(size_t i) {
  return getRuleContext<TocParser::TypeNameContext>(i);
}


size_t TocParser::GenericDeclContext::getRuleIndex() const {
  return TocParser::RuleGenericDecl;
}


TocParser::GenericDeclContext* TocParser::genericDecl() {
  GenericDeclContext *_localctx = _tracker.createInstance<GenericDeclContext>(_ctx, getState());
  enterRule(_localctx, 30, TocParser::RuleGenericDecl);
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
    setState(204);
    match(TocParser::T__14);
    setState(205);
    typeName();
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__10) {
      setState(206);
      match(TocParser::T__10);
      setState(207);
      typeName();
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(213);
    match(TocParser::T__15);
   
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


TocParser::StmtContext* TocParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 32, TocParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(231);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(215);
      varDecl();
      setState(216);
      match(TocParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(218);
      ifStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(219);
      switchStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(220);
      forStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(221);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(222);
      assignStmt();
      setState(223);
      match(TocParser::T__0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(225);
      returnStmt();
      setState(226);
      match(TocParser::T__0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(228);
      expr();
      setState(229);
      match(TocParser::T__0);
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

TocParser::ExprContext* TocParser::IfStmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::BodyContext* TocParser::IfStmtContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}

std::vector<TocParser::ElseIfStmtContext *> TocParser::IfStmtContext::elseIfStmt() {
  return getRuleContexts<TocParser::ElseIfStmtContext>();
}

TocParser::ElseIfStmtContext* TocParser::IfStmtContext::elseIfStmt(size_t i) {
  return getRuleContext<TocParser::ElseIfStmtContext>(i);
}

TocParser::ElseStmtContext* TocParser::IfStmtContext::elseStmt() {
  return getRuleContext<TocParser::ElseStmtContext>(0);
}


size_t TocParser::IfStmtContext::getRuleIndex() const {
  return TocParser::RuleIfStmt;
}


TocParser::IfStmtContext* TocParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 34, TocParser::RuleIfStmt);
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
    setState(233);
    match(TocParser::T__16);
    setState(234);
    expr();
    setState(235);
    body();
    setState(239);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(236);
        elseIfStmt(); 
      }
      setState(241);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
    setState(243);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__17) {
      setState(242);
      elseStmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStmtContext ------------------------------------------------------------------

TocParser::ElseIfStmtContext::ElseIfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::ElseIfStmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::BodyContext* TocParser::ElseIfStmtContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}


size_t TocParser::ElseIfStmtContext::getRuleIndex() const {
  return TocParser::RuleElseIfStmt;
}


TocParser::ElseIfStmtContext* TocParser::elseIfStmt() {
  ElseIfStmtContext *_localctx = _tracker.createInstance<ElseIfStmtContext>(_ctx, getState());
  enterRule(_localctx, 36, TocParser::RuleElseIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    match(TocParser::T__17);
    setState(246);
    match(TocParser::T__16);
    setState(247);
    expr();
    setState(248);
    body();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStmtContext ------------------------------------------------------------------

TocParser::ElseStmtContext::ElseStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::BodyContext* TocParser::ElseStmtContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}


size_t TocParser::ElseStmtContext::getRuleIndex() const {
  return TocParser::RuleElseStmt;
}


TocParser::ElseStmtContext* TocParser::elseStmt() {
  ElseStmtContext *_localctx = _tracker.createInstance<ElseStmtContext>(_ctx, getState());
  enterRule(_localctx, 38, TocParser::RuleElseStmt);

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
    match(TocParser::T__17);
    setState(251);
    body();
   
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


TocParser::SwitchStmtContext* TocParser::switchStmt() {
  SwitchStmtContext *_localctx = _tracker.createInstance<SwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 40, TocParser::RuleSwitchStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    match(TocParser::T__18);
    setState(254);
    identifierExpr();
    setState(255);
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

std::vector<TocParser::SwitchCaseContext *> TocParser::SwitchBodyContext::switchCase() {
  return getRuleContexts<TocParser::SwitchCaseContext>();
}

TocParser::SwitchCaseContext* TocParser::SwitchBodyContext::switchCase(size_t i) {
  return getRuleContext<TocParser::SwitchCaseContext>(i);
}


size_t TocParser::SwitchBodyContext::getRuleIndex() const {
  return TocParser::RuleSwitchBody;
}


TocParser::SwitchBodyContext* TocParser::switchBody() {
  SwitchBodyContext *_localctx = _tracker.createInstance<SwitchBodyContext>(_ctx, getState());
  enterRule(_localctx, 42, TocParser::RuleSwitchBody);
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
    setState(257);
    match(TocParser::T__11);
    setState(261);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__19) {
      setState(258);
      switchCase();
      setState(263);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(264);
    match(TocParser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchCaseContext ------------------------------------------------------------------

TocParser::SwitchCaseContext::SwitchCaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::SwitchCaseContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::BodyContext* TocParser::SwitchCaseContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}


size_t TocParser::SwitchCaseContext::getRuleIndex() const {
  return TocParser::RuleSwitchCase;
}


TocParser::SwitchCaseContext* TocParser::switchCase() {
  SwitchCaseContext *_localctx = _tracker.createInstance<SwitchCaseContext>(_ctx, getState());
  enterRule(_localctx, 44, TocParser::RuleSwitchCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    match(TocParser::T__19);
    setState(267);
    expr();
    setState(268);
    body();
   
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


TocParser::ForStmtContext* TocParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, TocParser::RuleForStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(TocParser::T__20);
    setState(273);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(271);
      varInit();
      break;
    }

    case 2: {
      setState(272);
      assignStmt();
      break;
    }

    default:
      break;
    }
    setState(275);
    match(TocParser::T__10);
    setState(276);
    expr();
    setState(277);
    match(TocParser::T__10);
    setState(278);
    expr();
    setState(279);
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


TocParser::WhileStmtContext* TocParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 48, TocParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(281);
    match(TocParser::T__21);
    setState(282);
    expr();
    setState(283);
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


TocParser::AssignStmtContext* TocParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 50, TocParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(285);
    identifierExpr();
    setState(286);
    match(TocParser::T__3);
    setState(287);
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


TocParser::ReturnStmtContext* TocParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 52, TocParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(289);
    match(TocParser::T__22);
    setState(290);
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


TocParser::ExprContext* TocParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 54, TocParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(298);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(292);
      funcExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(293);
      litExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(294);
      identifierExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(295);
      parenExpr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(296);
      accessExpr();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(297);
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


TocParser::NonOpExprContext* TocParser::nonOpExpr() {
  NonOpExprContext *_localctx = _tracker.createInstance<NonOpExprContext>(_ctx, getState());
  enterRule(_localctx, 56, TocParser::RuleNonOpExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(300);
      funcExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(301);
      litExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(302);
      identifierExpr();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(303);
      parenExpr();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(304);
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


TocParser::NonAccessExprContext* TocParser::nonAccessExpr() {
  NonAccessExprContext *_localctx = _tracker.createInstance<NonAccessExprContext>(_ctx, getState());
  enterRule(_localctx, 58, TocParser::RuleNonAccessExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(310);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(307);
      funcExpr();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(308);
      identifierExpr();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(309);
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


TocParser::FuncExprContext* TocParser::funcExpr() {
  FuncExprContext *_localctx = _tracker.createInstance<FuncExprContext>(_ctx, getState());
  enterRule(_localctx, 60, TocParser::RuleFuncExpr);
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
    setState(312);
    funcName();
    setState(313);
    match(TocParser::T__8);
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__8)
      | (1ULL << TocParser::T__26)
      | (1ULL << TocParser::T__27)
      | (1ULL << TocParser::T__28)
      | (1ULL << TocParser::T__29)
      | (1ULL << TocParser::T__30)
      | (1ULL << TocParser::T__31)
      | (1ULL << TocParser::T__32)
      | (1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::STRING_LIT)
      | (1ULL << TocParser::BOOL_LIT)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(314);
      expr();
      setState(319);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__10) {
        setState(315);
        match(TocParser::T__10);
        setState(316);
        expr();
        setState(321);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(324);
    match(TocParser::T__9);
   
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


TocParser::OpExprContext* TocParser::opExpr() {
  OpExprContext *_localctx = _tracker.createInstance<OpExprContext>(_ctx, getState());
  enterRule(_localctx, 62, TocParser::RuleOpExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(326);
      binaryOp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(327);
      prefixOp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(328);
      postfixOp();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(329);
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

std::vector<TocParser::Binary_opContext *> TocParser::BinaryOpContext::binary_op() {
  return getRuleContexts<TocParser::Binary_opContext>();
}

TocParser::Binary_opContext* TocParser::BinaryOpContext::binary_op(size_t i) {
  return getRuleContext<TocParser::Binary_opContext>(i);
}


size_t TocParser::BinaryOpContext::getRuleIndex() const {
  return TocParser::RuleBinaryOp;
}


TocParser::BinaryOpContext* TocParser::binaryOp() {
  BinaryOpContext *_localctx = _tracker.createInstance<BinaryOpContext>(_ctx, getState());
  enterRule(_localctx, 64, TocParser::RuleBinaryOp);
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
    setState(332);
    nonOpExpr();
    setState(333);
    binary_op();
    setState(334);
    nonOpExpr();
    setState(340);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__14)
      | (1ULL << TocParser::T__15)
      | (1ULL << TocParser::T__28)
      | (1ULL << TocParser::T__29)
      | (1ULL << TocParser::T__32)
      | (1ULL << TocParser::T__33)
      | (1ULL << TocParser::T__34)
      | (1ULL << TocParser::T__35)
      | (1ULL << TocParser::T__36)
      | (1ULL << TocParser::T__37)
      | (1ULL << TocParser::T__38)
      | (1ULL << TocParser::T__39)
      | (1ULL << TocParser::T__40)
      | (1ULL << TocParser::T__41)
      | (1ULL << TocParser::T__42)
      | (1ULL << TocParser::T__43)
      | (1ULL << TocParser::T__44)
      | (1ULL << TocParser::T__45)
      | (1ULL << TocParser::T__46)
      | (1ULL << TocParser::T__47)
      | (1ULL << TocParser::T__48)
      | (1ULL << TocParser::T__49)
      | (1ULL << TocParser::T__50)
      | (1ULL << TocParser::T__51)
      | (1ULL << TocParser::T__52)
      | (1ULL << TocParser::T__53)
      | (1ULL << TocParser::T__54))) != 0)) {
      setState(335);
      binary_op();
      setState(336);
      nonOpExpr();
      setState(342);
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

TocParser::Prefix_opContext* TocParser::PrefixOpContext::prefix_op() {
  return getRuleContext<TocParser::Prefix_opContext>(0);
}

TocParser::NonOpExprContext* TocParser::PrefixOpContext::nonOpExpr() {
  return getRuleContext<TocParser::NonOpExprContext>(0);
}


size_t TocParser::PrefixOpContext::getRuleIndex() const {
  return TocParser::RulePrefixOp;
}


TocParser::PrefixOpContext* TocParser::prefixOp() {
  PrefixOpContext *_localctx = _tracker.createInstance<PrefixOpContext>(_ctx, getState());
  enterRule(_localctx, 66, TocParser::RulePrefixOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    prefix_op();
    setState(344);
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

TocParser::Postfix_opContext* TocParser::PostfixOpContext::postfix_op() {
  return getRuleContext<TocParser::Postfix_opContext>(0);
}


size_t TocParser::PostfixOpContext::getRuleIndex() const {
  return TocParser::RulePostfixOp;
}


TocParser::PostfixOpContext* TocParser::postfixOp() {
  PostfixOpContext *_localctx = _tracker.createInstance<PostfixOpContext>(_ctx, getState());
  enterRule(_localctx, 68, TocParser::RulePostfixOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    nonOpExpr();
    setState(347);
    postfix_op();
   
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


TocParser::TernaryOpContext* TocParser::ternaryOp() {
  TernaryOpContext *_localctx = _tracker.createInstance<TernaryOpContext>(_ctx, getState());
  enterRule(_localctx, 70, TocParser::RuleTernaryOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    nonOpExpr();
    setState(350);
    match(TocParser::T__23);
    setState(351);
    expr();
    setState(352);
    match(TocParser::T__2);
    setState(353);
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


TocParser::IdentifierExprContext* TocParser::identifierExpr() {
  IdentifierExprContext *_localctx = _tracker.createInstance<IdentifierExprContext>(_ctx, getState());
  enterRule(_localctx, 72, TocParser::RuleIdentifierExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
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


TocParser::LitExprContext* TocParser::litExpr() {
  LitExprContext *_localctx = _tracker.createInstance<LitExprContext>(_ctx, getState());
  enterRule(_localctx, 74, TocParser::RuleLitExpr);
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
    setState(357);
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

std::vector<TocParser::AccessSubExprContext *> TocParser::AccessExprContext::accessSubExpr() {
  return getRuleContexts<TocParser::AccessSubExprContext>();
}

TocParser::AccessSubExprContext* TocParser::AccessExprContext::accessSubExpr(size_t i) {
  return getRuleContext<TocParser::AccessSubExprContext>(i);
}


size_t TocParser::AccessExprContext::getRuleIndex() const {
  return TocParser::RuleAccessExpr;
}


TocParser::AccessExprContext* TocParser::accessExpr() {
  AccessExprContext *_localctx = _tracker.createInstance<AccessExprContext>(_ctx, getState());
  enterRule(_localctx, 76, TocParser::RuleAccessExpr);
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
    setState(359);
    nonAccessExpr();
    setState(361); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(360);
      accessSubExpr();
      setState(363); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__5)
      | (1ULL << TocParser::T__24)
      | (1ULL << TocParser::T__25))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessSubExprContext ------------------------------------------------------------------

TocParser::AccessSubExprContext::AccessSubExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::AccessMemberContext* TocParser::AccessSubExprContext::accessMember() {
  return getRuleContext<TocParser::AccessMemberContext>(0);
}

TocParser::AccessBracketsContext* TocParser::AccessSubExprContext::accessBrackets() {
  return getRuleContext<TocParser::AccessBracketsContext>(0);
}


size_t TocParser::AccessSubExprContext::getRuleIndex() const {
  return TocParser::RuleAccessSubExpr;
}


TocParser::AccessSubExprContext* TocParser::accessSubExpr() {
  AccessSubExprContext *_localctx = _tracker.createInstance<AccessSubExprContext>(_ctx, getState());
  enterRule(_localctx, 78, TocParser::RuleAccessSubExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(367);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__24:
      case TocParser::T__25: {
        enterOuterAlt(_localctx, 1);
        setState(365);
        accessMember();
        break;
      }

      case TocParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(366);
        accessBrackets();
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

//----------------- AccessMemberContext ------------------------------------------------------------------

TocParser::AccessMemberContext::AccessMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::IdentifierExprContext* TocParser::AccessMemberContext::identifierExpr() {
  return getRuleContext<TocParser::IdentifierExprContext>(0);
}


size_t TocParser::AccessMemberContext::getRuleIndex() const {
  return TocParser::RuleAccessMember;
}


TocParser::AccessMemberContext* TocParser::accessMember() {
  AccessMemberContext *_localctx = _tracker.createInstance<AccessMemberContext>(_ctx, getState());
  enterRule(_localctx, 80, TocParser::RuleAccessMember);
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
    setState(369);
    _la = _input->LA(1);
    if (!(_la == TocParser::T__24

    || _la == TocParser::T__25)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(370);
    identifierExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AccessBracketsContext ------------------------------------------------------------------

TocParser::AccessBracketsContext::AccessBracketsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::ExprContext* TocParser::AccessBracketsContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}


size_t TocParser::AccessBracketsContext::getRuleIndex() const {
  return TocParser::RuleAccessBrackets;
}


TocParser::AccessBracketsContext* TocParser::accessBrackets() {
  AccessBracketsContext *_localctx = _tracker.createInstance<AccessBracketsContext>(_ctx, getState());
  enterRule(_localctx, 82, TocParser::RuleAccessBrackets);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    match(TocParser::T__5);
    setState(373);
    expr();
    setState(374);
    match(TocParser::T__6);
   
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


TocParser::ParenExprContext* TocParser::parenExpr() {
  ParenExprContext *_localctx = _tracker.createInstance<ParenExprContext>(_ctx, getState());
  enterRule(_localctx, 84, TocParser::RuleParenExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(TocParser::T__8);
    setState(377);
    expr();
    setState(378);
    match(TocParser::T__9);
   
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


TocParser::FuncNameContext* TocParser::funcName() {
  FuncNameContext *_localctx = _tracker.createInstance<FuncNameContext>(_ctx, getState());
  enterRule(_localctx, 86, TocParser::RuleFuncName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
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


TocParser::VarNameContext* TocParser::varName() {
  VarNameContext *_localctx = _tracker.createInstance<VarNameContext>(_ctx, getState());
  enterRule(_localctx, 88, TocParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
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


TocParser::TypeNameContext* TocParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 90, TocParser::RuleTypeName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
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


TocParser::StructNameContext* TocParser::structName() {
  StructNameContext *_localctx = _tracker.createInstance<StructNameContext>(_ctx, getState());
  enterRule(_localctx, 92, TocParser::RuleStructName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    match(TocParser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Postfix_opContext ------------------------------------------------------------------

TocParser::Postfix_opContext::Postfix_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TocParser::Postfix_opContext::getRuleIndex() const {
  return TocParser::RulePostfix_op;
}


TocParser::Postfix_opContext* TocParser::postfix_op() {
  Postfix_opContext *_localctx = _tracker.createInstance<Postfix_opContext>(_ctx, getState());
  enterRule(_localctx, 94, TocParser::RulePostfix_op);
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
    setState(388);
    _la = _input->LA(1);
    if (!(_la == TocParser::T__26

    || _la == TocParser::T__27)) {
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

//----------------- Prefix_opContext ------------------------------------------------------------------

TocParser::Prefix_opContext::Prefix_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::Postfix_opContext* TocParser::Prefix_opContext::postfix_op() {
  return getRuleContext<TocParser::Postfix_opContext>(0);
}


size_t TocParser::Prefix_opContext::getRuleIndex() const {
  return TocParser::RulePrefix_op;
}


TocParser::Prefix_opContext* TocParser::prefix_op() {
  Prefix_opContext *_localctx = _tracker.createInstance<Prefix_opContext>(_ctx, getState());
  enterRule(_localctx, 96, TocParser::RulePrefix_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(397);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__28: {
        enterOuterAlt(_localctx, 1);
        setState(390);
        match(TocParser::T__28);
        break;
      }

      case TocParser::T__29: {
        enterOuterAlt(_localctx, 2);
        setState(391);
        match(TocParser::T__29);
        break;
      }

      case TocParser::T__30: {
        enterOuterAlt(_localctx, 3);
        setState(392);
        match(TocParser::T__30);
        break;
      }

      case TocParser::T__31: {
        enterOuterAlt(_localctx, 4);
        setState(393);
        match(TocParser::T__31);
        break;
      }

      case TocParser::T__32: {
        enterOuterAlt(_localctx, 5);
        setState(394);
        match(TocParser::T__32);
        break;
      }

      case TocParser::T__4: {
        enterOuterAlt(_localctx, 6);
        setState(395);
        match(TocParser::T__4);
        break;
      }

      case TocParser::T__26:
      case TocParser::T__27: {
        enterOuterAlt(_localctx, 7);
        setState(396);
        postfix_op();
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

//----------------- Binary_opContext ------------------------------------------------------------------

TocParser::Binary_opContext::Binary_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TocParser::Binary_opContext::getRuleIndex() const {
  return TocParser::RuleBinary_op;
}


TocParser::Binary_opContext* TocParser::binary_op() {
  Binary_opContext *_localctx = _tracker.createInstance<Binary_opContext>(_ctx, getState());
  enterRule(_localctx, 98, TocParser::RuleBinary_op);
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
    setState(399);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__14)
      | (1ULL << TocParser::T__15)
      | (1ULL << TocParser::T__28)
      | (1ULL << TocParser::T__29)
      | (1ULL << TocParser::T__32)
      | (1ULL << TocParser::T__33)
      | (1ULL << TocParser::T__34)
      | (1ULL << TocParser::T__35)
      | (1ULL << TocParser::T__36)
      | (1ULL << TocParser::T__37)
      | (1ULL << TocParser::T__38)
      | (1ULL << TocParser::T__39)
      | (1ULL << TocParser::T__40)
      | (1ULL << TocParser::T__41)
      | (1ULL << TocParser::T__42)
      | (1ULL << TocParser::T__43)
      | (1ULL << TocParser::T__44)
      | (1ULL << TocParser::T__45)
      | (1ULL << TocParser::T__46)
      | (1ULL << TocParser::T__47)
      | (1ULL << TocParser::T__48)
      | (1ULL << TocParser::T__49)
      | (1ULL << TocParser::T__50)
      | (1ULL << TocParser::T__51)
      | (1ULL << TocParser::T__52)
      | (1ULL << TocParser::T__53)
      | (1ULL << TocParser::T__54))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> TocParser::_decisionToDFA;
atn::PredictionContextCache TocParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TocParser::_atn;
std::vector<uint16_t> TocParser::_serializedATN;

std::vector<std::string> TocParser::_ruleNames = {
  "prog", "decl", "varDecl", "var", "varInit", "type", "typeModifier", "funcDecl", 
  "func", "parameter", "body", "structDecl", "structMember", "structVar", 
  "structMethod", "genericDecl", "stmt", "ifStmt", "elseIfStmt", "elseStmt", 
  "switchStmt", "switchBody", "switchCase", "forStmt", "whileStmt", "assignStmt", 
  "returnStmt", "expr", "nonOpExpr", "nonAccessExpr", "funcExpr", "opExpr", 
  "binaryOp", "prefixOp", "postfixOp", "ternaryOp", "identifierExpr", "litExpr", 
  "accessExpr", "accessSubExpr", "accessMember", "accessBrackets", "parenExpr", 
  "funcName", "varName", "typeName", "structName", "postfix_op", "prefix_op", 
  "binary_op"
};

std::vector<std::string> TocParser::_literalNames = {
  "", "';'", "'var'", "':'", "'='", "'*'", "'['", "']'", "'func'", "'('", 
  "')'", "','", "'{'", "'}'", "'struct'", "'<'", "'>'", "'if'", "'else'", 
  "'switch'", "'case'", "'for'", "'while'", "'return'", "'\u003F'", "'.'", 
  "'->'", "'++'", "'--'", "'+'", "'-'", "'!'", "'~'", "'&'", "'/'", "'%'", 
  "'|'", "'^'", "'=='", "'!='", "'<='", "'>='", "'<<'", "'>>'", "'||'", 
  "'&&'", "'&='", "'|='", "'^='", "'<<='", "'>>='", "'+='", "'-='", "'*='", 
  "'/='", "'%='"
};

std::vector<std::string> TocParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "INT_LIT", "DECIMAL_LIT", "STRING_LIT", "BOOL_LIT", "NAME", "WS", 
  "NEWLINE"
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
       0x3, 0x40, 0x194, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x3, 0x2, 0x6, 0x2, 0x68, 0xa, 0x2, 
       0xd, 0x2, 0xe, 0x2, 0x69, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x73, 0xa, 0x3, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x5, 0x5, 0x7e, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 
       0x7, 0x7, 0x89, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x8c, 0xb, 0x7, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x91, 0xa, 0x8, 0x3, 0x8, 0x5, 
       0x8, 0x94, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x5, 0xa, 0x9b, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x7, 0xb, 0xa8, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0xab, 0xb, 
       0xb, 0x5, 0xb, 0xad, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x7, 0xc, 0xb1, 
       0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xb4, 0xb, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xbb, 0xa, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x7, 0xd, 0xbf, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xc2, 0xb, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xc8, 0xa, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xd3, 0xa, 0x11, 0xc, 
       0x11, 0xe, 0x11, 0xd6, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xea, 0xa, 0x12, 0x3, 
       0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xf0, 0xa, 0x13, 
       0xc, 0x13, 0xe, 0x13, 0xf3, 0xb, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf6, 
       0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x7, 0x17, 0x106, 0xa, 0x17, 0xc, 
       0x17, 0xe, 0x17, 0x109, 0xb, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 
       0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x5, 0x19, 0x114, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 
       0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
       0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
       0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x12d, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x134, 0xa, 0x1e, 0x3, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x139, 0xa, 0x1f, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x140, 0xa, 
       0x20, 0xc, 0x20, 0xe, 0x20, 0x143, 0xb, 0x20, 0x5, 0x20, 0x145, 0xa, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x5, 0x21, 0x14d, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 0x22, 0x155, 0xa, 0x22, 0xc, 
       0x22, 0xe, 0x22, 0x158, 0xb, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
       0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 
       0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x6, 0x28, 0x16c, 0xa, 0x28, 0xd, 
       0x28, 0xe, 0x28, 0x16d, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x172, 0xa, 
       0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 
       0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 
       0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 
       0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 
       0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x190, 
       0xa, 0x32, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x2, 0x2, 0x34, 0x2, 
       0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
       0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
       0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 
       0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 
       0x5e, 0x60, 0x62, 0x64, 0x2, 0x6, 0x3, 0x2, 0x3a, 0x3d, 0x3, 0x2, 
       0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x6, 0x2, 0x7, 0x7, 0x11, 0x12, 
       0x1f, 0x20, 0x23, 0x39, 0x2, 0x194, 0x2, 0x67, 0x3, 0x2, 0x2, 0x2, 
       0x4, 0x72, 0x3, 0x2, 0x2, 0x2, 0x6, 0x74, 0x3, 0x2, 0x2, 0x2, 0x8, 
       0x77, 0x3, 0x2, 0x2, 0x2, 0xa, 0x7f, 0x3, 0x2, 0x2, 0x2, 0xc, 0x86, 
       0x3, 0x2, 0x2, 0x2, 0xe, 0x93, 0x3, 0x2, 0x2, 0x2, 0x10, 0x95, 0x3, 
       0x2, 0x2, 0x2, 0x12, 0x98, 0x3, 0x2, 0x2, 0x2, 0x14, 0xac, 0x3, 0x2, 
       0x2, 0x2, 0x16, 0xae, 0x3, 0x2, 0x2, 0x2, 0x18, 0xb7, 0x3, 0x2, 0x2, 
       0x2, 0x1a, 0xc7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc9, 0x3, 0x2, 0x2, 0x2, 
       0x1e, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x20, 0xce, 0x3, 0x2, 0x2, 0x2, 0x22, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0x24, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x26, 0xf7, 
       0x3, 0x2, 0x2, 0x2, 0x28, 0xfc, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xff, 0x3, 
       0x2, 0x2, 0x2, 0x2c, 0x103, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x10c, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x110, 0x3, 0x2, 0x2, 0x2, 0x32, 0x11b, 0x3, 
       0x2, 0x2, 0x2, 0x34, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x36, 0x123, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x133, 0x3, 
       0x2, 0x2, 0x2, 0x3c, 0x138, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x13a, 0x3, 
       0x2, 0x2, 0x2, 0x40, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x42, 0x14e, 0x3, 
       0x2, 0x2, 0x2, 0x44, 0x159, 0x3, 0x2, 0x2, 0x2, 0x46, 0x15c, 0x3, 
       0x2, 0x2, 0x2, 0x48, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x165, 0x3, 
       0x2, 0x2, 0x2, 0x4c, 0x167, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x169, 0x3, 
       0x2, 0x2, 0x2, 0x50, 0x171, 0x3, 0x2, 0x2, 0x2, 0x52, 0x173, 0x3, 
       0x2, 0x2, 0x2, 0x54, 0x176, 0x3, 0x2, 0x2, 0x2, 0x56, 0x17a, 0x3, 
       0x2, 0x2, 0x2, 0x58, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x180, 0x3, 
       0x2, 0x2, 0x2, 0x5c, 0x182, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x184, 0x3, 
       0x2, 0x2, 0x2, 0x60, 0x186, 0x3, 0x2, 0x2, 0x2, 0x62, 0x18f, 0x3, 
       0x2, 0x2, 0x2, 0x64, 0x191, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x5, 
       0x4, 0x3, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 
       0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 
       0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x2, 0x2, 0x3, 
       0x6c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x6, 0x4, 0x2, 0x6e, 
       0x6f, 0x7, 0x3, 0x2, 0x2, 0x6f, 0x73, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 
       0x5, 0x10, 0x9, 0x2, 0x71, 0x73, 0x5, 0x18, 0xd, 0x2, 0x72, 0x6d, 
       0x3, 0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x71, 0x3, 
       0x2, 0x2, 0x2, 0x73, 0x5, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0x4, 
       0x2, 0x2, 0x75, 0x76, 0x5, 0x8, 0x5, 0x2, 0x76, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x77, 0x78, 0x5, 0x5a, 0x2e, 0x2, 0x78, 0x79, 0x7, 0x5, 0x2, 
       0x2, 0x79, 0x7a, 0x5, 0xc, 0x7, 0x2, 0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 
       0x7b, 0x7c, 0x7, 0x6, 0x2, 0x2, 0x7c, 0x7e, 0x5, 0x38, 0x1d, 0x2, 
       0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x5a, 0x2e, 0x2, 0x80, 
       0x81, 0x7, 0x5, 0x2, 0x2, 0x81, 0x82, 0x5, 0xc, 0x7, 0x2, 0x82, 0x83, 
       0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x6, 0x2, 0x2, 0x84, 0x85, 0x5, 
       0x38, 0x1d, 0x2, 0x85, 0xb, 0x3, 0x2, 0x2, 0x2, 0x86, 0x8a, 0x5, 
       0x5c, 0x2f, 0x2, 0x87, 0x89, 0x5, 0xe, 0x8, 0x2, 0x88, 0x87, 0x3, 
       0x2, 0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 
       0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x94, 0x7, 0x7, 0x2, 0x2, 
       0x8e, 0x90, 0x7, 0x8, 0x2, 0x2, 0x8f, 0x91, 0x7, 0x3a, 0x2, 0x2, 
       0x90, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x3, 0x2, 0x2, 0x2, 0x91, 
       0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 0x7, 0x9, 0x2, 0x2, 0x93, 0x8d, 
       0x3, 0x2, 0x2, 0x2, 0x93, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x94, 0xf, 0x3, 
       0x2, 0x2, 0x2, 0x95, 0x96, 0x7, 0xa, 0x2, 0x2, 0x96, 0x97, 0x5, 0x12, 
       0xa, 0x2, 0x97, 0x11, 0x3, 0x2, 0x2, 0x2, 0x98, 0x9a, 0x5, 0x58, 
       0x2d, 0x2, 0x99, 0x9b, 0x5, 0x20, 0x11, 0x2, 0x9a, 0x99, 0x3, 0x2, 
       0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 
       0x2, 0x9c, 0x9d, 0x7, 0xb, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x14, 0xb, 
       0x2, 0x9e, 0x9f, 0x7, 0xc, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x5, 0x2, 0x2, 
       0xa0, 0xa1, 0x5, 0xc, 0x7, 0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 
       0xa3, 0x5, 0x16, 0xc, 0x2, 0xa3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xa4, 
       0xa9, 0x5, 0x8, 0x5, 0x2, 0xa5, 0xa6, 0x7, 0xd, 0x2, 0x2, 0xa6, 0xa8, 
       0x5, 0x8, 0x5, 0x2, 0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 
       0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 
       0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 
       0xad, 0x15, 0x3, 0x2, 0x2, 0x2, 0xae, 0xb2, 0x7, 0xe, 0x2, 0x2, 0xaf, 
       0xb1, 0x5, 0x22, 0x12, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 
       0xb4, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 
       0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 
       0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0xf, 0x2, 0x2, 0xb6, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0xb7, 0xb8, 0x7, 0x10, 0x2, 0x2, 0xb8, 0xba, 0x5, 0x5e, 
       0x30, 0x2, 0xb9, 0xbb, 0x5, 0x20, 0x11, 0x2, 0xba, 0xb9, 0x3, 0x2, 
       0x2, 0x2, 0xba, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 
       0x2, 0xbc, 0xc0, 0x7, 0xe, 0x2, 0x2, 0xbd, 0xbf, 0x5, 0x1a, 0xe, 
       0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc2, 0x3, 0x2, 0x2, 0x2, 
       0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 
       0xc3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 
       0x7, 0xf, 0x2, 0x2, 0xc4, 0x19, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc8, 0x5, 
       0x1c, 0xf, 0x2, 0xc6, 0xc8, 0x5, 0x1e, 0x10, 0x2, 0xc7, 0xc5, 0x3, 
       0x2, 0x2, 0x2, 0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x1b, 0x3, 0x2, 
       0x2, 0x2, 0xc9, 0xca, 0x5, 0x8, 0x5, 0x2, 0xca, 0xcb, 0x7, 0x3, 0x2, 
       0x2, 0xcb, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x12, 0xa, 
       0x2, 0xcd, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x11, 0x2, 
       0x2, 0xcf, 0xd4, 0x5, 0x5c, 0x2f, 0x2, 0xd0, 0xd1, 0x7, 0xd, 0x2, 
       0x2, 0xd1, 0xd3, 0x5, 0x5c, 0x2f, 0x2, 0xd2, 0xd0, 0x3, 0x2, 0x2, 
       0x2, 0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 0x2, 
       0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd6, 
       0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x12, 0x2, 0x2, 0xd8, 
       0x21, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x5, 0x6, 0x4, 0x2, 0xda, 0xdb, 
       0x7, 0x3, 0x2, 0x2, 0xdb, 0xea, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xea, 0x5, 
       0x24, 0x13, 0x2, 0xdd, 0xea, 0x5, 0x2a, 0x16, 0x2, 0xde, 0xea, 0x5, 
       0x30, 0x19, 0x2, 0xdf, 0xea, 0x5, 0x32, 0x1a, 0x2, 0xe0, 0xe1, 0x5, 
       0x34, 0x1b, 0x2, 0xe1, 0xe2, 0x7, 0x3, 0x2, 0x2, 0xe2, 0xea, 0x3, 
       0x2, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x36, 0x1c, 0x2, 0xe4, 0xe5, 0x7, 
       0x3, 0x2, 0x2, 0xe5, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x5, 0x38, 
       0x1d, 0x2, 0xe7, 0xe8, 0x7, 0x3, 0x2, 0x2, 0xe8, 0xea, 0x3, 0x2, 
       0x2, 0x2, 0xe9, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xdc, 0x3, 0x2, 0x2, 
       0x2, 0xe9, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xde, 0x3, 0x2, 0x2, 0x2, 
       0xe9, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe9, 
       0xe3, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xea, 0x23, 
       0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x13, 0x2, 0x2, 0xec, 0xed, 
       0x5, 0x38, 0x1d, 0x2, 0xed, 0xf1, 0x5, 0x16, 0xc, 0x2, 0xee, 0xf0, 
       0x5, 0x26, 0x14, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 
       0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 
       0x2, 0x2, 0x2, 0xf2, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 
       0x2, 0x2, 0xf4, 0xf6, 0x5, 0x28, 0x15, 0x2, 0xf5, 0xf4, 0x3, 0x2, 
       0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0x25, 0x3, 0x2, 0x2, 
       0x2, 0xf7, 0xf8, 0x7, 0x14, 0x2, 0x2, 0xf8, 0xf9, 0x7, 0x13, 0x2, 
       0x2, 0xf9, 0xfa, 0x5, 0x38, 0x1d, 0x2, 0xfa, 0xfb, 0x5, 0x16, 0xc, 
       0x2, 0xfb, 0x27, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x14, 0x2, 
       0x2, 0xfd, 0xfe, 0x5, 0x16, 0xc, 0x2, 0xfe, 0x29, 0x3, 0x2, 0x2, 
       0x2, 0xff, 0x100, 0x7, 0x15, 0x2, 0x2, 0x100, 0x101, 0x5, 0x4a, 0x26, 
       0x2, 0x101, 0x102, 0x5, 0x2c, 0x17, 0x2, 0x102, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0x103, 0x107, 0x7, 0xe, 0x2, 0x2, 0x104, 0x106, 0x5, 0x2e, 0x18, 
       0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 0x2, 0x2, 
       0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 
       0x2, 0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 0x2, 
       0x2, 0x10a, 0x10b, 0x7, 0xf, 0x2, 0x2, 0x10b, 0x2d, 0x3, 0x2, 0x2, 
       0x2, 0x10c, 0x10d, 0x7, 0x16, 0x2, 0x2, 0x10d, 0x10e, 0x5, 0x38, 
       0x1d, 0x2, 0x10e, 0x10f, 0x5, 0x16, 0xc, 0x2, 0x10f, 0x2f, 0x3, 0x2, 
       0x2, 0x2, 0x110, 0x113, 0x7, 0x17, 0x2, 0x2, 0x111, 0x114, 0x5, 0xa, 
       0x6, 0x2, 0x112, 0x114, 0x5, 0x34, 0x1b, 0x2, 0x113, 0x111, 0x3, 
       0x2, 0x2, 0x2, 0x113, 0x112, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 
       0x2, 0x2, 0x2, 0x115, 0x116, 0x7, 0xd, 0x2, 0x2, 0x116, 0x117, 0x5, 
       0x38, 0x1d, 0x2, 0x117, 0x118, 0x7, 0xd, 0x2, 0x2, 0x118, 0x119, 
       0x5, 0x38, 0x1d, 0x2, 0x119, 0x11a, 0x5, 0x16, 0xc, 0x2, 0x11a, 0x31, 
       0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x18, 0x2, 0x2, 0x11c, 0x11d, 
       0x5, 0x38, 0x1d, 0x2, 0x11d, 0x11e, 0x5, 0x16, 0xc, 0x2, 0x11e, 0x33, 
       0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x4a, 0x26, 0x2, 0x120, 0x121, 
       0x7, 0x6, 0x2, 0x2, 0x121, 0x122, 0x5, 0x38, 0x1d, 0x2, 0x122, 0x35, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x7, 0x19, 0x2, 0x2, 0x124, 0x125, 
       0x5, 0x38, 0x1d, 0x2, 0x125, 0x37, 0x3, 0x2, 0x2, 0x2, 0x126, 0x12d, 
       0x5, 0x3e, 0x20, 0x2, 0x127, 0x12d, 0x5, 0x4c, 0x27, 0x2, 0x128, 
       0x12d, 0x5, 0x4a, 0x26, 0x2, 0x129, 0x12d, 0x5, 0x56, 0x2c, 0x2, 
       0x12a, 0x12d, 0x5, 0x4e, 0x28, 0x2, 0x12b, 0x12d, 0x5, 0x40, 0x21, 
       0x2, 0x12c, 0x126, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x127, 0x3, 0x2, 0x2, 
       0x2, 0x12c, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x129, 0x3, 0x2, 0x2, 
       0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 
       0x2, 0x12d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x134, 0x5, 0x3e, 0x20, 
       0x2, 0x12f, 0x134, 0x5, 0x4c, 0x27, 0x2, 0x130, 0x134, 0x5, 0x4a, 
       0x26, 0x2, 0x131, 0x134, 0x5, 0x56, 0x2c, 0x2, 0x132, 0x134, 0x5, 
       0x4e, 0x28, 0x2, 0x133, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x133, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x130, 0x3, 0x2, 0x2, 0x2, 0x133, 0x131, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x135, 0x139, 0x5, 0x3e, 0x20, 0x2, 0x136, 0x139, 
       0x5, 0x4a, 0x26, 0x2, 0x137, 0x139, 0x5, 0x56, 0x2c, 0x2, 0x138, 
       0x135, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 
       0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x13a, 
       0x13b, 0x5, 0x58, 0x2d, 0x2, 0x13b, 0x144, 0x7, 0xb, 0x2, 0x2, 0x13c, 
       0x141, 0x5, 0x38, 0x1d, 0x2, 0x13d, 0x13e, 0x7, 0xd, 0x2, 0x2, 0x13e, 
       0x140, 0x5, 0x38, 0x1d, 0x2, 0x13f, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x140, 
       0x143, 0x3, 0x2, 0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 
       0x142, 0x3, 0x2, 0x2, 0x2, 0x142, 0x145, 0x3, 0x2, 0x2, 0x2, 0x143, 
       0x141, 0x3, 0x2, 0x2, 0x2, 0x144, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x144, 
       0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 
       0x147, 0x7, 0xc, 0x2, 0x2, 0x147, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x148, 
       0x14d, 0x5, 0x42, 0x22, 0x2, 0x149, 0x14d, 0x5, 0x44, 0x23, 0x2, 
       0x14a, 0x14d, 0x5, 0x46, 0x24, 0x2, 0x14b, 0x14d, 0x5, 0x48, 0x25, 
       0x2, 0x14c, 0x148, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x149, 0x3, 0x2, 0x2, 
       0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 
       0x2, 0x14d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x5, 0x3a, 0x1e, 
       0x2, 0x14f, 0x150, 0x5, 0x64, 0x33, 0x2, 0x150, 0x156, 0x5, 0x3a, 
       0x1e, 0x2, 0x151, 0x152, 0x5, 0x64, 0x33, 0x2, 0x152, 0x153, 0x5, 
       0x3a, 0x1e, 0x2, 0x153, 0x155, 0x3, 0x2, 0x2, 0x2, 0x154, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x155, 0x158, 0x3, 0x2, 0x2, 0x2, 0x156, 0x154, 
       0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x158, 0x156, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 
       0x5, 0x62, 0x32, 0x2, 0x15a, 0x15b, 0x5, 0x3a, 0x1e, 0x2, 0x15b, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x5, 0x3a, 0x1e, 0x2, 0x15d, 
       0x15e, 0x5, 0x60, 0x31, 0x2, 0x15e, 0x47, 0x3, 0x2, 0x2, 0x2, 0x15f, 
       0x160, 0x5, 0x3a, 0x1e, 0x2, 0x160, 0x161, 0x7, 0x1a, 0x2, 0x2, 0x161, 
       0x162, 0x5, 0x38, 0x1d, 0x2, 0x162, 0x163, 0x7, 0x5, 0x2, 0x2, 0x163, 
       0x164, 0x5, 0x38, 0x1d, 0x2, 0x164, 0x49, 0x3, 0x2, 0x2, 0x2, 0x165, 
       0x166, 0x5, 0x5a, 0x2e, 0x2, 0x166, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x167, 
       0x168, 0x9, 0x2, 0x2, 0x2, 0x168, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x169, 
       0x16b, 0x5, 0x3c, 0x1f, 0x2, 0x16a, 0x16c, 0x5, 0x50, 0x29, 0x2, 
       0x16b, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x3, 0x2, 0x2, 0x2, 
       0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 0x2, 
       0x16e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x172, 0x5, 0x52, 0x2a, 0x2, 
       0x170, 0x172, 0x5, 0x54, 0x2b, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 
       0x2, 0x171, 0x170, 0x3, 0x2, 0x2, 0x2, 0x172, 0x51, 0x3, 0x2, 0x2, 
       0x2, 0x173, 0x174, 0x9, 0x3, 0x2, 0x2, 0x174, 0x175, 0x5, 0x4a, 0x26, 
       0x2, 0x175, 0x53, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x7, 0x8, 0x2, 
       0x2, 0x177, 0x178, 0x5, 0x38, 0x1d, 0x2, 0x178, 0x179, 0x7, 0x9, 
       0x2, 0x2, 0x179, 0x55, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0xb, 
       0x2, 0x2, 0x17b, 0x17c, 0x5, 0x38, 0x1d, 0x2, 0x17c, 0x17d, 0x7, 
       0xc, 0x2, 0x2, 0x17d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x7, 
       0x3e, 0x2, 0x2, 0x17f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 
       0x3e, 0x2, 0x2, 0x181, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x7, 
       0x3e, 0x2, 0x2, 0x183, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x7, 
       0x3e, 0x2, 0x2, 0x185, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x9, 
       0x4, 0x2, 0x2, 0x187, 0x61, 0x3, 0x2, 0x2, 0x2, 0x188, 0x190, 0x7, 
       0x1f, 0x2, 0x2, 0x189, 0x190, 0x7, 0x20, 0x2, 0x2, 0x18a, 0x190, 
       0x7, 0x21, 0x2, 0x2, 0x18b, 0x190, 0x7, 0x22, 0x2, 0x2, 0x18c, 0x190, 
       0x7, 0x23, 0x2, 0x2, 0x18d, 0x190, 0x7, 0x7, 0x2, 0x2, 0x18e, 0x190, 
       0x5, 0x60, 0x31, 0x2, 0x18f, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x189, 
       0x3, 0x2, 0x2, 0x2, 0x18f, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18b, 
       0x3, 0x2, 0x2, 0x2, 0x18f, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 
       0x3, 0x2, 0x2, 0x2, 0x18f, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x63, 
       0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x9, 0x5, 0x2, 0x2, 0x192, 0x65, 
       0x3, 0x2, 0x2, 0x2, 0x1f, 0x69, 0x72, 0x7d, 0x8a, 0x90, 0x93, 0x9a, 
       0xa9, 0xac, 0xb2, 0xba, 0xc0, 0xc7, 0xd4, 0xe9, 0xf1, 0xf5, 0x107, 
       0x113, 0x12c, 0x133, 0x138, 0x141, 0x144, 0x14c, 0x156, 0x16d, 0x171, 
       0x18f, 
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
