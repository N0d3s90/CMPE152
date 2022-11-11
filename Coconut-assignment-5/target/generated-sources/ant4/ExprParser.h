
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  ExprParser : public antlr4::Parser {
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

  enum {
    RuleProgram = 0, RuleCompoundstatement = 1, RuleAssignstatement = 2, 
    RuleRepeatstatement = 3, RuleWhilestatement = 4, RuleForstatement = 5, 
    RuleIfstatement = 6, RuleCasestatement = 7, RuleCaselist = 8, RuleStatement = 9, 
    RuleVariable = 10, RuleInteger_const = 11, RuleReal_const = 12, RuleCharacter_const = 13, 
    RuleString_const = 14, RuleWrite = 15, RuleWriteln = 16, RuleExpr = 17
  };

  ExprParser(antlr4::TokenStream *input);
  ~ExprParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class CompoundstatementContext;
  class AssignstatementContext;
  class RepeatstatementContext;
  class WhilestatementContext;
  class ForstatementContext;
  class IfstatementContext;
  class CasestatementContext;
  class CaselistContext;
  class StatementContext;
  class VariableContext;
  class Integer_constContext;
  class Real_constContext;
  class Character_constContext;
  class String_constContext;
  class WriteContext;
  class WritelnContext;
  class ExprContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PROGRAM();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *SEMICOLON();
    StatementContext *statement();
    antlr4::tree::TerminalNode *EOF();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  CompoundstatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *PERIOD();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundstatementContext* compoundstatement();

  class  AssignstatementContext : public antlr4::ParserRuleContext {
  public:
    AssignstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignstatementContext* assignstatement();

  class  RepeatstatementContext : public antlr4::ParserRuleContext {
  public:
    RepeatstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RepeatstatementContext* repeatstatement();

  class  WhilestatementContext : public antlr4::ParserRuleContext {
  public:
    WhilestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhilestatementContext* whilestatement();

  class  ForstatementContext : public antlr4::ParserRuleContext {
  public:
    ForstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    VariableContext *variable();
    antlr4::tree::TerminalNode *ASSIGN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *DOWNTO();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForstatementContext* forstatement();

  class  IfstatementContext : public antlr4::ParserRuleContext {
  public:
    IfstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *SEMICOLON();
    antlr4::tree::TerminalNode *ELSE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstatementContext* ifstatement();

  class  CasestatementContext : public antlr4::ParserRuleContext {
  public:
    CasestatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    ExprContext *expr();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *SEMICOLON();
    std::vector<CaselistContext *> caselist();
    CaselistContext* caselist(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CasestatementContext* casestatement();

  class  CaselistContext : public antlr4::ParserRuleContext {
  public:
    CaselistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaselistContext* caselist();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompoundstatementContext *compoundstatement();
    AssignstatementContext *assignstatement();
    RepeatstatementContext *repeatstatement();
    WhilestatementContext *whilestatement();
    ForstatementContext *forstatement();
    IfstatementContext *ifstatement();
    CasestatementContext *casestatement();
    WriteContext *write();
    antlr4::tree::TerminalNode *SEMICOLON();
    WritelnContext *writeln();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  Integer_constContext : public antlr4::ParserRuleContext {
  public:
    Integer_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Integer_constContext* integer_const();

  class  Real_constContext : public antlr4::ParserRuleContext {
  public:
    Real_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REAL();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Real_constContext* real_const();

  class  Character_constContext : public antlr4::ParserRuleContext {
  public:
    Character_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARACTER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Character_constContext* character_const();

  class  String_constContext : public antlr4::ParserRuleContext {
  public:
    String_constContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_constContext* string_const();

  class  WriteContext : public antlr4::ParserRuleContext {
  public:
    WriteContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    Character_constContext *character_const();
    String_constContext *string_const();
    VariableContext *variable();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WriteContext* write();

  class  WritelnContext : public antlr4::ParserRuleContext {
  public:
    WritelnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WRITELN();
    antlr4::tree::TerminalNode *LPAREN();
    String_constContext *string_const();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WritelnContext* writeln();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    VariableContext *variable();
    Integer_constContext *integer_const();
    Character_constContext *character_const();
    Real_constContext *real_const();
    antlr4::tree::TerminalNode *MULT_OP();
    antlr4::tree::TerminalNode *DIV_OP();
    antlr4::tree::TerminalNode *PLUS_OP();
    antlr4::tree::TerminalNode *MINUS_OP();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NE();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GTEQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);

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

