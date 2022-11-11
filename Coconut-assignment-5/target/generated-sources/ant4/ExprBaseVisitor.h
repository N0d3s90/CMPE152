
// Generated from Expr.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProgram(ExprParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundstatement(ExprParser::CompoundstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignstatement(ExprParser::AssignstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeatstatement(ExprParser::RepeatstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhilestatement(ExprParser::WhilestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitForstatement(ExprParser::ForstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfstatement(ExprParser::IfstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCasestatement(ExprParser::CasestatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCaselist(ExprParser::CaselistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(ExprParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(ExprParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInteger_const(ExprParser::Integer_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReal_const(ExprParser::Real_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharacter_const(ExprParser::Character_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString_const(ExprParser::String_constContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWrite(ExprParser::WriteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWriteln(ExprParser::WritelnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(ExprParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

