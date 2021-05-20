#pragma once

#include <vector>
#include <memory>

class Object;

using Any = std::shared_ptr<Object>;

class Object {
    public:
        virtual int& GetInt();
        virtual bool& GetBool();
        virtual std::vector<Any>& GetArray();
        virtual std::string toString();
};
