#pragma once

#include "Expression.h"

class Bool: public Expression {
  public:
    bool _value;
    Bool(bool value);
    virtual void Accept(Visitor* visitor);
};