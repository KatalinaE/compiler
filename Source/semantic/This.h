#pragma once

#include "Expression.h"

class This: public Expression {
    public:
        virtual void Accept(Visitor* visitor) override;
};