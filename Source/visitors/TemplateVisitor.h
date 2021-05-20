#pragma once

#include "Visitor.h"
#include "PrintVisitor.h"

template<typename T>
class TemplateVisitor : public Visitor {
 public:
   T Accept(Base * element) {
      element->Accept(this);
      //printf("<%p>", value_.get());
      //if (value_.get()) printf("'%s'", value_->toString().c_str());
      //std::cout << std::endl;
      //PrintVisitor pv(&std::cout);
      //printf("<%p>", element);
      //if (element) element->Accept(&pv);
      //std::cout << std::endl;
      //std::cout << std::endl;
      return value_;
   }
 protected:
    T value_ = T();
};