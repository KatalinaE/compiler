#include "Class.h"

Class::Class(std::string name,
        Extends * extends,
        Declarations * declarations
    ): _name(name), _extends(extends), _declarations(declarations) {}
  
void Class::Accept(Visitor* visitor) {
    visitor->Visit(this);
};