#pragma once

#include "Statment.h"
#include "Expression.h"

class ExpressionStatment: public Statment {
  public:
    Expression * _expr;
    ExpressionStatment(Expression * expr);
    virtual void Accept(Visitor* visitor);
};