#include "TemplateVisitor.h"

template<typename T>
T TemplateVisitor<T>::Accept(Base * element) {
    element->Accept(this);
    return value_;
}

template<>
int TemplateVisitor<int>::Accept(Base* element);