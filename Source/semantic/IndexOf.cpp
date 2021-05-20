#include "IndexOf.h"

IndexOf::IndexOf(Expression * obj, Expression * index): _obj(obj), _index(index) {}

void IndexOf::Accept(Visitor* visitor) {
    visitor->Visit(this);
}