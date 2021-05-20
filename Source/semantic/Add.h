#pragma once

#include "Expression.h"

class Add: public Expression {
  public:
    Expression * first, * second;
    Add(Expression * first, Expression * second);
};