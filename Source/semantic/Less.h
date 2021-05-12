#pragma once

#include "Expression.h"

class Less: public Expression {
  private:
    Expression * first, * second;
  public:
    Less(Expression * first, Expression * second);
};