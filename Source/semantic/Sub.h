#pragma once

#include "Expression.h"

class Sub: public Expression {
  private:
    Expression * first, * second;
  public:
    Sub(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};