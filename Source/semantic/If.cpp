#include "If.h"

If::If(Expression * cond,
    Statment * then,
    Statment * ifelse
): _cond(cond), _then(then), _ifelse(ifelse) {}