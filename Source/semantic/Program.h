#pragma once

#include "Classes.h"
#include "Base.h"

class Program: public Base {
  public:
    Program(Classes * classes, Class* main);
    virtual void Accept(Visitor* visitor);
    Classes * _classes;
    Class * _main;
};