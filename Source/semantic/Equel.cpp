#include "Equel.h"

Equel::Equel(Expression * first,
    Expression * second
): first(first), second(second) {}

void Equel::Accept(Visitor* visitor) {
    visitor->Visit(this);
}