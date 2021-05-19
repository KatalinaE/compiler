#include "Add.h"

Add::Add(Expression * first,
    Expression * second
): first(first), second(second) {}

void Add::Accept(Visitor* visitor) {
    visitor->Visit(this);
}