#pragma once
#include "../visitors/Visitor.h"

class Base {
    public:
        virtual void Accept(Visitor *visitor) {};
        virtual ~Base() {}
};