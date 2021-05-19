#pragma once 

#include "Statment.h"
#include "Declaration.h"
#include <string>

class LocalVariable: public Statment {
  private:
    Declaration * _var;
  public:
    LocalVariable(Declaration * var); 
    virtual void Accept(Visitor* visitor);
};