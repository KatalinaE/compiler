#pragma once

#include "Expression.h"

class Mull: public Expression {
  public:
    Expression * first, * second;
    Mull(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};