#include "Div.h"

Div::Div(Expression * first,
    Expression * second
): first(first), second(second) {}

void Div::Accept(Visitor* visitor) {
    visitor->Visit(this);
}