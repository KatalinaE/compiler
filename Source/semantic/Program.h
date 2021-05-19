#pragma once

#include "Classes.h"
#include "Base.h"

class Program {
  public:
    Program(Classes * classes, Class* main);
    virtual void Accept(Visitor* visitor);
    Classes * _classes;
    Class * _main;
};