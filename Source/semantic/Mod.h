#pragma once

#include "Expression.h"

class Mod: public Expression {
  private:
    Expression * first, * second;
  public:
    Mod(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};