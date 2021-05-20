#include "Object.h"

int& Object::GetInt() {
    throw std::string("Cast error: can't convert '") + toString() + "' to 'int'";
}
bool& Object::GetBool() {
    throw std::string("Cast error: can't convert '") + toString() + "' to 'boolean'";
}
std::vector<Any>& Object::GetArray() {
    throw std::string("Cast error: can't convert '") + toString() + "' to 'Array'";
}
std::string Object::toString() {
    return "Null";
}