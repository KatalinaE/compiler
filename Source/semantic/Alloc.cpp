#include "Alloc.h"

Alloc::Alloc(Type * type, Expression * size): _type(type), _size(size) {}

void Alloc::Accept(Visitor* visitor) {
    visitor->Visit(this);
}