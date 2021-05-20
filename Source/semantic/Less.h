#pragma once

#include "Expression.h"

class Less: public Expression {
  public:
    Expression * first, * second;
    Less(Expression * first, Expression * second);
};