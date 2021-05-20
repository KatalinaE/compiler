#include "Extends.h"

Extends::Extends(std::string name): _name(name) {}

std::string Extends::toString() {
    if (_name == "")
        return "";
    return std::string("extends ") + _name;
}