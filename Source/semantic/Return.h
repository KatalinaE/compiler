#pragma once

#include "Expression.h"
#include "Statment.h"

class Return: public Statment {
  private:
    Expression * _expr;
  public:
    Return(Expression * expr);
};