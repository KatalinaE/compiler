#pragma once

#include "Expression.h"

class Not: public Expression {
  private:
    Expression * _expr;
  public:
    Not(Expression * expr);
    virtual void Accept(Visitor* visitor);
};