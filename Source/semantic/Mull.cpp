#include "Mull.h"

Mull::Mull(Expression * first,
    Expression * second
): first(first), second(second) {}

void Mull::Accept(Visitor* visitor) {
    visitor->Visit(this);
}