#include "ThisField.h"


ThisField::ThisField(std::string name): _name(name) {}

void ThisField::Accept(Visitor* visitor) {
    visitor->Visit(this);
}