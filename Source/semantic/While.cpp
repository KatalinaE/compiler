#include "While.h"

While::While(Expression * cond,
    Statment * then
): _cond(cond), _then(then) {}

void While::Accept(Visitor* visitor) {
    visitor->Visit(this);
}