#pragma once

#include "Expression.h"
#include <string>

class ByName: public Expression {
  private:
    std::string _name;
  public:
    ByName(std::string name);
};