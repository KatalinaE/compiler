#pragma once

#include <string>
#include "Type.h"

class ArrayType: public Type {
  private:
    std::string _name;
  public:
    ArrayType(std::string name);
};