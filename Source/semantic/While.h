#pragma once

#include "Expression.h"
#include "Statment.h"

class While: public Statment {
  private:
    Expression * _cond;
    Statment * _then;
  public:
    While(Expression * cond, Statment * then);
    virtual void Accept(Visitor* visitor);
};