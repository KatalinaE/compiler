#include "More.h"

More::More(Expression * first,
    Expression * second
): first(first), second(second) {}

void More::Accept(Visitor* visitor) {
    visitor->Visit(this);
}