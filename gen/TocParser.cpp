
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
    setState(79); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(78);
      decl();
      setState(81); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__1)
      | (1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__11)
      | (1ULL << TocParser::T__15))) != 0));
    setState(83);
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

TocParser::NamespaceDeclContext* TocParser::DeclContext::namespaceDecl() {
  return getRuleContext<TocParser::NamespaceDeclContext>(0);
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
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(85);
        varDecl();
        setState(86);
        match(TocParser::T__0);
        break;
      }

      case TocParser::T__11: {
        enterOuterAlt(_localctx, 2);
        setState(88);
        funcDecl();
        break;
      }

      case TocParser::T__15: {
        enterOuterAlt(_localctx, 3);
        setState(89);
        structDecl();
        break;
      }

      case TocParser::T__1: {
        enterOuterAlt(_localctx, 4);
        setState(90);
        namespaceDecl();
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

//----------------- NamespaceDeclContext ------------------------------------------------------------------

TocParser::NamespaceDeclContext::NamespaceDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::TypeNameContext* TocParser::NamespaceDeclContext::typeName() {
  return getRuleContext<TocParser::TypeNameContext>(0);
}

std::vector<TocParser::DeclContext *> TocParser::NamespaceDeclContext::decl() {
  return getRuleContexts<TocParser::DeclContext>();
}

TocParser::DeclContext* TocParser::NamespaceDeclContext::decl(size_t i) {
  return getRuleContext<TocParser::DeclContext>(i);
}


size_t TocParser::NamespaceDeclContext::getRuleIndex() const {
  return TocParser::RuleNamespaceDecl;
}


TocParser::NamespaceDeclContext* TocParser::namespaceDecl() {
  NamespaceDeclContext *_localctx = _tracker.createInstance<NamespaceDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, TocParser::RuleNamespaceDecl);
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
    setState(93);
    match(TocParser::T__1);
    setState(94);
    typeName();
    setState(95);
    match(TocParser::T__2);
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__1)
      | (1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__11)
      | (1ULL << TocParser::T__15))) != 0)) {
      setState(96);
      decl();
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
    match(TocParser::T__3);
   
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
  enterRule(_localctx, 6, TocParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(TocParser::T__4);
    setState(105);
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
  enterRule(_localctx, 8, TocParser::RuleVar);
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
    setState(107);
    varName();

    setState(108);
    match(TocParser::T__5);
    setState(109);
    type();
    setState(113);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__6) {
      setState(111);
      match(TocParser::T__6);
      setState(112);
      expr(0);
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
  enterRule(_localctx, 10, TocParser::RuleVarInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    varName();

    setState(116);
    match(TocParser::T__5);
    setState(117);
    type();

    setState(119);
    match(TocParser::T__6);
    setState(120);
    expr(0);
   
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

std::vector<TocParser::NamespaceSpecifierContext *> TocParser::TypeContext::namespaceSpecifier() {
  return getRuleContexts<TocParser::NamespaceSpecifierContext>();
}

TocParser::NamespaceSpecifierContext* TocParser::TypeContext::namespaceSpecifier(size_t i) {
  return getRuleContext<TocParser::NamespaceSpecifierContext>(i);
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
  enterRule(_localctx, 12, TocParser::RuleType);
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
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(122);
        namespaceSpecifier(); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(128);
    typeName();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__7

    || _la == TocParser::T__8) {
      setState(129);
      typeModifier();
      setState(134);
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
  enterRule(_localctx, 14, TocParser::RuleTypeModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(141);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(135);
        match(TocParser::T__7);
        break;
      }

      case TocParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(136);
        match(TocParser::T__8);
        setState(138);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == TocParser::INT_LIT) {
          setState(137);
          match(TocParser::INT_LIT);
        }
        setState(140);
        match(TocParser::T__9);
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

//----------------- NamespaceSpecifierContext ------------------------------------------------------------------

TocParser::NamespaceSpecifierContext::NamespaceSpecifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TocParser::TypeNameContext* TocParser::NamespaceSpecifierContext::typeName() {
  return getRuleContext<TocParser::TypeNameContext>(0);
}


size_t TocParser::NamespaceSpecifierContext::getRuleIndex() const {
  return TocParser::RuleNamespaceSpecifier;
}


TocParser::NamespaceSpecifierContext* TocParser::namespaceSpecifier() {
  NamespaceSpecifierContext *_localctx = _tracker.createInstance<NamespaceSpecifierContext>(_ctx, getState());
  enterRule(_localctx, 16, TocParser::RuleNamespaceSpecifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(143);
    typeName();
    setState(144);
    match(TocParser::T__10);
   
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
  enterRule(_localctx, 18, TocParser::RuleFuncDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(TocParser::T__11);
    setState(147);
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

TocParser::TypeContext* TocParser::FuncContext::type() {
  return getRuleContext<TocParser::TypeContext>(0);
}

TocParser::BodyContext* TocParser::FuncContext::body() {
  return getRuleContext<TocParser::BodyContext>(0);
}

TocParser::GenericDeclContext* TocParser::FuncContext::genericDecl() {
  return getRuleContext<TocParser::GenericDeclContext>(0);
}


size_t TocParser::FuncContext::getRuleIndex() const {
  return TocParser::RuleFunc;
}


TocParser::FuncContext* TocParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 20, TocParser::RuleFunc);
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
    setState(149);
    funcName();
    setState(151);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__17) {
      setState(150);
      genericDecl();
    }
    setState(153);
    match(TocParser::T__12);
    setState(154);
    parameter();
    setState(155);
    match(TocParser::T__13);

    setState(156);
    match(TocParser::T__5);
    setState(157);
    type();
    setState(161);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__2: {
        setState(159);
        body();
        break;
      }

      case TocParser::T__0: {
        setState(160);
        match(TocParser::T__0);
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
  enterRule(_localctx, 22, TocParser::RuleParameter);
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
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::NAME) {
      setState(163);
      var();
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == TocParser::T__14) {
        setState(164);
        match(TocParser::T__14);
        setState(165);
        var();
        setState(170);
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
  enterRule(_localctx, 24, TocParser::RuleBody);
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
    setState(173);
    match(TocParser::T__2);
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__4)
      | (1ULL << TocParser::T__7)
      | (1ULL << TocParser::T__12)
      | (1ULL << TocParser::T__19)
      | (1ULL << TocParser::T__21)
      | (1ULL << TocParser::T__23)
      | (1ULL << TocParser::T__24)
      | (1ULL << TocParser::T__25)
      | (1ULL << TocParser::T__28)
      | (1ULL << TocParser::T__29)
      | (1ULL << TocParser::T__30)
      | (1ULL << TocParser::T__31)
      | (1ULL << TocParser::T__32)
      | (1ULL << TocParser::T__33)
      | (1ULL << TocParser::T__34)
      | (1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::BOOL_LIT)
      | (1ULL << TocParser::StringLit)
      | (1ULL << TocParser::NAME))) != 0)) {
      setState(174);
      stmt();
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    match(TocParser::T__3);
   
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
  enterRule(_localctx, 26, TocParser::RuleStructDecl);
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
    setState(182);
    match(TocParser::T__15);
    setState(183);
    structName();
    setState(185);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__17) {
      setState(184);
      genericDecl();
    }
    setState(187);
    match(TocParser::T__2);
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__16

    || _la == TocParser::NAME) {
      setState(188);
      structMember();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(194);
    match(TocParser::T__3);
   
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

TocParser::PrivateDeclContext* TocParser::StructMemberContext::privateDecl() {
  return getRuleContext<TocParser::PrivateDeclContext>(0);
}

TocParser::StructMethodContext* TocParser::StructMemberContext::structMethod() {
  return getRuleContext<TocParser::StructMethodContext>(0);
}


size_t TocParser::StructMemberContext::getRuleIndex() const {
  return TocParser::RuleStructMember;
}


TocParser::StructMemberContext* TocParser::structMember() {
  StructMemberContext *_localctx = _tracker.createInstance<StructMemberContext>(_ctx, getState());
  enterRule(_localctx, 28, TocParser::RuleStructMember);
  size_t _la = 0;

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
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(197);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == TocParser::T__16) {
        setState(196);
        privateDecl();
      }
      setState(199);
      structVar();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(200);
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
  enterRule(_localctx, 30, TocParser::RuleStructVar);

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
    var();
    setState(204);
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
  enterRule(_localctx, 32, TocParser::RuleStructMethod);

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
    func();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrivateDeclContext ------------------------------------------------------------------

TocParser::PrivateDeclContext::PrivateDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TocParser::PrivateDeclContext::getRuleIndex() const {
  return TocParser::RulePrivateDecl;
}


TocParser::PrivateDeclContext* TocParser::privateDecl() {
  PrivateDeclContext *_localctx = _tracker.createInstance<PrivateDeclContext>(_ctx, getState());
  enterRule(_localctx, 34, TocParser::RulePrivateDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(TocParser::T__16);
   
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
  enterRule(_localctx, 36, TocParser::RuleGenericDecl);
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
    setState(210);
    match(TocParser::T__17);
    setState(211);
    typeName();
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__14) {
      setState(212);
      match(TocParser::T__14);
      setState(213);
      typeName();
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    match(TocParser::T__18);
   
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
  enterRule(_localctx, 38, TocParser::RuleStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(221);
      varDecl();
      setState(222);
      match(TocParser::T__0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(224);
      ifStmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(225);
      switchStmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(226);
      forStmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(227);
      whileStmt();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(228);
      assignStmt();
      setState(229);
      match(TocParser::T__0);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(231);
      returnStmt();
      setState(232);
      match(TocParser::T__0);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(234);
      expr(0);
      setState(235);
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
  enterRule(_localctx, 40, TocParser::RuleIfStmt);
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
    setState(239);
    match(TocParser::T__19);
    setState(240);
    expr(0);
    setState(241);
    body();
    setState(245);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(242);
        elseIfStmt(); 
      }
      setState(247);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
    setState(249);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == TocParser::T__20) {
      setState(248);
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
  enterRule(_localctx, 42, TocParser::RuleElseIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(TocParser::T__20);
    setState(252);
    match(TocParser::T__19);
    setState(253);
    expr(0);
    setState(254);
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
  enterRule(_localctx, 44, TocParser::RuleElseStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    match(TocParser::T__20);
    setState(257);
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

TocParser::ExprContext* TocParser::SwitchStmtContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::SwitchBodyContext* TocParser::SwitchStmtContext::switchBody() {
  return getRuleContext<TocParser::SwitchBodyContext>(0);
}


size_t TocParser::SwitchStmtContext::getRuleIndex() const {
  return TocParser::RuleSwitchStmt;
}


TocParser::SwitchStmtContext* TocParser::switchStmt() {
  SwitchStmtContext *_localctx = _tracker.createInstance<SwitchStmtContext>(_ctx, getState());
  enterRule(_localctx, 46, TocParser::RuleSwitchStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    match(TocParser::T__21);
    setState(260);
    expr(0);
    setState(261);
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
  enterRule(_localctx, 48, TocParser::RuleSwitchBody);
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
    setState(263);
    match(TocParser::T__2);
    setState(267);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TocParser::T__22) {
      setState(264);
      switchCase();
      setState(269);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
    match(TocParser::T__3);
   
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
  enterRule(_localctx, 50, TocParser::RuleSwitchCase);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(TocParser::T__22);
    setState(273);
    expr(0);
    setState(274);
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

TocParser::VarInitContext* TocParser::ForStmtContext::varInit() {
  return getRuleContext<TocParser::VarInitContext>(0);
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


size_t TocParser::ForStmtContext::getRuleIndex() const {
  return TocParser::RuleForStmt;
}


TocParser::ForStmtContext* TocParser::forStmt() {
  ForStmtContext *_localctx = _tracker.createInstance<ForStmtContext>(_ctx, getState());
  enterRule(_localctx, 52, TocParser::RuleForStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(TocParser::T__23);
    setState(277);
    varInit();
    setState(278);
    match(TocParser::T__14);
    setState(279);
    expr(0);
    setState(280);
    match(TocParser::T__14);
    setState(281);
    expr(0);
    setState(282);
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
  enterRule(_localctx, 54, TocParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    match(TocParser::T__24);
    setState(285);
    expr(0);
    setState(286);
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

std::vector<TocParser::ExprContext *> TocParser::AssignStmtContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::AssignStmtContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}


size_t TocParser::AssignStmtContext::getRuleIndex() const {
  return TocParser::RuleAssignStmt;
}


TocParser::AssignStmtContext* TocParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 56, TocParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    expr(0);
    setState(289);
    match(TocParser::T__6);
    setState(290);
    expr(0);
   
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
  enterRule(_localctx, 58, TocParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(TocParser::T__25);
    setState(293);
    expr(0);
   
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


size_t TocParser::ExprContext::getRuleIndex() const {
  return TocParser::RuleExpr;
}

void TocParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DotExprContext ------------------------------------------------------------------

TocParser::ExprContext* TocParser::DotExprContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::VarNameContext* TocParser::DotExprContext::varName() {
  return getRuleContext<TocParser::VarNameContext>(0);
}

TocParser::DotExprContext::DotExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- FuncExprContext ------------------------------------------------------------------

TocParser::FuncNameContext* TocParser::FuncExprContext::funcName() {
  return getRuleContext<TocParser::FuncNameContext>(0);
}

std::vector<TocParser::NamespaceSpecifierContext *> TocParser::FuncExprContext::namespaceSpecifier() {
  return getRuleContexts<TocParser::NamespaceSpecifierContext>();
}

TocParser::NamespaceSpecifierContext* TocParser::FuncExprContext::namespaceSpecifier(size_t i) {
  return getRuleContext<TocParser::NamespaceSpecifierContext>(i);
}

std::vector<TocParser::ExprContext *> TocParser::FuncExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::FuncExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

TocParser::FuncExprContext::FuncExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- BracketExprContext ------------------------------------------------------------------

std::vector<TocParser::ExprContext *> TocParser::BracketExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::BracketExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

TocParser::BracketExprContext::BracketExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- PrefixOpExprContext ------------------------------------------------------------------

TocParser::Prefix_opContext* TocParser::PrefixOpExprContext::prefix_op() {
  return getRuleContext<TocParser::Prefix_opContext>(0);
}

TocParser::ExprContext* TocParser::PrefixOpExprContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::PrefixOpExprContext::PrefixOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- MethodExprContext ------------------------------------------------------------------

std::vector<TocParser::ExprContext *> TocParser::MethodExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::MethodExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

TocParser::FuncNameContext* TocParser::MethodExprContext::funcName() {
  return getRuleContext<TocParser::FuncNameContext>(0);
}

TocParser::MethodExprContext::MethodExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- PostfixOpExprContext ------------------------------------------------------------------

TocParser::ExprContext* TocParser::PostfixOpExprContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::Postfix_opContext* TocParser::PostfixOpExprContext::postfix_op() {
  return getRuleContext<TocParser::Postfix_opContext>(0);
}

TocParser::PostfixOpExprContext::PostfixOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- BinaryOpExprContext ------------------------------------------------------------------

std::vector<TocParser::ExprContext *> TocParser::BinaryOpExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::BinaryOpExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

TocParser::Binary_opContext* TocParser::BinaryOpExprContext::binary_op() {
  return getRuleContext<TocParser::Binary_opContext>(0);
}

TocParser::BinaryOpExprContext::BinaryOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- TernaryOpExprContext ------------------------------------------------------------------

std::vector<TocParser::ExprContext *> TocParser::TernaryOpExprContext::expr() {
  return getRuleContexts<TocParser::ExprContext>();
}

TocParser::ExprContext* TocParser::TernaryOpExprContext::expr(size_t i) {
  return getRuleContext<TocParser::ExprContext>(i);
}

TocParser::TernaryOpExprContext::TernaryOpExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- LitExprContext ------------------------------------------------------------------

TocParser::LiteralContext* TocParser::LitExprContext::literal() {
  return getRuleContext<TocParser::LiteralContext>(0);
}

TocParser::LitExprContext::LitExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- ParenExprContext ------------------------------------------------------------------

TocParser::ExprContext* TocParser::ParenExprContext::expr() {
  return getRuleContext<TocParser::ExprContext>(0);
}

TocParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }


//----------------- IdentifierExprContext ------------------------------------------------------------------

TocParser::VarNameContext* TocParser::IdentifierExprContext::varName() {
  return getRuleContext<TocParser::VarNameContext>(0);
}

std::vector<TocParser::NamespaceSpecifierContext *> TocParser::IdentifierExprContext::namespaceSpecifier() {
  return getRuleContexts<TocParser::NamespaceSpecifierContext>();
}

TocParser::NamespaceSpecifierContext* TocParser::IdentifierExprContext::namespaceSpecifier(size_t i) {
  return getRuleContext<TocParser::NamespaceSpecifierContext>(i);
}

TocParser::IdentifierExprContext::IdentifierExprContext(ExprContext *ctx) { copyFrom(ctx); }



TocParser::ExprContext* TocParser::expr() {
   return expr(0);
}

TocParser::ExprContext* TocParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  TocParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  TocParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, TocParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(331);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<FuncExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(296);
          namespaceSpecifier(); 
        }
        setState(301);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      }
      setState(302);
      funcName();
      setState(303);
      match(TocParser::T__12);
      setState(312);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TocParser::T__7)
        | (1ULL << TocParser::T__12)
        | (1ULL << TocParser::T__28)
        | (1ULL << TocParser::T__29)
        | (1ULL << TocParser::T__30)
        | (1ULL << TocParser::T__31)
        | (1ULL << TocParser::T__32)
        | (1ULL << TocParser::T__33)
        | (1ULL << TocParser::T__34)
        | (1ULL << TocParser::INT_LIT)
        | (1ULL << TocParser::DECIMAL_LIT)
        | (1ULL << TocParser::BOOL_LIT)
        | (1ULL << TocParser::StringLit)
        | (1ULL << TocParser::NAME))) != 0)) {
        setState(304);
        expr(0);
        setState(309);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == TocParser::T__14) {
          setState(305);
          match(TocParser::T__14);
          setState(306);
          expr(0);
          setState(311);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(314);
      match(TocParser::T__13);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LitExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(316);
      literal();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(317);
      match(TocParser::T__12);
      setState(318);
      expr(0);
      setState(319);
      match(TocParser::T__13);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<PrefixOpExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(321);
      prefix_op();
      setState(322);
      expr(6);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<IdentifierExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(327);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(324);
          namespaceSpecifier(); 
        }
        setState(329);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      setState(330);
      varName();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(371);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(369);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BinaryOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(333);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(334);
          binary_op();
          setState(335);
          expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TernaryOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(337);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(338);
          match(TocParser::T__27);
          setState(339);
          expr(0);
          setState(340);
          match(TocParser::T__5);
          setState(341);
          expr(4);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MethodExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(343);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(344);
          match(TocParser::T__26);
          setState(345);
          funcName();
          setState(346);
          match(TocParser::T__12);
          setState(355);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if ((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << TocParser::T__7)
            | (1ULL << TocParser::T__12)
            | (1ULL << TocParser::T__28)
            | (1ULL << TocParser::T__29)
            | (1ULL << TocParser::T__30)
            | (1ULL << TocParser::T__31)
            | (1ULL << TocParser::T__32)
            | (1ULL << TocParser::T__33)
            | (1ULL << TocParser::T__34)
            | (1ULL << TocParser::INT_LIT)
            | (1ULL << TocParser::DECIMAL_LIT)
            | (1ULL << TocParser::BOOL_LIT)
            | (1ULL << TocParser::StringLit)
            | (1ULL << TocParser::NAME))) != 0)) {
            setState(347);
            expr(0);
            setState(352);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == TocParser::T__14) {
              setState(348);
              match(TocParser::T__14);
              setState(349);
              expr(0);
              setState(354);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
          }
          setState(357);
          match(TocParser::T__13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<DotExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(359);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(360);
          match(TocParser::T__26);
          setState(361);
          varName();
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<PostfixOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(362);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(363);
          postfix_op();
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<BracketExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(364);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(365);
          match(TocParser::T__8);
          setState(366);
          expr(0);
          setState(367);
          match(TocParser::T__9);
          break;
        }

        default:
          break;
        } 
      }
      setState(373);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
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

tree::TerminalNode* TocParser::LiteralContext::INT_LIT() {
  return getToken(TocParser::INT_LIT, 0);
}

tree::TerminalNode* TocParser::LiteralContext::DECIMAL_LIT() {
  return getToken(TocParser::DECIMAL_LIT, 0);
}

tree::TerminalNode* TocParser::LiteralContext::StringLit() {
  return getToken(TocParser::StringLit, 0);
}

tree::TerminalNode* TocParser::LiteralContext::BOOL_LIT() {
  return getToken(TocParser::BOOL_LIT, 0);
}


size_t TocParser::LiteralContext::getRuleIndex() const {
  return TocParser::RuleLiteral;
}


TocParser::LiteralContext* TocParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 62, TocParser::RuleLiteral);
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
    setState(374);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::INT_LIT)
      | (1ULL << TocParser::DECIMAL_LIT)
      | (1ULL << TocParser::BOOL_LIT)
      | (1ULL << TocParser::StringLit))) != 0))) {
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
  enterRule(_localctx, 64, TocParser::RuleFuncName);

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
  enterRule(_localctx, 66, TocParser::RuleVarName);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(378);
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
  enterRule(_localctx, 68, TocParser::RuleTypeName);

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
  enterRule(_localctx, 70, TocParser::RuleStructName);

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

//----------------- Postfix_opContext ------------------------------------------------------------------

TocParser::Postfix_opContext::Postfix_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TocParser::Postfix_opContext::getRuleIndex() const {
  return TocParser::RulePostfix_op;
}


TocParser::Postfix_opContext* TocParser::postfix_op() {
  Postfix_opContext *_localctx = _tracker.createInstance<Postfix_opContext>(_ctx, getState());
  enterRule(_localctx, 72, TocParser::RulePostfix_op);
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
    setState(384);
    _la = _input->LA(1);
    if (!(_la == TocParser::T__28

    || _la == TocParser::T__29)) {
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
  enterRule(_localctx, 74, TocParser::RulePrefix_op);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(393);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TocParser::T__30: {
        enterOuterAlt(_localctx, 1);
        setState(386);
        match(TocParser::T__30);
        break;
      }

      case TocParser::T__31: {
        enterOuterAlt(_localctx, 2);
        setState(387);
        match(TocParser::T__31);
        break;
      }

      case TocParser::T__32: {
        enterOuterAlt(_localctx, 3);
        setState(388);
        match(TocParser::T__32);
        break;
      }

      case TocParser::T__33: {
        enterOuterAlt(_localctx, 4);
        setState(389);
        match(TocParser::T__33);
        break;
      }

      case TocParser::T__34: {
        enterOuterAlt(_localctx, 5);
        setState(390);
        match(TocParser::T__34);
        break;
      }

      case TocParser::T__7: {
        enterOuterAlt(_localctx, 6);
        setState(391);
        match(TocParser::T__7);
        break;
      }

      case TocParser::T__28:
      case TocParser::T__29: {
        enterOuterAlt(_localctx, 7);
        setState(392);
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
  enterRule(_localctx, 76, TocParser::RuleBinary_op);
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
    setState(395);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TocParser::T__7)
      | (1ULL << TocParser::T__17)
      | (1ULL << TocParser::T__18)
      | (1ULL << TocParser::T__30)
      | (1ULL << TocParser::T__31)
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
      | (1ULL << TocParser::T__54)
      | (1ULL << TocParser::T__55)
      | (1ULL << TocParser::T__56))) != 0))) {
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

bool TocParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 30: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool TocParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);
    case 2: return precpred(_ctx, 10);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 5);
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> TocParser::_decisionToDFA;
atn::PredictionContextCache TocParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TocParser::_atn;
std::vector<uint16_t> TocParser::_serializedATN;

std::vector<std::string> TocParser::_ruleNames = {
  "prog", "decl", "namespaceDecl", "varDecl", "var", "varInit", "type", 
  "typeModifier", "namespaceSpecifier", "funcDecl", "func", "parameter", 
  "body", "structDecl", "structMember", "structVar", "structMethod", "privateDecl", 
  "genericDecl", "stmt", "ifStmt", "elseIfStmt", "elseStmt", "switchStmt", 
  "switchBody", "switchCase", "forStmt", "whileStmt", "assignStmt", "returnStmt", 
  "expr", "literal", "funcName", "varName", "typeName", "structName", "postfix_op", 
  "prefix_op", "binary_op"
};

std::vector<std::string> TocParser::_literalNames = {
  "", "';'", "'namespace'", "'{'", "'}'", "'var'", "':'", "'='", "'*'", 
  "'['", "']'", "'::'", "'func'", "'('", "')'", "','", "'struct'", "'private'", 
  "'<'", "'>'", "'if'", "'else'", "'switch'", "'case'", "'for'", "'while'", 
  "'return'", "'.'", "'\u003F'", "'++'", "'--'", "'+'", "'-'", "'!'", "'~'", 
  "'&'", "'/'", "'%'", "'|'", "'^'", "'=='", "'!='", "'<='", "'>='", "'<<'", 
  "'>>'", "'||'", "'&&'", "'&='", "'|='", "'^='", "'<<='", "'>>='", "'+='", 
  "'-='", "'*='", "'/='", "'%='"
};

std::vector<std::string> TocParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "INT_LIT", "DECIMAL_LIT", "BOOL_LIT", "StringLit", "NAME", 
  "WS", "NEWLINE"
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
       0x3, 0x42, 0x190, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x3, 0x2, 
       0x6, 0x2, 0x52, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x53, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
       0x5, 0x3, 0x5e, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x7, 0x4, 0x64, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x67, 0xb, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x74, 0xa, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x8, 0x7, 0x8, 0x7e, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x81, 
       0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x85, 0xa, 0x8, 0xc, 0x8, 
       0xe, 0x8, 0x88, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
       0x8d, 0xa, 0x9, 0x3, 0x9, 0x5, 0x9, 0x90, 0xa, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x9a, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa4, 0xa, 0xc, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0xa9, 0xa, 0xd, 0xc, 0xd, 
       0xe, 0xd, 0xac, 0xb, 0xd, 0x5, 0xd, 0xae, 0xa, 0xd, 0x3, 0xe, 0x3, 
       0xe, 0x7, 0xe, 0xb2, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xb5, 0xb, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xbc, 
       0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xc0, 0xa, 0xf, 0xc, 0xf, 
       0xe, 0xf, 0xc3, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x5, 0x10, 
       0xc8, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xcc, 0xa, 0x10, 
       0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 
       0xd9, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xdc, 0xb, 0x14, 0x3, 0x14, 
       0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 
       0xf0, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x7, 
       0x16, 0xf6, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xf9, 0xb, 0x16, 0x3, 
       0x16, 0x5, 0x16, 0xfc, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x7, 0x1a, 
       0x10c, 0xa, 0x1a, 0xc, 0x1a, 0xe, 0x1a, 0x10f, 0xb, 0x1a, 0x3, 0x1a, 
       0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
       0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
       0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
       0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x12c, 0xa, 0x20, 0xc, 0x20, 0xe, 
       0x20, 0x12f, 0xb, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x7, 0x20, 0x136, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x139, 
       0xb, 0x20, 0x5, 0x20, 0x13b, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 0x148, 0xa, 0x20, 0xc, 0x20, 
       0xe, 0x20, 0x14b, 0xb, 0x20, 0x3, 0x20, 0x5, 0x20, 0x14e, 0xa, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x7, 0x20, 
       0x161, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x164, 0xb, 0x20, 0x5, 0x20, 
       0x166, 0xa, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
       0x20, 0x3, 0x20, 0x7, 0x20, 0x174, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 
       0x177, 0xb, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
       0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x18c, 0xa, 0x27, 0x3, 0x28, 
       0x3, 0x28, 0x3, 0x28, 0x2, 0x3, 0x3e, 0x29, 0x2, 0x4, 0x6, 0x8, 0xa, 
       0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
       0x2, 0x5, 0x3, 0x2, 0x3c, 0x3f, 0x3, 0x2, 0x1f, 0x20, 0x6, 0x2, 0xa, 
       0xa, 0x14, 0x15, 0x21, 0x22, 0x25, 0x3b, 0x2, 0x19c, 0x2, 0x51, 0x3, 
       0x2, 0x2, 0x2, 0x4, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x5f, 0x3, 0x2, 
       0x2, 0x2, 0x8, 0x6a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x6d, 0x3, 0x2, 0x2, 
       0x2, 0xc, 0x75, 0x3, 0x2, 0x2, 0x2, 0xe, 0x7f, 0x3, 0x2, 0x2, 0x2, 
       0x10, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x91, 0x3, 0x2, 0x2, 0x2, 0x14, 
       0x94, 0x3, 0x2, 0x2, 0x2, 0x16, 0x97, 0x3, 0x2, 0x2, 0x2, 0x18, 0xad, 
       0x3, 0x2, 0x2, 0x2, 0x1a, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb8, 0x3, 
       0x2, 0x2, 0x2, 0x1e, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x20, 0xcd, 0x3, 0x2, 
       0x2, 0x2, 0x22, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x24, 0xd2, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x28, 0xef, 0x3, 0x2, 0x2, 0x2, 
       0x2a, 0xf1, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x2e, 
       0x102, 0x3, 0x2, 0x2, 0x2, 0x30, 0x105, 0x3, 0x2, 0x2, 0x2, 0x32, 
       0x109, 0x3, 0x2, 0x2, 0x2, 0x34, 0x112, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x116, 0x3, 0x2, 0x2, 0x2, 0x38, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x3a, 
       0x122, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x126, 0x3, 0x2, 0x2, 0x2, 0x3e, 
       0x14d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x178, 0x3, 0x2, 0x2, 0x2, 0x42, 
       0x17a, 0x3, 0x2, 0x2, 0x2, 0x44, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x46, 
       0x17e, 0x3, 0x2, 0x2, 0x2, 0x48, 0x180, 0x3, 0x2, 0x2, 0x2, 0x4a, 
       0x182, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x4e, 
       0x18d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x5, 0x4, 0x3, 0x2, 0x51, 
       0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 
       0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 
       0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x2, 0x2, 0x3, 0x56, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x57, 0x58, 0x5, 0x8, 0x5, 0x2, 0x58, 0x59, 0x7, 0x3, 0x2, 
       0x2, 0x59, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5e, 0x5, 0x14, 0xb, 
       0x2, 0x5b, 0x5e, 0x5, 0x1c, 0xf, 0x2, 0x5c, 0x5e, 0x5, 0x6, 0x4, 
       0x2, 0x5d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5a, 0x3, 0x2, 0x2, 0x2, 
       0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x4, 0x2, 0x2, 0x60, 0x61, 
       0x5, 0x46, 0x24, 0x2, 0x61, 0x65, 0x7, 0x5, 0x2, 0x2, 0x62, 0x64, 
       0x5, 0x4, 0x3, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x3, 
       0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 
       0x2, 0x68, 0x69, 0x7, 0x6, 0x2, 0x2, 0x69, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x6b, 0x7, 0x7, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0xa, 0x6, 0x2, 0x6c, 
       0x9, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0x44, 0x23, 0x2, 0x6e, 
       0x6f, 0x7, 0x8, 0x2, 0x2, 0x6f, 0x70, 0x5, 0xe, 0x8, 0x2, 0x70, 0x73, 
       0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x9, 0x2, 0x2, 0x72, 0x74, 0x5, 
       0x3e, 0x20, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 
       0x2, 0x2, 0x2, 0x74, 0xb, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x5, 0x44, 
       0x23, 0x2, 0x76, 0x77, 0x7, 0x8, 0x2, 0x2, 0x77, 0x78, 0x5, 0xe, 
       0x8, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x9, 0x2, 
       0x2, 0x7a, 0x7b, 0x5, 0x3e, 0x20, 0x2, 0x7b, 0xd, 0x3, 0x2, 0x2, 
       0x2, 0x7c, 0x7e, 0x5, 0x12, 0xa, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 
       0x2, 0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 
       0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 
       0x7f, 0x3, 0x2, 0x2, 0x2, 0x82, 0x86, 0x5, 0x46, 0x24, 0x2, 0x83, 
       0x85, 0x5, 0x10, 0x9, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 
       0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 
       0x3, 0x2, 0x2, 0x2, 0x87, 0xf, 0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 
       0x2, 0x2, 0x2, 0x89, 0x90, 0x7, 0xa, 0x2, 0x2, 0x8a, 0x8c, 0x7, 0xb, 
       0x2, 0x2, 0x8b, 0x8d, 0x7, 0x3c, 0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 
       0x2, 0x2, 0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 
       0x2, 0x8e, 0x90, 0x7, 0xc, 0x2, 0x2, 0x8f, 0x89, 0x3, 0x2, 0x2, 0x2, 
       0x8f, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x90, 0x11, 0x3, 0x2, 0x2, 0x2, 0x91, 
       0x92, 0x5, 0x46, 0x24, 0x2, 0x92, 0x93, 0x7, 0xd, 0x2, 0x2, 0x93, 
       0x13, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0xe, 0x2, 0x2, 0x95, 0x96, 
       0x5, 0x16, 0xc, 0x2, 0x96, 0x15, 0x3, 0x2, 0x2, 0x2, 0x97, 0x99, 
       0x5, 0x42, 0x22, 0x2, 0x98, 0x9a, 0x5, 0x26, 0x14, 0x2, 0x99, 0x98, 
       0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 
       0x2, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0xf, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x18, 
       0xd, 0x2, 0x9d, 0x9e, 0x7, 0x10, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x8, 
       0x2, 0x2, 0x9f, 0xa0, 0x5, 0xe, 0x8, 0x2, 0xa0, 0xa3, 0x3, 0x2, 0x2, 
       0x2, 0xa1, 0xa4, 0x5, 0x1a, 0xe, 0x2, 0xa2, 0xa4, 0x7, 0x3, 0x2, 
       0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 
       0xa4, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xaa, 0x5, 0xa, 0x6, 0x2, 0xa6, 
       0xa7, 0x7, 0x11, 0x2, 0x2, 0xa7, 0xa9, 0x5, 0xa, 0x6, 0x2, 0xa8, 
       0xa6, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 
       0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xae, 0x3, 
       0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa5, 0x3, 0x2, 
       0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0xaf, 0xb3, 0x7, 0x5, 0x2, 0x2, 0xb0, 0xb2, 0x5, 0x28, 0x15, 
       0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 
       0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 
       0xb6, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 
       0x7, 0x6, 0x2, 0x2, 0xb7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 
       0x12, 0x2, 0x2, 0xb9, 0xbb, 0x5, 0x48, 0x25, 0x2, 0xba, 0xbc, 0x5, 
       0x26, 0x14, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 
       0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xc1, 0x7, 0x5, 
       0x2, 0x2, 0xbe, 0xc0, 0x5, 0x1e, 0x10, 0x2, 0xbf, 0xbe, 0x3, 0x2, 
       0x2, 0x2, 0xc0, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 
       0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc4, 0x3, 0x2, 0x2, 0x2, 
       0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x6, 0x2, 0x2, 0xc5, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 0x5, 0x24, 0x13, 0x2, 0xc7, 
       0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x5, 0x20, 0x11, 0x2, 0xca, 0xcc, 
       0x5, 0x22, 0x12, 0x2, 0xcb, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xca, 
       0x3, 0x2, 0x2, 0x2, 0xcc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x5, 
       0xa, 0x6, 0x2, 0xce, 0xcf, 0x7, 0x3, 0x2, 0x2, 0xcf, 0x21, 0x3, 0x2, 
       0x2, 0x2, 0xd0, 0xd1, 0x5, 0x16, 0xc, 0x2, 0xd1, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0xd2, 0xd3, 0x7, 0x13, 0x2, 0x2, 0xd3, 0x25, 0x3, 0x2, 
       0x2, 0x2, 0xd4, 0xd5, 0x7, 0x14, 0x2, 0x2, 0xd5, 0xda, 0x5, 0x46, 
       0x24, 0x2, 0xd6, 0xd7, 0x7, 0x11, 0x2, 0x2, 0xd7, 0xd9, 0x5, 0x46, 
       0x24, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 
       0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 
       0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 
       0xdd, 0xde, 0x7, 0x15, 0x2, 0x2, 0xde, 0x27, 0x3, 0x2, 0x2, 0x2, 
       0xdf, 0xe0, 0x5, 0x8, 0x5, 0x2, 0xe0, 0xe1, 0x7, 0x3, 0x2, 0x2, 0xe1, 
       0xf0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xf0, 0x5, 0x2a, 0x16, 0x2, 0xe3, 
       0xf0, 0x5, 0x30, 0x19, 0x2, 0xe4, 0xf0, 0x5, 0x36, 0x1c, 0x2, 0xe5, 
       0xf0, 0x5, 0x38, 0x1d, 0x2, 0xe6, 0xe7, 0x5, 0x3a, 0x1e, 0x2, 0xe7, 
       0xe8, 0x7, 0x3, 0x2, 0x2, 0xe8, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 
       0x5, 0x3c, 0x1f, 0x2, 0xea, 0xeb, 0x7, 0x3, 0x2, 0x2, 0xeb, 0xf0, 
       0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x5, 0x3e, 0x20, 0x2, 0xed, 0xee, 
       0x7, 0x3, 0x2, 0x2, 0xee, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xef, 0xdf, 0x3, 
       0x2, 0x2, 0x2, 0xef, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe3, 0x3, 0x2, 
       0x2, 0x2, 0xef, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe5, 0x3, 0x2, 0x2, 
       0x2, 0xef, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xef, 0xe9, 0x3, 0x2, 0x2, 0x2, 
       0xef, 0xec, 0x3, 0x2, 0x2, 0x2, 0xf0, 0x29, 0x3, 0x2, 0x2, 0x2, 0xf1, 
       0xf2, 0x7, 0x16, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x3e, 0x20, 0x2, 0xf3, 
       0xf7, 0x5, 0x1a, 0xe, 0x2, 0xf4, 0xf6, 0x5, 0x2c, 0x17, 0x2, 0xf5, 
       0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 
       0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfb, 0x3, 
       0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x2e, 
       0x18, 0x2, 0xfb, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 
       0x2, 0x2, 0xfc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x17, 
       0x2, 0x2, 0xfe, 0xff, 0x7, 0x16, 0x2, 0x2, 0xff, 0x100, 0x5, 0x3e, 
       0x20, 0x2, 0x100, 0x101, 0x5, 0x1a, 0xe, 0x2, 0x101, 0x2d, 0x3, 0x2, 
       0x2, 0x2, 0x102, 0x103, 0x7, 0x17, 0x2, 0x2, 0x103, 0x104, 0x5, 0x1a, 
       0xe, 0x2, 0x104, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x7, 0x18, 
       0x2, 0x2, 0x106, 0x107, 0x5, 0x3e, 0x20, 0x2, 0x107, 0x108, 0x5, 
       0x32, 0x1a, 0x2, 0x108, 0x31, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10d, 0x7, 
       0x5, 0x2, 0x2, 0x10a, 0x10c, 0x5, 0x34, 0x1b, 0x2, 0x10b, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x10c, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10b, 
       0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x10f, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 
       0x7, 0x6, 0x2, 0x2, 0x111, 0x33, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
       0x7, 0x19, 0x2, 0x2, 0x113, 0x114, 0x5, 0x3e, 0x20, 0x2, 0x114, 0x115, 
       0x5, 0x1a, 0xe, 0x2, 0x115, 0x35, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 
       0x7, 0x1a, 0x2, 0x2, 0x117, 0x118, 0x5, 0xc, 0x7, 0x2, 0x118, 0x119, 
       0x7, 0x11, 0x2, 0x2, 0x119, 0x11a, 0x5, 0x3e, 0x20, 0x2, 0x11a, 0x11b, 
       0x7, 0x11, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x3e, 0x20, 0x2, 0x11c, 0x11d, 
       0x5, 0x1a, 0xe, 0x2, 0x11d, 0x37, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 
       0x7, 0x1b, 0x2, 0x2, 0x11f, 0x120, 0x5, 0x3e, 0x20, 0x2, 0x120, 0x121, 
       0x5, 0x1a, 0xe, 0x2, 0x121, 0x39, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 
       0x5, 0x3e, 0x20, 0x2, 0x123, 0x124, 0x7, 0x9, 0x2, 0x2, 0x124, 0x125, 
       0x5, 0x3e, 0x20, 0x2, 0x125, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 
       0x7, 0x1c, 0x2, 0x2, 0x127, 0x128, 0x5, 0x3e, 0x20, 0x2, 0x128, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12d, 0x8, 0x20, 0x1, 0x2, 0x12a, 0x12c, 
       0x5, 0x12, 0xa, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12f, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 
       0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x5, 0x42, 0x22, 0x2, 0x131, 0x13a, 
       0x7, 0xf, 0x2, 0x2, 0x132, 0x137, 0x5, 0x3e, 0x20, 0x2, 0x133, 0x134, 
       0x7, 0x11, 0x2, 0x2, 0x134, 0x136, 0x5, 0x3e, 0x20, 0x2, 0x135, 0x133, 
       0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 
       0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x13b, 
       0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x132, 
       0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 
       0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x10, 0x2, 0x2, 0x13d, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x13e, 0x14e, 0x5, 0x40, 0x21, 0x2, 0x13f, 0x140, 
       0x7, 0xf, 0x2, 0x2, 0x140, 0x141, 0x5, 0x3e, 0x20, 0x2, 0x141, 0x142, 
       0x7, 0x10, 0x2, 0x2, 0x142, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
       0x5, 0x4c, 0x27, 0x2, 0x144, 0x145, 0x5, 0x3e, 0x20, 0x8, 0x145, 
       0x14e, 0x3, 0x2, 0x2, 0x2, 0x146, 0x148, 0x5, 0x12, 0xa, 0x2, 0x147, 
       0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x149, 
       0x147, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 
       0x14c, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14c, 
       0x14e, 0x5, 0x44, 0x23, 0x2, 0x14d, 0x129, 0x3, 0x2, 0x2, 0x2, 0x14d, 
       0x13e, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x14d, 
       0x143, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14e, 
       0x175, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0xc, 0x6, 0x2, 0x2, 0x150, 
       0x151, 0x5, 0x4e, 0x28, 0x2, 0x151, 0x152, 0x5, 0x3e, 0x20, 0x7, 
       0x152, 0x174, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0xc, 0x5, 0x2, 0x2, 
       0x154, 0x155, 0x7, 0x1e, 0x2, 0x2, 0x155, 0x156, 0x5, 0x3e, 0x20, 
       0x2, 0x156, 0x157, 0x7, 0x8, 0x2, 0x2, 0x157, 0x158, 0x5, 0x3e, 0x20, 
       0x6, 0x158, 0x174, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0xc, 0xc, 0x2, 
       0x2, 0x15a, 0x15b, 0x7, 0x1d, 0x2, 0x2, 0x15b, 0x15c, 0x5, 0x42, 
       0x22, 0x2, 0x15c, 0x165, 0x7, 0xf, 0x2, 0x2, 0x15d, 0x162, 0x5, 0x3e, 
       0x20, 0x2, 0x15e, 0x15f, 0x7, 0x11, 0x2, 0x2, 0x15f, 0x161, 0x5, 
       0x3e, 0x20, 0x2, 0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x161, 0x164, 
       0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 
       0x3, 0x2, 0x2, 0x2, 0x163, 0x166, 0x3, 0x2, 0x2, 0x2, 0x164, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x165, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x165, 0x166, 
       0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 
       0x7, 0x10, 0x2, 0x2, 0x168, 0x174, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 
       0xc, 0x9, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0x1d, 0x2, 0x2, 0x16b, 0x174, 
       0x5, 0x44, 0x23, 0x2, 0x16c, 0x16d, 0xc, 0x7, 0x2, 0x2, 0x16d, 0x174, 
       0x5, 0x4a, 0x26, 0x2, 0x16e, 0x16f, 0xc, 0x4, 0x2, 0x2, 0x16f, 0x170, 
       0x7, 0xb, 0x2, 0x2, 0x170, 0x171, 0x5, 0x3e, 0x20, 0x2, 0x171, 0x172, 
       0x7, 0xc, 0x2, 0x2, 0x172, 0x174, 0x3, 0x2, 0x2, 0x2, 0x173, 0x14f, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x153, 0x3, 0x2, 0x2, 0x2, 0x173, 0x159, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x169, 0x3, 0x2, 0x2, 0x2, 0x173, 0x16c, 
       0x3, 0x2, 0x2, 0x2, 0x173, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x174, 0x177, 
       0x3, 0x2, 0x2, 0x2, 0x175, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 
       0x3, 0x2, 0x2, 0x2, 0x176, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 
       0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x9, 0x2, 0x2, 0x2, 0x179, 0x41, 
       0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x40, 0x2, 0x2, 0x17b, 0x43, 
       0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x7, 0x40, 0x2, 0x2, 0x17d, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x40, 0x2, 0x2, 0x17f, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x40, 0x2, 0x2, 0x181, 0x49, 
       0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x9, 0x3, 0x2, 0x2, 0x183, 0x4b, 
       0x3, 0x2, 0x2, 0x2, 0x184, 0x18c, 0x7, 0x21, 0x2, 0x2, 0x185, 0x18c, 
       0x7, 0x22, 0x2, 0x2, 0x186, 0x18c, 0x7, 0x23, 0x2, 0x2, 0x187, 0x18c, 
       0x7, 0x24, 0x2, 0x2, 0x188, 0x18c, 0x7, 0x25, 0x2, 0x2, 0x189, 0x18c, 
       0x7, 0xa, 0x2, 0x2, 0x18a, 0x18c, 0x5, 0x4a, 0x26, 0x2, 0x18b, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x185, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x186, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x188, 
       0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18a, 
       0x3, 0x2, 0x2, 0x2, 0x18c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 
       0x9, 0x4, 0x2, 0x2, 0x18e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x53, 
       0x5d, 0x65, 0x73, 0x7f, 0x86, 0x8c, 0x8f, 0x99, 0xa3, 0xaa, 0xad, 
       0xb3, 0xbb, 0xc1, 0xc7, 0xcb, 0xda, 0xef, 0xf7, 0xfb, 0x10d, 0x12d, 
       0x137, 0x13a, 0x149, 0x14d, 0x162, 0x165, 0x173, 0x175, 0x18b, 
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
