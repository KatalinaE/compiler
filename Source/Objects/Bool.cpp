#include "Bool.h"

ObjectBool::ObjectBool(bool value): value_(value) {}

int& ObjectBool::GetInt() {
    static int tmp = value_;
    return tmp;
}
bool& ObjectBool::GetBool() {
    return value_;
}
std::string ObjectBool::toString() {
    return (value_) ? "true" : "false";
}