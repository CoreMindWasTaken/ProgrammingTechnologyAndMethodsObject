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
    void Multimethod(Animal * OtherAnimal, ofstream & ofst);
    void MFish(ofstream & ofst);
    void MBird(ofstream & ofst);
    void MBeast(ofstream & ofst);
    ~Bird();
};
}
