#pragma once

#include "Expression.h"

class Not: public Expression {
  public:
    Expression * _expr;
    Not(Expression * expr);
};