#pragma once
#include "Base.h"
#include <string>

class Declaration: public Base {
  public:
    virtual ~Declaration() {};
    virtual std::string toString() { return "Null"; };
};