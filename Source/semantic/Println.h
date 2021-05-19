#pragma once

#include "Statment.h"
#include "Expression.h"

class Println: public Statment {
  private:
    Expression * _expr;
  public:
    Println(Expression * expr);
    virtual void Accept(Visitor* visitor);
};