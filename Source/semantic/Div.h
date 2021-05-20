#pragma once

#include "Expression.h"

class Div: public Expression {
  public:
    Expression * first, * second;
    Div(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};