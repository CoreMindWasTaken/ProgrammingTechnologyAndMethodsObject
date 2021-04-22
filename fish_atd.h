#pragma once
#include "animal_atd.h"
namespace Animals {
class Fish: public Animal
{
    std::string Name;
    Habitat Place;
    int Age;
public:
    void InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    int LengthName();
};
}
