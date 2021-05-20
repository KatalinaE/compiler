#pragma once

#include "Expression.h"

class More: public Expression {
  public:
    Expression * first, * second;
    More(Expression * first, Expression * second);
    virtual void Accept(Visitor* visitor);
};