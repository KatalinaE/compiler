#include "Move.h"

Move::Move(Expression * dst, Expression * src): _dst(dst), _src(src) {}

void Move::Accept(Visitor* visitor) {
    visitor->Visit(this);
}