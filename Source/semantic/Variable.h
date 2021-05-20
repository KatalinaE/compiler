#pragma once

#include "Declaration.h"
#include <string>
#include "Type.h"

class Variable: public Declaration {
  private:
    Type * _type;
    std::string _name;
  public:
    Variable(Type * type, std::string name);
<<<<<<< Updated upstream
=======
    std::string toString();
    virtual void Accept(Visitor* visitor) override;
>>>>>>> Stashed changes
};