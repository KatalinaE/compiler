#pragma once

#include <string>
#include "Declarations.h"
#include "Extends.h"

class Class {
  private:
    std::string _name;
    Extends * _extends;
    Declarations * _declarations;
  public:
    Class(std::string name,
        Extends * extends,
        Declarations * declarations
    );
};