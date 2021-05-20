#pragma once

#include "Expression.h"
#include "Statment.h"

class Return: public Statment {
  public:
    Expression * _expr;
    Return(Expression * expr);
};