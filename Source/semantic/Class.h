#pragma once

#include <string>
#include "Declarations.h"
#include "Extends.h"

class Class: public Base {
  public:
    std::string _name;
    Extends * _extends;
    Declarations * _declarations;
    Class(std::string name,
        Extends * extends,
        Declarations * declarations
    );
	virtual void Accept(Visitor*) override;
};