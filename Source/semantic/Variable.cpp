#include "Variable.h"

<<<<<<< Updated upstream
Variable::Variable(Type * type, std::string name): _type(type), _name(name) {}
=======
Variable::Variable(Type * type, std::string name): _type(type), _name(name) {}

std::string Variable::toString() { return _type->toString() + " " + _name; }

void Variable::Accept(Visitor* visitor) {
    visitor->Visit(this);
};
>>>>>>> Stashed changes
