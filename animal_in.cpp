#include "animal_atd.h"
#include "bird_atd.h"
#include "fish_atd.h"
namespace Animals
{
Animal * Animal::In(ifstream & ifst)
{
    Animal * A;
    int TMP;
    ifst >> TMP;
    switch(TMP)
    {
    case 0:
        A = new Fish();
        break;
    case 1:
        A = new Bird();
        break;
    default:
        return 0;
    }
    A->InData(ifst);
    return A;
}
}