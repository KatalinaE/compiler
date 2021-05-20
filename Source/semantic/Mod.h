#pragma once

#include "Expression.h"

class Mod: public Expression {
  public:
    Expression * first, * second;
    Mod(Expression * first, Expression * second);
};