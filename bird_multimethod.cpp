#include "bird_atd.h"

namespace Animals
{
void Bird::Multimethod(Animal * OtherAnimal, ofstream & ofst)
{
    OtherAnimal->MBird(ofst);
}

void Bird::MBird(ofstream & ofst)
{
    ofst << "Bird and bird." << endl;
}

void Bird::MFish(ofstream & ofst)
{
    ofst << "Fish and bird" << endl;
}
}
