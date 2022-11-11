
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
public:
  enum {
    AND = 1, ARRAY = 2, ASM = 3, BEGIN = 4, BREAK = 5, CASE = 6, CONST = 7, 
    CONSTRUCTOR = 8, CONTINUE = 9, DESTRUCTOR = 10, DIV = 11, DO = 12, DOWNTO = 13, 
    ELSE = 14, END = 15, FALSE = 16, FILE = 17, FOR = 18, FUNCTION = 19, 
    GOTO = 20, IF = 21, IMPLEMENTATION = 22, IN = 23, INLINE = 24, INTERFACE = 25, 
    LABEL = 26, MOD = 27, NIL = 28, NOT = 29, OBJECT = 30, OF = 31, ON = 32, 
    OPERATOR = 33, OR = 34, PACKED = 35, PROCEDURE = 36, PROGRAM = 37, RECORD = 38, 
    REPEAT = 39, SET = 40, SHL = 41, SHR = 42, THEN = 43, TO = 44, TRUE = 45, 
    TYPE = 46, UNIT = 47, UNTIL = 48, USES = 49, VAR = 50, WHILE = 51, WITH = 52, 
    XOR = 53, WRITE = 54, WRITELN = 55, PLUS_OP = 56, PLUS_EQUAL = 57, MINUS_OP = 58, 
    MINUS_EQUAL = 59, MULT_OP = 60, MULT_EQUAL = 61, DIV_OP = 62, DIV_EQUAL = 63, 
    ASSIGN = 64, EQUAL = 65, NE = 66, LTEQ = 67, GTEQ = 68, LT = 69, GT = 70, 
    CARAT = 71, SEMICOLON = 72, COLON = 73, COMMA = 74, LPAREN = 75, RPAREN = 76, 
    LBRACKET = 77, RBRACKET = 78, LBRACE = 79, RBRACE = 80, LCOMMENT = 81, 
    RCOMMENT = 82, PERIOD = 83, IDENTIFIER = 84, INTEGER = 85, REAL = 86, 
    CHARACTER = 87, STRING = 88, NEWLINE = 89, WS = 90
  };

  ExprLexer(antlr4::CharStream *input);
  ~ExprLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

