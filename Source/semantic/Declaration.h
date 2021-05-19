#pragma once
#include <string>

class Declaration {
  public:
    virtual ~Declaration() {};
    virtual std::string toString() { return "Null"; };
};