#pragma once

#include "Object.h"

class ObjectArray: public Object {
    public:
        ObjectArray(std::string type, int size);
        std::string type_;
        int size_;
        std::vector<Any> vector_;
        std::vector<Any>& GetArray() override;
        virtual std::string toString();
};