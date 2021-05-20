#include "ByName.h"

ByName::ByName(std::string name): _name(name) {}

void ByName::Accept(Visitor* visitor) {
    visitor->Visit(this);
}