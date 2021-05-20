#include "InvocationOf.h"

InvocationOf::InvocationOf(
    Expression * expr,
    std::string name,
    Arguments * args
): _expr(expr), _name(name), _args(args) {}

void InvocationOf::Accept(Visitor* visitor) {
    visitor->Visit(this);
}