#pragma once

#include "Expression.h"
#include "Statment.h"

class If: public Statment {
  private:
    Expression * _cond;
    Statment * _then, * _ifelse;
  public:
    If(Expression * cond, Statment * then, Statment * ifelse = 0);
};