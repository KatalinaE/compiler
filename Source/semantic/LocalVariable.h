#pragma once 

#include "Statment.h"
#include "Declaration.h"

class LocalVariable: public Statment {
  public:
    Declaration * _var;
    LocalVariable(Declaration * var); 
};