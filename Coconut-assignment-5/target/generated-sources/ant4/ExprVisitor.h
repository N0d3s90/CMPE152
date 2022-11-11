
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProgram(ExprParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitCompoundstatement(ExprParser::CompoundstatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignstatement(ExprParser::AssignstatementContext *context) = 0;

    virtual antlrcpp::Any visitRepeatstatement(ExprParser::RepeatstatementContext *context) = 0;

    virtual antlrcpp::Any visitWhilestatement(ExprParser::WhilestatementContext *context) = 0;

    virtual antlrcpp::Any visitForstatement(ExprParser::ForstatementContext *context) = 0;

    virtual antlrcpp::Any visitIfstatement(ExprParser::IfstatementContext *context) = 0;

    virtual antlrcpp::Any visitCasestatement(ExprParser::CasestatementContext *context) = 0;

    virtual antlrcpp::Any visitCaselist(ExprParser::CaselistContext *context) = 0;

    virtual antlrcpp::Any visitStatement(ExprParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitVariable(ExprParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitInteger_const(ExprParser::Integer_constContext *context) = 0;

    virtual antlrcpp::Any visitReal_const(ExprParser::Real_constContext *context) = 0;

    virtual antlrcpp::Any visitCharacter_const(ExprParser::Character_constContext *context) = 0;

    virtual antlrcpp::Any visitString_const(ExprParser::String_constContext *context) = 0;

    virtual antlrcpp::Any visitWrite(ExprParser::WriteContext *context) = 0;

    virtual antlrcpp::Any visitWriteln(ExprParser::WritelnContext *context) = 0;

    virtual antlrcpp::Any visitExpr(ExprParser::ExprContext *context) = 0;


};

