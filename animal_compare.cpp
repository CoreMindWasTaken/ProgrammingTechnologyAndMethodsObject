#include "animal_atd.h"

namespace Animals
{
bool Animal::Compare(Animal * OtherAnimal)
{
    return (this->LengthName() < OtherAnimal->LengthName());
}
}
