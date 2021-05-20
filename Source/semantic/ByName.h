#pragma once

#include "Expression.h"
#include <string>

class ByName: public Expression {
  public:
    std::string _name;
    ByName(std::string name);
};