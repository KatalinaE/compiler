#pragma once

#include "../Collector.h"
#include "Statment.h"

class Statments: public Statment, public Collector<Statment*> {
    public:
        void Accept(Visitor* visitor) override;
};