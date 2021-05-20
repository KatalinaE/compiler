#include "Program.h"

Program::Program(
    Classes * classes,
    Class* main
): _classes(classes), _main(main) {}

void Program::Accept(Visitor* visitor) {
    visitor->Visit(this);
}