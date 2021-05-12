#pragma once

#include <string>
#include "Declaration.h"
#include "Type.h"
#include "Formals.h"
#include "Statments.h"

class Method: public Declaration {
  private:
    std::string _name;
    Type * _type;
    Formals * _formals;
    Statments * _statments;
  public:
    Method(std::string name,
        Type * type,
        Formals * formals,
        Statments * statments
    );
};