#include "ArrayType.h"

ArrayType::ArrayType(std::string name): _name(name) {}

std::string ArrayType::toString() { return _name + "[]"; }