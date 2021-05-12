#pragma once

#include "Expression.h"

class Equel: public Expression {
  private:
    Expression * first, * second;
  public:
    Equel(Expression * first, Expression * second);
};