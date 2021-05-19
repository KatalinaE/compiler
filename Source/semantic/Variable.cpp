#include "Variable.h"

Variable::Variable(Type * type, std::string name): _type(type), _name(name) {}

std::string Variable::toString() { return _type->toString() + " " + _name; }