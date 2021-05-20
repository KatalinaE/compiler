#include "Println.h"

Println::Println(Expression * expr): _expr(expr) {}

void Println::Accept(Visitor* visitor) {
    visitor->Visit(this);
}