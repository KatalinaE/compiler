#pragma once

#include "Expression.h"

class Negativ: public Expression {
  public:
    Expression * _expr;
    Negativ(Expression * expr);
};