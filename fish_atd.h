#pragma once

#include "animal_atd.h"

namespace Animals
{
class Fish: public Animal
{
public:
    Habitat Place;

    bool InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    void OutFish(ofstream & ofst);
    int Type();
    ~Fish();
};
}
