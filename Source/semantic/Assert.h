#pragma once

#include "Statment.h"
#include "Expression.h"

class Assert: public Statment {
  public:
    Expression * _expr;
    Assert(Expression * expr);
};