#pragma once

#include "../Collector.h"
#include "Statment.h"

class Statments: public Collector<Statment*>, public Statment {};