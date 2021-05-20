#include "Number.h"

Number::Number(int value): _value(value) {}

void Number::Accept(Visitor* visitor) {
    visitor->Visit(this);
}