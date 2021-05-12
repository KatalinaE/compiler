#pragma once

#include "Expression.h"
#include "Type.h"

class Alloc: public Expression {
  private:
    Type * _type;
    Expression * _size;
  public:
    Alloc(Type * type, Expression * size = 0);
};