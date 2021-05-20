#include "SimpleType.h"

SimpleType::SimpleType(std::string name): _name(name) {}

std::string SimpleType::toString() { return _name; }