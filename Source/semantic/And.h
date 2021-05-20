#pragma once

#include "Expression.h"

class And: public Expression {
  public:
    Expression * first, * second;
    And(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};