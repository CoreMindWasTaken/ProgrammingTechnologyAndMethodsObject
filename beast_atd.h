#pragma once

#include "animal_atd.h"

namespace Animals
{
class Beast: public Animal
{
public:
    Diet D;

    bool InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    int Type();
    ~Beast();
};
}
