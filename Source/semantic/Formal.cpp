#include "Formal.h"

Formal::Formal(Type * type, std::string name): _type(type), _name(name) {}

std::string Formal::toString() {
    return _type->toString() + " " + _name;
}