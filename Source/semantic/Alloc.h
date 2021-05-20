#pragma once

#include "Expression.h"
#include "Type.h"

class Alloc: public Expression {
  public:
    Type * _type;
    Expression * _size;
    Alloc(Type * type, Expression * size = 0);
};