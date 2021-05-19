#pragma once

#include "Expression.h"

class Or: public Expression {
  private:
    Expression * first, * second;
  public:
    Or(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};