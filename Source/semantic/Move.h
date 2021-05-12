#pragma once

#include "Expression.h"
#include "Statment.h"

class Move: public Statment {
  private:
    Expression * _dst, * _src;
  public:
    Move(Expression * dst, Expression * src);
};