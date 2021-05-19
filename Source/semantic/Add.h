#pragma once

#include "Expression.h"

class Add: public Expression {
  private:
    Expression * first, * second;
  public:
    Add(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};