#pragma once

#include <semantic/forward_declarations.h>

class Visitor;

#include <semantic/Base.h>

class Visitor {
 public:
    #define CLASS(name) virtual void Visit(name*) = 0;
    #include <semantic/Classes.preprocessing>
    #undef CLASS
};
