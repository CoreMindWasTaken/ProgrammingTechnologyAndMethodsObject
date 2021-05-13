#pragma once
#include "animal_atd.h"
namespace Animals {
class Fish: public Animal
{
    std::string Name;
    Habitat Place;
public:
    void InData(ifstream & ifst);
    bool Out(ofstream & ofst);
    void Multimethod(Animal * OtherAnimal, ofstream & ofst);
    void MFish(ofstream & ofst);
    void MBird(ofstream & ofst);
};
}
