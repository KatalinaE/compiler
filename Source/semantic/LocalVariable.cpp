#include "LocalVariable.h"

LocalVariable::LocalVariable(Declaration * var): _var(var) {}

void LocalVariable::Accept(Visitor* visitor) {
    visitor->Visit(this);
}