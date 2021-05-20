#pragma once

#include "Expression.h"

class Or: public Expression {
  public:
    Expression * first, * second;
    Or(Expression * first, Expression * second);
<<<<<<< Updated upstream
=======
    virtual void Accept(Visitor* visitor) override;
>>>>>>> Stashed changes
};