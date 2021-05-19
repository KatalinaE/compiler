#pragma once

#include "Expression.h"

class LengthOf: public Expression {
  private:
    Expression * _expr;
  public:
    LengthOf(Expression * expr);
    virtual void Accept(Visitor* visitor);
};