#include "Less.h"

Less::Less(Expression * first,
    Expression * second
): first(first), second(second) {}

void Less::Accept(Visitor* visitor) {
    visitor->Visit(this);
}