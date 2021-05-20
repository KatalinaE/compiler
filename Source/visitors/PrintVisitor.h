#pragma once

#include "Visitor.h"

#include <fstream>
#include <iostream>
#include <string>

class PrintVisitor: public Visitor {
 public:
    PrintVisitor(const std::string& filename);
    PrintVisitor(std::ostream* file);
    ~PrintVisitor();

    #define CLASS(name) void Visit(name*) override;
    #include <semantic/Classes.preprocessing>
    #undef CLASS
 private:
    void PrintTabs();
    std::ostream * file_;
    std::ofstream stream_;
    int num_tabs_ = 0;
};