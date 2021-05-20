#include "Array.h"
#include "Int.h"
#include "Bool.h"

ObjectArray::ObjectArray(std::string type, int size): type_(type), size_(size) {
    vector_.resize(size);
    if (size != 0) {
        if (type == "int")
            for (auto& e: vector_)
                e = std::make_shared<ObjectInt>(0);  
        else if (type == "boolean")
            for (auto& e: vector_)
                e = std::make_shared<ObjectBool>(false); 
        else 
            throw (std::string("Array allocate error: unknown type '") + type + "'");
    }
}

std::vector<Any>& ObjectArray::GetArray() {
    return vector_;
}

std::string ObjectArray::toString() {
    std::string buffer = "[";
    if (vector_.size()) {
        buffer += vector_[0]->toString();
        for (size_t i = 1; i < vector_.size(); ++i)
            buffer += std::string(", ") + vector_[i]->toString();
    }
    buffer += "]";
    return buffer;
}