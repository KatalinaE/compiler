#include "Not.h"

Not::Not(Expression * expr): _expr(expr) {}

void Not::Accept(Visitor* visitor) {
    visitor->Visit(this);
}