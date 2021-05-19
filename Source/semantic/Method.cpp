#include "Method.h"

Method::Method(std::string name,
        Type * type,
        Formals * formals,
        Statments * statments
    ): _name(name), _type(type), _formals(formals), _statments(statments) {}