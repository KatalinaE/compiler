#pragma once

#include "Expression.h"

class And: public Expression {
  private:
    Expression * first, * second;
  public:
    And(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};