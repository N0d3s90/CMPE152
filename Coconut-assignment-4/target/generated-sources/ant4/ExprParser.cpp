
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

std::vector<ExprParser::StatementContext *> ExprParser::ProgramContext::statement() {
  return getRuleContexts<ExprParser::StatementContext>();
}

ExprParser::StatementContext* ExprParser::ProgramContext::statement(size_t i) {
  return getRuleContext<ExprParser::StatementContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      statement();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (((((_la - 99) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 99)) & ((1ULL << (ExprParser::LPAREN - 99))
      | (1ULL << (ExprParser::IDENTIFIER - 99))
      | (1ULL << (ExprParser::INTEGER - 99))
      | (1ULL << (ExprParser::NEWLINE - 99)))) != 0));
   
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

ExprParser::ExprContext* ExprParser::StatementContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

tree::TerminalNode* ExprParser::StatementContext::NEWLINE() {
  return getToken(ExprParser::NEWLINE, 0);
}

tree::TerminalNode* ExprParser::StatementContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
}

tree::TerminalNode* ExprParser::StatementContext::EQUAL() {
  return getToken(ExprParser::EQUAL, 0);
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
  enterRule(_localctx, 2, ExprParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(20);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(11);
      expr(0);
      setState(12);
      match(ExprParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(14);
      match(ExprParser::IDENTIFIER);
      setState(15);
      match(ExprParser::EQUAL);
      setState(16);
      expr(0);
      setState(17);
      match(ExprParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(19);
      match(ExprParser::NEWLINE);
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

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ExprParser::ExprContext::INTEGER() {
  return getToken(ExprParser::INTEGER, 0);
}

tree::TerminalNode* ExprParser::ExprContext::IDENTIFIER() {
  return getToken(ExprParser::IDENTIFIER, 0);
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
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, ExprParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::INTEGER: {
        setState(23);
        match(ExprParser::INTEGER);
        break;
      }

      case ExprParser::IDENTIFIER: {
        setState(24);
        match(ExprParser::IDENTIFIER);
        break;
      }

      case ExprParser::LPAREN: {
        setState(25);
        match(ExprParser::LPAREN);
        setState(26);
        expr(0);
        setState(27);
        match(ExprParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(39);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(37);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(31);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(32);
          _la = _input->LA(1);
          if (!(_la == ExprParser::MULT_OP

          || _la == ExprParser::DIV_OP)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(33);
          expr(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(34);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(35);
          _la = _input->LA(1);
          if (!(_la == ExprParser::PLUS_OP

          || _la == ExprParser::MINUS_OP)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(36);
          expr(5);
          break;
        }

        } 
      }
      setState(41);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
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
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

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
  "program", "statement", "expr"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "'+'", "'+='", "'-'", "'-='", "'*'", "'*='", 
  "'/'", "'/='", "':='", "'='", "'<>'", "'<='", "'>='", "'<'", "'>'", "'^'", 
  "';'", "':'", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", "'(*'", 
  "'*)'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", 
  "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "AND", "ARRAY", 
  "ASM", "BEGIN", "BREAK", "CASE", "CONST", "CONSTRUCTOR", "CONTINUE", "DESTRUCTOR", 
  "DIV", "DO", "DOWNTO", "ELSE", "END", "FALSE", "FILE", "FOR", "FUNCTION", 
  "GOTO", "IF", "IMPLEMENTATION", "IN", "INLINE", "INTERFACE", "LABEL", 
  "MOD", "NIL", "NOT", "OBJECT", "OF", "ON", "OPERATOR", "OR", "PACKED", 
  "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "SHL", "SHR", "THEN", 
  "TO", "TRUE", "TYPE", "UNIT", "UNTIL", "USES", "VAR", "WHILE", "WITH", 
  "XOR", "PLUS_OP", "PLUS_EQUAL", "MINUS_OP", "MINUS_EQUAL", "MULT_OP", 
  "MULT_EQUAL", "DIV_OP", "DIV_EQUAL", "ASSIGN", "EQUAL", "NE", "LTEQ", 
  "GTEQ", "LT", "GT", "CARAT", "SEMICOLON", "COLON", "COMMA", "LPAREN", 
  "RPAREN", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "LCOMMENT", "RCOMMENT", 
  "IDENTIFIER", "INTEGER", "REAL", "CHARACTER", "STRING", "NEWLINE", "WS"
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
    0x3, 0x73, 0x2d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x3, 0x2, 0x6, 0x2, 0xa, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0xb, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x17, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x20, 0xa, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x28, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2b, 0xb, 0x4, 0x3, 0x4, 0x2, 0x3, 0x6, 
    0x5, 0x2, 0x4, 0x6, 0x2, 0x4, 0x4, 0x2, 0x56, 0x56, 0x58, 0x58, 0x4, 
    0x2, 0x52, 0x52, 0x54, 0x54, 0x2, 0x30, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x16, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa, 
    0x5, 0x4, 0x3, 0x2, 0x9, 0x8, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xb, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb, 0xc, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x3, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x5, 0x6, 0x4, 0x2, 0xe, 0xf, 
    0x7, 0x72, 0x2, 0x2, 0xf, 0x17, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x7, 
    0x6d, 0x2, 0x2, 0x11, 0x12, 0x7, 0x5b, 0x2, 0x2, 0x12, 0x13, 0x5, 0x6, 
    0x4, 0x2, 0x13, 0x14, 0x7, 0x72, 0x2, 0x2, 0x14, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x15, 0x17, 0x7, 0x72, 0x2, 0x2, 0x16, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x10, 0x3, 0x2, 0x2, 0x2, 0x16, 0x15, 0x3, 0x2, 0x2, 0x2, 0x17, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x8, 0x4, 0x1, 0x2, 0x19, 0x20, 
    0x7, 0x6e, 0x2, 0x2, 0x1a, 0x20, 0x7, 0x6d, 0x2, 0x2, 0x1b, 0x1c, 0x7, 
    0x65, 0x2, 0x2, 0x1c, 0x1d, 0x5, 0x6, 0x4, 0x2, 0x1d, 0x1e, 0x7, 0x66, 
    0x2, 0x2, 0x1e, 0x20, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x18, 0x3, 0x2, 0x2, 
    0x2, 0x1f, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x29, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0xc, 0x7, 0x2, 0x2, 0x22, 
    0x23, 0x9, 0x2, 0x2, 0x2, 0x23, 0x28, 0x5, 0x6, 0x4, 0x8, 0x24, 0x25, 
    0xc, 0x6, 0x2, 0x2, 0x25, 0x26, 0x9, 0x3, 0x2, 0x2, 0x26, 0x28, 0x5, 
    0x6, 0x4, 0x7, 0x27, 0x21, 0x3, 0x2, 0x2, 0x2, 0x27, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x7, 0xb, 0x16, 0x1f, 0x27, 0x29, 
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
