#pragma once

#include <string>
#include "Type.h"

class ArrayType: public Type {
  public:
    std::string _name;
    ArrayType(std::string name);
    virtual std::string toString() override;
};