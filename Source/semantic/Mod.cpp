#include "Mod.h"

Mod::Mod(Expression * first,
    Expression * second
): first(first), second(second) {}

void Mod::Accept(Visitor* visitor) {
    visitor->Visit(this);
}