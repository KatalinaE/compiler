#pragma once

#include "Expression.h"

class Sub: public Expression {
  public:
    Expression * first, * second;
    Sub(Expression * first, Expression * second);
};