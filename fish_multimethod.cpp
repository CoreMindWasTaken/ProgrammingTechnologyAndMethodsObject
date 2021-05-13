#include "fish_atd.h"

namespace Animals
{
void Fish::Multimethod(Animal * OtherAnimal, ofstream & ofst)
{
    OtherAnimal->MFish(ofst);
}

void Fish::MBird(ofstream & ofst)
{
    ofst << "Bird and fish." << endl;
}

void Fish::MFish(ofstream & ofst)
{
    ofst << "Fish and fish" << endl;
}
}

