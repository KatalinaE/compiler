#pragma once

#include "Statment.h"
#include "Expression.h"

class Println: public Statment {
  public:
    Expression * _expr;
    Println(Expression * expr);
};