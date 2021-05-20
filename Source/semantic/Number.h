#pragma once

#include "Expression.h"

class Number: public Expression {
  public:
    int _value;
    Number(int value);
    virtual void Accept(Visitor* visitor) override;
};