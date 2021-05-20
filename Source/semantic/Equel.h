#pragma once

#include "Expression.h"

class Equel: public Expression {
  public:
    Expression * first, * second;
    Equel(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};