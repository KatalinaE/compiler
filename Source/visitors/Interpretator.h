#pragma once

#include "TemplateVisitor.h"
#include <semantic/Expression.h>

#include <Objects/Object.h>

#include <string>
#include <map>

class Interpretator: public TemplateVisitor<Any> {
 public:
    Interpretator();
    ~Interpretator();

    #define CLASS(name) void Visit(name*) override;
    #include <semantic/Classes.preprocessing>
    #undef CLASS

    std::map<std::string, Any> variables;
};