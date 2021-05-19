#pragma once
#include <semantic/Base.h>

#include <semantic/forward_declarations.h>

class Visitor {
 public:
    #define CLASS(name) virtual void Visit(name*) = 0;
    #include <semantic/Classes.preprocessing>
    #undef CLASS
};
