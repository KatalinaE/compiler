#pragma once

#include "Declaration.h"
#include <string>
#include "Type.h"

class Variable: public Declaration {
  public:
    Type * _type;
    std::string _name;
    Variable(Type * type, std::string name);
    std::string toString();
};