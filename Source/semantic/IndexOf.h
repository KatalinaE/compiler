#pragma once

#include "Expression.h"

class IndexOf: public Expression {
  public:
    Expression * _obj, * _index;
    IndexOf(Expression * obj, Expression * index);
    virtual void Accept(Visitor* visitor);
};