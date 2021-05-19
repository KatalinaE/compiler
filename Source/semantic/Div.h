#pragma once

#include "Expression.h"

class Div: public Expression {
  private:
    Expression * first, * second;
  public:
    Div(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};