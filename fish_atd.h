#pragma once
#include "animal_atd.h"
namespace Animals {
class Fish: public Animal
{
    Habitat Place;
public:
    void InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    void OutFish(ofstream & ofst);
};
}
