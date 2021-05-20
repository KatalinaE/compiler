#include "LengthOf.h"

LengthOf::LengthOf(Expression * expr): _expr(expr) {}

void LengthOf::Accept(Visitor* visitor) {
    visitor->Visit(this);
}