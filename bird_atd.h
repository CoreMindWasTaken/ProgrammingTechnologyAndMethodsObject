#pragma once
#include "animal_atd.h"
namespace Animals {
class Bird: public Animal
{
    std::string Name;
    Migration AttitudeFlight;
public:
    void InData(ifstream & ifst);
    bool Out(ofstream & ofst);
};
}