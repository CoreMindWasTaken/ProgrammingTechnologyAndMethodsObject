#include "beast_atd.h"

namespace Animals
{
void Beast::Multimethod(Animal * OtherAnimal, ofstream & ofst)
{
    OtherAnimal->MBeast(ofst);
}

void Beast::MBird(ofstream & ofst)
{
    ofst << "Bird and beast." << endl;
}

void Beast::MFish(ofstream & ofst)
{
    ofst << "Fish and beast" << endl;
}

void Beast::MBeast(ofstream & ofst)
{
    ofst << "Beast and beast." << endl;
}
}
