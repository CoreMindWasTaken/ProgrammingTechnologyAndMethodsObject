#pragma once

#include "animal_atd.h"

namespace Animals
{
class Beast: public Animal
{
    Diet D;
public:
    bool InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    ~Beast();
};
}
