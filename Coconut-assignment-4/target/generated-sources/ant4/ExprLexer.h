
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprLexer : public antlr4::Lexer {
public:
  enum {
    A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9, J = 10, 
    K = 11, L = 12, M = 13, N = 14, O = 15, P = 16, Q = 17, R = 18, S = 19, 
    T = 20, U = 21, V = 22, W = 23, X = 24, Y = 25, Z = 26, AND = 27, ARRAY = 28, 
    ASM = 29, BEGIN = 30, BREAK = 31, CASE = 32, CONST = 33, CONSTRUCTOR = 34, 
    CONTINUE = 35, DESTRUCTOR = 36, DIV = 37, DO = 38, DOWNTO = 39, ELSE = 40, 
    END = 41, FALSE = 42, FILE = 43, FOR = 44, FUNCTION = 45, GOTO = 46, 
    IF = 47, IMPLEMENTATION = 48, IN = 49, INLINE = 50, INTERFACE = 51, 
    LABEL = 52, MOD = 53, NIL = 54, NOT = 55, OBJECT = 56, OF = 57, ON = 58, 
    OPERATOR = 59, OR = 60, PACKED = 61, PROCEDURE = 62, PROGRAM = 63, RECORD = 64, 
    REPEAT = 65, SET = 66, SHL = 67, SHR = 68, THEN = 69, TO = 70, TRUE = 71, 
    TYPE = 72, UNIT = 73, UNTIL = 74, USES = 75, VAR = 76, WHILE = 77, WITH = 78, 
    XOR = 79, PLUS_OP = 80, PLUS_EQUAL = 81, MINUS_OP = 82, MINUS_EQUAL = 83, 
    MULT_OP = 84, MULT_EQUAL = 85, DIV_OP = 86, DIV_EQUAL = 87, ASSIGN = 88, 
    EQUAL = 89, NE = 90, LTEQ = 91, GTEQ = 92, LT = 93, GT = 94, CARAT = 95, 
    SEMICOLON = 96, COLON = 97, COMMA = 98, LPAREN = 99, RPAREN = 100, LBRACKET = 101, 
    RBRACKET = 102, LBRACE = 103, RBRACE = 104, LCOMMENT = 105, RCOMMENT = 106, 
    IDENTIFIER = 107, INTEGER = 108, REAL = 109, CHARACTER = 110, STRING = 111, 
    NEWLINE = 112, WS = 113
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

