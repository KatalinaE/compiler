#include "Sub.h"

Sub::Sub(Expression * first,
    Expression * second
): first(first), second(second) {}

void Sub::Accept(Visitor* visitor) {
    visitor->Visit(this);
}