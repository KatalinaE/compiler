#include "Return.h"

Return::Return(Expression * expr): _expr(expr) {}

void Return::Accept(Visitor* visitor) {
    visitor->Visit(this);
}