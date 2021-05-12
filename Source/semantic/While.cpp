#include "While.h"

While::While(Expression * cond,
    Statment * then
): _cond(cond), _then(then) {}