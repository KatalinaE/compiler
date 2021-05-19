#pragma once

#include "Statment.h"
#include "Expression.h"

class Assert: public Statment {
  private:
    Expression * _expr;
  public:
    Assert(Expression * expr);
    virtual void Accept(Visitor* visitor);
};