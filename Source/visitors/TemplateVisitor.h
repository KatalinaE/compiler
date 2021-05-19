#pragma once

#include "Visitor.h"

template<typename T>
class TemplateVisitor : public Visitor {
 public:
    T Accept(Base* element);
 protected:
    T value_;
};