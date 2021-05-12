#pragma once

#include "Expression.h"

class More: public Expression {
  private:
    Expression * first, * second;
  public:
    More(Expression * first, Expression * second);
};