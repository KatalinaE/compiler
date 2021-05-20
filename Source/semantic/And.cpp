#include "And.h"

And::And(Expression * first,
    Expression * second
): first(first), second(second) {}

void And::Accept(Visitor* visitor) {
    visitor->Visit(this);
}