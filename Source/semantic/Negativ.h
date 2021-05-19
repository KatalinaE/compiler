#pragma once

#include "Expression.h"

class Negativ: public Expression {
  private:
    Expression * _expr;
  public:
    Negativ(Expression * expr);
    virtual void Accept(Visitor* visitor);
};