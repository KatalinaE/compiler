#pragma once

#include <string>
#include "Type.h"

class Formal {
  private:
    Type * _type;
    std::string _name;
  public:
    Formal(Type * type, std::string name);
};