#include "Statments.h"

void Statments::Accept(Visitor* visitor) {
    visitor->Visit(this);
}
