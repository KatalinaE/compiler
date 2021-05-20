#include "Negativ.h"

Negativ::Negativ(Expression * expr): _expr(expr) {}

void Negativ::Accept(Visitor* visitor) {
    visitor->Visit(this);
}