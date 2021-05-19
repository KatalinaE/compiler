#pragma once

#include "Expression.h"

class Mull: public Expression {
  private:
    Expression * first, * second;
  public:
    Mull(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};