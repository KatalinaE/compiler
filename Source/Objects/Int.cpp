#include "Int.h"

ObjectInt::ObjectInt(int value): value_(value) {}

int& ObjectInt::GetInt() {
    return value_;
}
std::string ObjectInt::toString() {
    return std::to_string(value_);
}