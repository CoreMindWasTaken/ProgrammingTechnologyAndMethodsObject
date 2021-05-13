#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
namespace Animals
{
enum Habitat { RIVER, SEA, LAKE };
enum Migration { MIGRATORY, NONMIGRATORY };
class Animal {
public:
    static Animal * In(ifstream & ifst);
    virtual void InData(ifstream & ifst) = 0;
    virtual bool Out(ofstream & ofst) = 0;
    virtual void Multimethod(Animal * OtherAnimal, ofstream & ofst) = 0;
    virtual void MFish(ofstream & ofst) = 0;
    virtual void MBird(ofstream & ofst) = 0;
};
}
