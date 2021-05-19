#include "Assert.h"

Assert::Assert(Expression * expr): _expr(expr) {}

void Assert::Accept(Visitor* visitor) {
    visitor->Visit(this);
}