#pragma once

#include "Expression.h"
#include "Statment.h"

class If: public Statment {
  public:
    Expression * _cond;
    Statment * _then, * _ifelse;
    If(Expression * cond, Statment * then, Statment * ifelse = 0);
    virtual void Accept(Visitor* visitor);
};