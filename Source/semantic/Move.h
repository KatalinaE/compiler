#pragma once

#include "Expression.h"
#include "Statment.h"

class Move: public Statment {
  public:
    Expression * _dst, * _src;
    Move(Expression * dst, Expression * src);
};