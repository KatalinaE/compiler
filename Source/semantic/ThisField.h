#pragma once

#include <string>
#include "Expression.h"

class ThisField: public Expression {
  private:
    std::string _name;
  public:
    ThisField(std::string name);
    virtual void Accept(Visitor* visitor);
};