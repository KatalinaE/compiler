#pragma once 

#include "Statment.h"
#include "Declaration.h"
#include <string>

class LocalVariable: public Statment {
  public:
    Declaration * _var;
    LocalVariable(Declaration * var); 
    virtual void Accept(Visitor* visitor);
};