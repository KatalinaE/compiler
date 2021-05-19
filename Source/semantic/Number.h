#pragma once

#include "Expression.h"

class Number: public Expression {
  private:
    int _value;
  public:
    Number(int value);
    virtual void Accept(Visitor* visitor);
};