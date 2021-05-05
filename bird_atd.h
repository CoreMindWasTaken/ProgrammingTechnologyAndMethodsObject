#pragma once

#include "animal_atd.h"

namespace Animals
{
class Bird: public Animal
{
public:
    Migration AttitudeFlight;

    bool InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    int Type();
    ~Bird();
};
}
