#pragma once

#include <string>
#include "Type.h"

class SimpleType: public Type {
  private:
    std::string _name;
  public:
    SimpleType(std::string name);
};