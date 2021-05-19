#pragma once

#include "Statment.h"
#include "Expression.h"

class ExpressionStatment: public Statment {
  private:
    Expression * _expr;
  public:
    ExpressionStatment(Expression * expr);
    virtual void Accept(Visitor* visitor);
};