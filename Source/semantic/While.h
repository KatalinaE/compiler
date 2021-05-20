#pragma once

#include "Expression.h"
#include "Statment.h"

class While: public Statment {
  public:
    Expression * _cond;
    Statment * _then;
    While(Expression * cond, Statment * then);
};