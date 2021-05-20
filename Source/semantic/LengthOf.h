#pragma once

#include "Expression.h"

class LengthOf: public Expression {
  public:
    Expression * _expr;
    LengthOf(Expression * expr);
    virtual void Accept(Visitor* visitor);
};