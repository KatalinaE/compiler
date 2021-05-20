#pragma once

#include <string>
#include "Expression.h"

class ThisField: public Expression {
  public:
    std::string _name;
    ThisField(std::string name);
};