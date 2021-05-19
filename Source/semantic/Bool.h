#pragma once

#include "Expression.h"

class Bool: public Expression {
  private:
    bool _value;
  public:
    Bool(bool value);
    virtual void Accept(Visitor* visitor);
};