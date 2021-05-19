#include "ExpressionStatment.h"

ExpressionStatment::ExpressionStatment(Expression * expr): _expr(expr) {}

void ExpressionStatment::Accept(Visitor* visitor) {
    visitor->Visit(this);
}