
// Generated from Expr.g4 by ANTLR 4.7.2


#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

ExprParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ProgramContext::PROGRAM() {
  return getToken(ExprParser::PROGRAM, 0);
}

tree::TerminalNode* ExprParser::ProgramContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::ProgramContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::StatementContext* ExprParser::ProgramContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

tree::TerminalNode* ExprParser::ProgramContext::EOF() {
  return getToken(ExprParser::EOF, 0);
}


size_t ExprParser::ProgramContext::getRuleIndex() const {
  return ExprParser::RuleProgram;
}


antlrcpp::Any ExprParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgramContext* ExprParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(ExprParser::PROGRAM);
    setState(37);
    match(ExprParser::IDENTIFIER);
    setState(38);
    match(ExprParser::SEMICOLON);
    setState(39);
    statement();
    setState(40);
    match(ExprParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundstatementContext ------------------------------------------------------------------

ExprParser::CompoundstatementContext::CompoundstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CompoundstatementContext::BEGIN() {
  return getToken(ExprParser::BEGIN, 0);
}

tree::TerminalNode* ExprParser::CompoundstatementContext::END() {
  return getToken(ExprParser::END, 0);
}

tree::TerminalNode* ExprParser::CompoundstatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

tree::TerminalNode* ExprParser::CompoundstatementContext::PERIOD() {
  return getToken(ExprParser::PERIOD, 0);
}

std::vector<ExprParser::StatementContext *> ExprParser::CompoundstatementContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::CompoundstatementContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::CompoundstatementContext::getRuleIndex() const {
  return ExprParser::RuleCompoundstatement;
}


antlrcpp::Any ExprParser::CompoundstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCompoundstatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CompoundstatementContext* ExprParser::compoundstatement() {
  CompoundstatementContext *_localctx = _tracker.createInstance<CompoundstatementContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleCompoundstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(ExprParser::BEGIN);
    setState(44); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(43);
      statement();
      setState(46); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::BEGIN)
      | (1ULL << ExprParser::CASE)
      | (1ULL << ExprParser::FOR)
      | (1ULL << ExprParser::IF)
      | (1ULL << ExprParser::REPEAT)
      | (1ULL << ExprParser::WHILE)
      | (1ULL << ExprParser::WRITE)
      | (1ULL << ExprParser::WRITELN))) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (ExprParser::LPAREN - 75))
      | (1ULL << (ExprParser::IDENTIFIER - 75))
      | (1ULL << (ExprParser::INTEGER - 75))
      | (1ULL << (ExprParser::REAL - 75))
      | (1ULL << (ExprParser::CHARACTER - 75)))) != 0));
    setState(48);
    match(ExprParser::END);
    setState(49);
    _la = _input->LA(1);
    if (!(_la == ExprParser::SEMICOLON

    || _la == ExprParser::PERIOD)) {
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

//----------------- AssignstatementContext ------------------------------------------------------------------

ExprParser::AssignstatementContext::AssignstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::VariableContext* ExprParser::AssignstatementContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::AssignstatementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

ExprParser::ExprContext* ExprParser::AssignstatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::AssignstatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}


size_t ExprParser::AssignstatementContext::getRuleIndex() const {
  return ExprParser::RuleAssignstatement;
}


antlrcpp::Any ExprParser::AssignstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAssignstatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::AssignstatementContext* ExprParser::assignstatement() {
  AssignstatementContext *_localctx = _tracker.createInstance<AssignstatementContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleAssignstatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    variable();
    setState(52);
    match(ExprParser::ASSIGN);
    setState(53);
    expr(0);
    setState(54);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RepeatstatementContext ------------------------------------------------------------------

ExprParser::RepeatstatementContext::RepeatstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::RepeatstatementContext::REPEAT() {
  return getToken(ExprParser::REPEAT, 0);
}

tree::TerminalNode* ExprParser::RepeatstatementContext::UNTIL() {
  return getToken(ExprParser::UNTIL, 0);
}

ExprParser::ExprContext* ExprParser::RepeatstatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::RepeatstatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<ExprParser::StatementContext *> ExprParser::RepeatstatementContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::RepeatstatementContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}


size_t ExprParser::RepeatstatementContext::getRuleIndex() const {
  return ExprParser::RuleRepeatstatement;
}


antlrcpp::Any ExprParser::RepeatstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRepeatstatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::RepeatstatementContext* ExprParser::repeatstatement() {
  RepeatstatementContext *_localctx = _tracker.createInstance<RepeatstatementContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleRepeatstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(ExprParser::REPEAT);
    setState(58); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(57);
      statement();
      setState(60); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::BEGIN)
      | (1ULL << ExprParser::CASE)
      | (1ULL << ExprParser::FOR)
      | (1ULL << ExprParser::IF)
      | (1ULL << ExprParser::REPEAT)
      | (1ULL << ExprParser::WHILE)
      | (1ULL << ExprParser::WRITE)
      | (1ULL << ExprParser::WRITELN))) != 0) || ((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (ExprParser::LPAREN - 75))
      | (1ULL << (ExprParser::IDENTIFIER - 75))
      | (1ULL << (ExprParser::INTEGER - 75))
      | (1ULL << (ExprParser::REAL - 75))
      | (1ULL << (ExprParser::CHARACTER - 75)))) != 0));
    setState(62);
    match(ExprParser::UNTIL);
    setState(63);
    expr(0);
    setState(64);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhilestatementContext ------------------------------------------------------------------

ExprParser::WhilestatementContext::WhilestatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WhilestatementContext::WHILE() {
  return getToken(ExprParser::WHILE, 0);
}

ExprParser::ExprContext* ExprParser::WhilestatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::WhilestatementContext::DO() {
  return getToken(ExprParser::DO, 0);
}

ExprParser::StatementContext* ExprParser::WhilestatementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::WhilestatementContext::getRuleIndex() const {
  return ExprParser::RuleWhilestatement;
}


antlrcpp::Any ExprParser::WhilestatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWhilestatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WhilestatementContext* ExprParser::whilestatement() {
  WhilestatementContext *_localctx = _tracker.createInstance<WhilestatementContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleWhilestatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(ExprParser::WHILE);
    setState(67);
    expr(0);
    setState(68);
    match(ExprParser::DO);
    setState(69);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForstatementContext ------------------------------------------------------------------

ExprParser::ForstatementContext::ForstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ForstatementContext::FOR() {
  return getToken(ExprParser::FOR, 0);
}

ExprParser::VariableContext* ExprParser::ForstatementContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

tree::TerminalNode* ExprParser::ForstatementContext::ASSIGN() {
  return getToken(ExprParser::ASSIGN, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::ForstatementContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ForstatementContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ForstatementContext::DO() {
  return getToken(ExprParser::DO, 0);
}

ExprParser::StatementContext* ExprParser::ForstatementContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}

tree::TerminalNode* ExprParser::ForstatementContext::TO() {
  return getToken(ExprParser::TO, 0);
}

tree::TerminalNode* ExprParser::ForstatementContext::DOWNTO() {
  return getToken(ExprParser::DOWNTO, 0);
}


size_t ExprParser::ForstatementContext::getRuleIndex() const {
  return ExprParser::RuleForstatement;
}


antlrcpp::Any ExprParser::ForstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitForstatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ForstatementContext* ExprParser::forstatement() {
  ForstatementContext *_localctx = _tracker.createInstance<ForstatementContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleForstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(ExprParser::FOR);
    setState(72);
    variable();
    setState(73);
    match(ExprParser::ASSIGN);
    setState(74);
    expr(0);
    setState(75);
    _la = _input->LA(1);
    if (!(_la == ExprParser::DOWNTO

    || _la == ExprParser::TO)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(76);
    expr(0);
    setState(77);
    match(ExprParser::DO);
    setState(78);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfstatementContext ------------------------------------------------------------------

ExprParser::IfstatementContext::IfstatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::IfstatementContext::IF() {
  return getToken(ExprParser::IF, 0);
}

ExprParser::ExprContext* ExprParser::IfstatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::IfstatementContext::THEN() {
  return getToken(ExprParser::THEN, 0);
}

std::vector<ExprParser::StatementContext *> ExprParser::IfstatementContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::IfstatementContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
}

tree::TerminalNode* ExprParser::IfstatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

tree::TerminalNode* ExprParser::IfstatementContext::ELSE() {
  return getToken(ExprParser::ELSE, 0);
}


size_t ExprParser::IfstatementContext::getRuleIndex() const {
  return ExprParser::RuleIfstatement;
}


antlrcpp::Any ExprParser::IfstatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIfstatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::IfstatementContext* ExprParser::ifstatement() {
  IfstatementContext *_localctx = _tracker.createInstance<IfstatementContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleIfstatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(ExprParser::IF);
    setState(81);
    expr(0);
    setState(82);
    match(ExprParser::THEN);
    setState(83);
    statement();
    setState(86);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ExprParser::ELSE) {
      setState(84);
      match(ExprParser::ELSE);
      setState(85);
      statement();
    }
    setState(88);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CasestatementContext ------------------------------------------------------------------

ExprParser::CasestatementContext::CasestatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::CasestatementContext::CASE() {
  return getToken(ExprParser::CASE, 0);
}

ExprParser::ExprContext* ExprParser::CasestatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::CasestatementContext::OF() {
  return getToken(ExprParser::OF, 0);
}

tree::TerminalNode* ExprParser::CasestatementContext::END() {
  return getToken(ExprParser::END, 0);
}

tree::TerminalNode* ExprParser::CasestatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

std::vector<ExprParser::CaselistContext *> ExprParser::CasestatementContext::caselist() {
  return getRuleContexts<ExprParser::CaselistContext>();
}

ExprParser::CaselistContext* ExprParser::CasestatementContext::caselist(size_t i) {
  return getRuleContext<ExprParser::CaselistContext>(i);
}


size_t ExprParser::CasestatementContext::getRuleIndex() const {
  return ExprParser::RuleCasestatement;
}


antlrcpp::Any ExprParser::CasestatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCasestatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CasestatementContext* ExprParser::casestatement() {
  CasestatementContext *_localctx = _tracker.createInstance<CasestatementContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleCasestatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(ExprParser::CASE);
    setState(91);
    expr(0);
    setState(92);
    match(ExprParser::OF);
    setState(94); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(93);
      caselist();
      setState(96); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 75) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 75)) & ((1ULL << (ExprParser::LPAREN - 75))
      | (1ULL << (ExprParser::IDENTIFIER - 75))
      | (1ULL << (ExprParser::INTEGER - 75))
      | (1ULL << (ExprParser::REAL - 75))
      | (1ULL << (ExprParser::CHARACTER - 75)))) != 0));
    setState(98);
    match(ExprParser::END);
    setState(99);
    match(ExprParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaselistContext ------------------------------------------------------------------

ExprParser::CaselistContext::CaselistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::ExprContext* ExprParser::CaselistContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::CaselistContext::COLON() {
  return getToken(ExprParser::COLON, 0);
}

ExprParser::StatementContext* ExprParser::CaselistContext::statement() {
  return getRuleContext<ExprParser::StatementContext>(0);
}


size_t ExprParser::CaselistContext::getRuleIndex() const {
  return ExprParser::RuleCaselist;
}


antlrcpp::Any ExprParser::CaselistContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCaselist(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::CaselistContext* ExprParser::caselist() {
  CaselistContext *_localctx = _tracker.createInstance<CaselistContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleCaselist);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    expr(0);
    setState(102);
    match(ExprParser::COLON);
    setState(103);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ExprParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::CompoundstatementContext* ExprParser::StatementContext::compoundstatement() {
  return getRuleContext<ExprParser::CompoundstatementContext>(0);
}

ExprParser::AssignstatementContext* ExprParser::StatementContext::assignstatement() {
  return getRuleContext<ExprParser::AssignstatementContext>(0);
}

ExprParser::RepeatstatementContext* ExprParser::StatementContext::repeatstatement() {
  return getRuleContext<ExprParser::RepeatstatementContext>(0);
}

ExprParser::WhilestatementContext* ExprParser::StatementContext::whilestatement() {
  return getRuleContext<ExprParser::WhilestatementContext>(0);
}

ExprParser::ForstatementContext* ExprParser::StatementContext::forstatement() {
  return getRuleContext<ExprParser::ForstatementContext>(0);
}

ExprParser::IfstatementContext* ExprParser::StatementContext::ifstatement() {
  return getRuleContext<ExprParser::IfstatementContext>(0);
}

ExprParser::CasestatementContext* ExprParser::StatementContext::casestatement() {
  return getRuleContext<ExprParser::CasestatementContext>(0);
}

ExprParser::WriteContext* ExprParser::StatementContext::write() {
  return getRuleContext<ExprParser::WriteContext>(0);
}

tree::TerminalNode* ExprParser::StatementContext::SEMICOLON() {
  return getToken(ExprParser::SEMICOLON, 0);
}

ExprParser::WritelnContext* ExprParser::StatementContext::writeln() {
  return getRuleContext<ExprParser::WritelnContext>(0);
}

ExprParser::ExprContext* ExprParser::StatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}


size_t ExprParser::StatementContext::getRuleIndex() const {
  return ExprParser::RuleStatement;
}


antlrcpp::Any ExprParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::StatementContext* ExprParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(123);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(105);
      compoundstatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(106);
      assignstatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(107);
      repeatstatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(108);
      whilestatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(109);
      forstatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(110);
      ifstatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(111);
      casestatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(112);
      write();
      setState(114);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(113);
        match(ExprParser::SEMICOLON);
        break;
      }

      }
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(116);
      writeln();
      setState(118);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
      case 1: {
        setState(117);
        match(ExprParser::SEMICOLON);
        break;
      }

      }
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(120);
      expr(0);
      setState(121);
      match(ExprParser::SEMICOLON);
      break;
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

//----------------- VariableContext ------------------------------------------------------------------

ExprParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::VariableContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}


size_t ExprParser::VariableContext::getRuleIndex() const {
  return ExprParser::RuleVariable;
}


antlrcpp::Any ExprParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::VariableContext* ExprParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 20, ExprParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(ExprParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Integer_constContext ------------------------------------------------------------------

ExprParser::Integer_constContext::Integer_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Integer_constContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}


size_t ExprParser::Integer_constContext::getRuleIndex() const {
  return ExprParser::RuleInteger_const;
}


antlrcpp::Any ExprParser::Integer_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInteger_const(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Integer_constContext* ExprParser::integer_const() {
  Integer_constContext *_localctx = _tracker.createInstance<Integer_constContext>(_ctx, getState());
  enterRule(_localctx, 22, ExprParser::RuleInteger_const);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(ExprParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Real_constContext ------------------------------------------------------------------

ExprParser::Real_constContext::Real_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Real_constContext::REAL() {
  return getToken(ExprParser::REAL, 0);
}


size_t ExprParser::Real_constContext::getRuleIndex() const {
  return ExprParser::RuleReal_const;
}


antlrcpp::Any ExprParser::Real_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitReal_const(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Real_constContext* ExprParser::real_const() {
  Real_constContext *_localctx = _tracker.createInstance<Real_constContext>(_ctx, getState());
  enterRule(_localctx, 24, ExprParser::RuleReal_const);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(ExprParser::REAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Character_constContext ------------------------------------------------------------------

ExprParser::Character_constContext::Character_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::Character_constContext::CHARACTER() {
  return getToken(ExprParser::CHARACTER, 0);
}


size_t ExprParser::Character_constContext::getRuleIndex() const {
  return ExprParser::RuleCharacter_const;
}


antlrcpp::Any ExprParser::Character_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharacter_const(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::Character_constContext* ExprParser::character_const() {
  Character_constContext *_localctx = _tracker.createInstance<Character_constContext>(_ctx, getState());
  enterRule(_localctx, 26, ExprParser::RuleCharacter_const);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(ExprParser::CHARACTER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_constContext ------------------------------------------------------------------

ExprParser::String_constContext::String_constContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::String_constContext::STRING() {
  return getToken(ExprParser::STRING, 0);
}


size_t ExprParser::String_constContext::getRuleIndex() const {
  return ExprParser::RuleString_const;
}


antlrcpp::Any ExprParser::String_constContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitString_const(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::String_constContext* ExprParser::string_const() {
  String_constContext *_localctx = _tracker.createInstance<String_constContext>(_ctx, getState());
  enterRule(_localctx, 28, ExprParser::RuleString_const);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    match(ExprParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WriteContext ------------------------------------------------------------------

ExprParser::WriteContext::WriteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WriteContext::WRITE() {
  return getToken(ExprParser::WRITE, 0);
}

tree::TerminalNode* ExprParser::WriteContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

tree::TerminalNode* ExprParser::WriteContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::Character_constContext* ExprParser::WriteContext::character_const() {
  return getRuleContext<ExprParser::Character_constContext>(0);
}

ExprParser::String_constContext* ExprParser::WriteContext::string_const() {
  return getRuleContext<ExprParser::String_constContext>(0);
}

ExprParser::VariableContext* ExprParser::WriteContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::WriteContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::WriteContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::WriteContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::WriteContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::WriteContext::getRuleIndex() const {
  return ExprParser::RuleWrite;
}


antlrcpp::Any ExprParser::WriteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWrite(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WriteContext* ExprParser::write() {
  WriteContext *_localctx = _tracker.createInstance<WriteContext>(_ctx, getState());
  enterRule(_localctx, 30, ExprParser::RuleWrite);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    match(ExprParser::WRITE);
    setState(136);
    match(ExprParser::LPAREN);
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::CHARACTER: {
        setState(137);
        character_const();
        break;
      }

      case ExprParser::STRING: {
        setState(138);
        string_const();
        break;
      }

      case ExprParser::IDENTIFIER: {
        setState(139);
        variable();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(146);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(142);
      match(ExprParser::COMMA);
      setState(143);
      expr(0);
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(149);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WritelnContext ------------------------------------------------------------------

ExprParser::WritelnContext::WritelnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::WritelnContext::WRITELN() {
  return getToken(ExprParser::WRITELN, 0);
}

tree::TerminalNode* ExprParser::WritelnContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

ExprParser::String_constContext* ExprParser::WritelnContext::string_const() {
  return getRuleContext<ExprParser::String_constContext>(0);
}

tree::TerminalNode* ExprParser::WritelnContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> ExprParser::WritelnContext::COMMA() {
  return getTokens(ExprParser::COMMA);
}

tree::TerminalNode* ExprParser::WritelnContext::COMMA(size_t i) {
  return getToken(ExprParser::COMMA, i);
}

std::vector<ExprParser::ExprContext *> ExprParser::WritelnContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::WritelnContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}


size_t ExprParser::WritelnContext::getRuleIndex() const {
  return ExprParser::RuleWriteln;
}


antlrcpp::Any ExprParser::WritelnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWriteln(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::WritelnContext* ExprParser::writeln() {
  WritelnContext *_localctx = _tracker.createInstance<WritelnContext>(_ctx, getState());
  enterRule(_localctx, 32, ExprParser::RuleWriteln);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(ExprParser::WRITELN);
    setState(152);
    match(ExprParser::LPAREN);
    setState(153);
    string_const();
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::COMMA) {
      setState(154);
      match(ExprParser::COMMA);
      setState(155);
      expr(0);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(ExprParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ExprContext::LPAREN() {
  return getToken(ExprParser::LPAREN, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::ExprContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ExprContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

tree::TerminalNode* ExprParser::ExprContext::RPAREN() {
  return getToken(ExprParser::RPAREN, 0);
}

ExprParser::VariableContext* ExprParser::ExprContext::variable() {
  return getRuleContext<ExprParser::VariableContext>(0);
}

ExprParser::Integer_constContext* ExprParser::ExprContext::integer_const() {
  return getRuleContext<ExprParser::Integer_constContext>(0);
}

ExprParser::Character_constContext* ExprParser::ExprContext::character_const() {
  return getRuleContext<ExprParser::Character_constContext>(0);
}

ExprParser::Real_constContext* ExprParser::ExprContext::real_const() {
  return getRuleContext<ExprParser::Real_constContext>(0);
}

tree::TerminalNode* ExprParser::ExprContext::MULT_OP() {
  return getToken(ExprParser::MULT_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::DIV_OP() {
  return getToken(ExprParser::DIV_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::PLUS_OP() {
  return getToken(ExprParser::PLUS_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::MINUS_OP() {
  return getToken(ExprParser::MINUS_OP, 0);
}

tree::TerminalNode* ExprParser::ExprContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
}

tree::TerminalNode* ExprParser::ExprContext::NE() {
  return getToken(ExprParser::NE, 0);
}

tree::TerminalNode* ExprParser::ExprContext::LT() {
  return getToken(ExprParser::LT, 0);
}

tree::TerminalNode* ExprParser::ExprContext::LTEQ() {
  return getToken(ExprParser::LTEQ, 0);
}

tree::TerminalNode* ExprParser::ExprContext::GT() {
  return getToken(ExprParser::GT, 0);
}

tree::TerminalNode* ExprParser::ExprContext::GTEQ() {
  return getToken(ExprParser::GTEQ, 0);
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}


antlrcpp::Any ExprParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}


ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(172);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::LPAREN: {
        setState(164);
        match(ExprParser::LPAREN);
        setState(165);
        expr(0);
        setState(166);
        match(ExprParser::RPAREN);
        break;
      }

      case ExprParser::IDENTIFIER: {
        setState(168);
        variable();
        break;
      }

      case ExprParser::INTEGER: {
        setState(169);
        integer_const();
        break;
      }

      case ExprParser::CHARACTER: {
        setState(170);
        character_const();
        break;
      }

      case ExprParser::REAL: {
        setState(171);
        real_const();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(185);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(183);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(174);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(175);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MULT_OP

          || _la == ExprParser::DIV_OP)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(176);
          expr(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(177);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(178);
          _la = _input->LA(1);
          if (!(_la == ExprParser::PLUS_OP

          || _la == ExprParser::MINUS_OP)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(179);
          expr(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(180);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(181);
          _la = _input->LA(1);
          if (!(((((_la - 65) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 65)) & ((1ULL << (ExprParser::EQUAL - 65))
            | (1ULL << (ExprParser::NE - 65))
            | (1ULL << (ExprParser::LTEQ - 65))
            | (1ULL << (ExprParser::GTEQ - 65))
            | (1ULL << (ExprParser::LT - 65))
            | (1ULL << (ExprParser::GT - 65)))) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(182);
          expr(7);
          break;
        }

        } 
      }
      setState(187);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 17: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "program", "compoundstatement", "assignstatement", "repeatstatement", 
  "whilestatement", "forstatement", "ifstatement", "casestatement", "caselist", 
  "statement", "variable", "integer_const", "real_const", "character_const", 
  "string_const", "write", "writeln", "expr"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "'+'", "'+='", "'-'", "'-='", "'*'", "'*='", "'/'", "'/='", "':='", 
  "'='", "'<>'", "'<='", "'>='", "'<'", "'>'", "'^'", "';'", "':'", "','", 
  "'('", "')'", "'['", "']'", "'{'", "'}'", "'(*'", "'*)'", "'.'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "AND", "ARRAY", "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", 
  "CONTINUE", "DESTRUCTOR", "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", 
  "FILE", "FOR", "FUNCTION", "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", 
  "INTERFACE", "LABEL", "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", 
  "OR", "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "SHL", 
  "SHR", "THEN", "TO", "TRUE", "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", 
  "WITH", "XOR", "WRITE", "WRITELN", "PLUS_OP", "PLUS_EQUAL", "MINUS_OP", 
  "MINUS_EQUAL", "MULT_OP", "MULT_EQUAL", "DIV_OP", "DIV_EQUAL", "ASSIGN", 
  "EQUAL", "NE", "LTEQ", "GTEQ", "LT", "GT", "CARAT", "SEMICOLON", "COLON", 
  "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", 
  "LCOMMENT", "RCOMMENT", "PERIOD", "IDENTIFIER", "INTEGER", "REAL", "CHARACTER", 
  "STRING", "NEWLINE", "WS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x5c, 0xbf, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x2f, 0xa, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0x30, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x6, 0x5, 0x3d, 
    0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x3e, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 
    0x8, 0x59, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x6, 0x9, 0x61, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x62, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x75, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x79, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7e, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0x8f, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 
    0x93, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x96, 0xb, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 
    0x9f, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xa2, 0xb, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xaf, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x7, 0x13, 0xba, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0xbd, 
    0xb, 0x13, 0x3, 0x13, 0x2, 0x3, 0x24, 0x14, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x2, 0x7, 0x4, 0x2, 0x4a, 0x4a, 0x55, 0x55, 0x4, 0x2, 0xf, 0xf, 
    0x2e, 0x2e, 0x4, 0x2, 0x3e, 0x3e, 0x40, 0x40, 0x4, 0x2, 0x3a, 0x3a, 
    0x3c, 0x3c, 0x3, 0x2, 0x43, 0x48, 0x2, 0xc6, 0x2, 0x26, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x35, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0xa, 0x44, 0x3, 0x2, 0x2, 0x2, 0xc, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x52, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5c, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x67, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7d, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x18, 0x81, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x85, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x87, 0x3, 0x2, 0x2, 0x2, 0x20, 0x89, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x24, 0xae, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 
    0x7, 0x27, 0x2, 0x2, 0x27, 0x28, 0x7, 0x56, 0x2, 0x2, 0x28, 0x29, 0x7, 
    0x4a, 0x2, 0x2, 0x29, 0x2a, 0x5, 0x14, 0xb, 0x2, 0x2a, 0x2b, 0x7, 0x2, 
    0x2, 0x3, 0x2b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2e, 0x7, 0x6, 0x2, 
    0x2, 0x2d, 0x2f, 0x5, 0x14, 0xb, 0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 
    0x7, 0x11, 0x2, 0x2, 0x33, 0x34, 0x9, 0x2, 0x2, 0x2, 0x34, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x36, 0x5, 0x16, 0xc, 0x2, 0x36, 0x37, 0x7, 0x42, 
    0x2, 0x2, 0x37, 0x38, 0x5, 0x24, 0x13, 0x2, 0x38, 0x39, 0x7, 0x4a, 0x2, 
    0x2, 0x39, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 0x7, 0x29, 0x2, 0x2, 
    0x3b, 0x3d, 0x5, 0x14, 0xb, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 
    0x32, 0x2, 0x2, 0x41, 0x42, 0x5, 0x24, 0x13, 0x2, 0x42, 0x43, 0x7, 0x4a, 
    0x2, 0x2, 0x43, 0x9, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x35, 0x2, 
    0x2, 0x45, 0x46, 0x5, 0x24, 0x13, 0x2, 0x46, 0x47, 0x7, 0xe, 0x2, 0x2, 
    0x47, 0x48, 0x5, 0x14, 0xb, 0x2, 0x48, 0xb, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4a, 0x7, 0x14, 0x2, 0x2, 0x4a, 0x4b, 0x5, 0x16, 0xc, 0x2, 0x4b, 0x4c, 
    0x7, 0x42, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x24, 0x13, 0x2, 0x4d, 0x4e, 0x9, 
    0x3, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x24, 0x13, 0x2, 0x4f, 0x50, 0x7, 0xe, 
    0x2, 0x2, 0x50, 0x51, 0x5, 0x14, 0xb, 0x2, 0x51, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x53, 0x7, 0x17, 0x2, 0x2, 0x53, 0x54, 0x5, 0x24, 0x13, 0x2, 
    0x54, 0x55, 0x7, 0x2d, 0x2, 0x2, 0x55, 0x58, 0x5, 0x14, 0xb, 0x2, 0x56, 
    0x57, 0x7, 0x10, 0x2, 0x2, 0x57, 0x59, 0x5, 0x14, 0xb, 0x2, 0x58, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0x4a, 0x2, 0x2, 0x5b, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x5d, 0x7, 0x8, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0x24, 0x13, 
    0x2, 0x5e, 0x60, 0x7, 0x21, 0x2, 0x2, 0x5f, 0x61, 0x5, 0x12, 0xa, 0x2, 
    0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x11, 0x2, 0x2, 0x65, 0x66, 0x7, 
    0x4a, 0x2, 0x2, 0x66, 0x11, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x5, 0x24, 
    0x13, 0x2, 0x68, 0x69, 0x7, 0x4b, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x14, 0xb, 
    0x2, 0x6a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x7e, 0x5, 0x4, 0x3, 0x2, 
    0x6c, 0x7e, 0x5, 0x6, 0x4, 0x2, 0x6d, 0x7e, 0x5, 0x8, 0x5, 0x2, 0x6e, 
    0x7e, 0x5, 0xa, 0x6, 0x2, 0x6f, 0x7e, 0x5, 0xc, 0x7, 0x2, 0x70, 0x7e, 
    0x5, 0xe, 0x8, 0x2, 0x71, 0x7e, 0x5, 0x10, 0x9, 0x2, 0x72, 0x74, 0x5, 
    0x20, 0x11, 0x2, 0x73, 0x75, 0x7, 0x4a, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x78, 0x5, 0x22, 0x12, 0x2, 0x77, 0x79, 0x7, 0x4a, 0x2, 0x2, 
    0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7e, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x24, 0x13, 0x2, 0x7b, 0x7c, 
    0x7, 0x4a, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x6b, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x7d, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x6f, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x72, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7d, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 
    0x7, 0x56, 0x2, 0x2, 0x80, 0x17, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 
    0x57, 0x2, 0x2, 0x82, 0x19, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x58, 
    0x2, 0x2, 0x84, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x59, 0x2, 
    0x2, 0x86, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x7, 0x5a, 0x2, 0x2, 
    0x88, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x38, 0x2, 0x2, 0x8a, 
    0x8e, 0x7, 0x4d, 0x2, 0x2, 0x8b, 0x8f, 0x5, 0x1c, 0xf, 0x2, 0x8c, 0x8f, 
    0x5, 0x1e, 0x10, 0x2, 0x8d, 0x8f, 0x5, 0x16, 0xc, 0x2, 0x8e, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x8f, 0x94, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x4c, 0x2, 
    0x2, 0x91, 0x93, 0x5, 0x24, 0x13, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x96, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x7, 0x4e, 0x2, 0x2, 0x98, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x39, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x4d, 
    0x2, 0x2, 0x9b, 0xa0, 0x5, 0x1e, 0x10, 0x2, 0x9c, 0x9d, 0x7, 0x4c, 0x2, 
    0x2, 0x9d, 0x9f, 0x5, 0x24, 0x13, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 
    0xa1, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x4e, 0x2, 0x2, 0xa4, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0xa5, 0xa6, 0x8, 0x13, 0x1, 0x2, 0xa6, 0xa7, 0x7, 0x4d, 
    0x2, 0x2, 0xa7, 0xa8, 0x5, 0x24, 0x13, 0x2, 0xa8, 0xa9, 0x7, 0x4e, 0x2, 
    0x2, 0xa9, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xaf, 0x5, 0x16, 0xc, 0x2, 
    0xab, 0xaf, 0x5, 0x18, 0xd, 0x2, 0xac, 0xaf, 0x5, 0x1c, 0xf, 0x2, 0xad, 
    0xaf, 0x5, 0x1a, 0xe, 0x2, 0xae, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0xc, 0xa, 0x2, 0x2, 0xb1, 0xb2, 0x9, 0x4, 0x2, 
    0x2, 0xb2, 0xba, 0x5, 0x24, 0x13, 0xb, 0xb3, 0xb4, 0xc, 0x9, 0x2, 0x2, 
    0xb4, 0xb5, 0x9, 0x5, 0x2, 0x2, 0xb5, 0xba, 0x5, 0x24, 0x13, 0xa, 0xb6, 
    0xb7, 0xc, 0x8, 0x2, 0x2, 0xb7, 0xb8, 0x9, 0x6, 0x2, 0x2, 0xb8, 0xba, 
    0x5, 0x24, 0x13, 0x9, 0xb9, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb3, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xbc, 0x25, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 
    0xf, 0x30, 0x3e, 0x58, 0x62, 0x74, 0x78, 0x7d, 0x8e, 0x94, 0xa0, 0xae, 
    0xb9, 0xbb, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
