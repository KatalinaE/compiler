#pragma once

#include "Classes.h"

class Program: public Base {
  public:
    Program(Classes * classes, Class* main);
  private:
    Classes * _classes;
    Class * _main;
};