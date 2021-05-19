#include "Bool.h"

Bool::Bool(bool value): _value(value) {}

void Bool::Accept(Visitor* visitor) {
    visitor->Visit(this);
}