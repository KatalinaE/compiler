#pragma once

#include "Expression.h"

class IndexOf: public Expression {
  private:
    Expression * _obj, * _index;
  public:
    IndexOf(Expression * obj, Expression * index);
    virtual void Accept(Visitor* visitor);
};