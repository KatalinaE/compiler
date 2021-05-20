#pragma once

#include "Expression.h"

class Or: public Expression {
  public:
    Expression * first, * second;
    Or(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor) override;
};