#pragma once 

#include "Statment.h"
#include "Declaration.h"

class LocalVariable: public Statment {
  private:
    Declaration * _var;
  public:
    LocalVariable(Declaration * var); 
};