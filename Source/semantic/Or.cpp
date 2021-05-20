#include "Or.h"

Or::Or(Expression * first,
    Expression * second
): first(first), second(second) {}

void Or::Accept(Visitor* visitor) {
    visitor->Visit(this);
}