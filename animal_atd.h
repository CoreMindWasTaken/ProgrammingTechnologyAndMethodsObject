#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
namespace Animals
{
enum Habitat { RIVER, SEA, LAKE };
enum Migration { MIGRATORY, NONMIGRATORY };
enum  Diet { PREDATOR, HERBIVORE, INSECTIVOROUS };
class Animal {
public:
    static Animal * In(ifstream & ifst);
    virtual void InData(ifstream & ifst) = 0;
    virtual bool Out(ofstream & ofst) = 0;
};
}
