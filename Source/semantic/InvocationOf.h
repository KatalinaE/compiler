#pragma once

#include "Expression.h"
#include <string>
#include "Arguments.h"

class InvocationOf: public Expression {
  public:
    Expression * _expr;
    std::string _name;
    Arguments * _args;
    InvocationOf(
        Expression * expr,
        std::string name,
        Arguments * args
    );
};