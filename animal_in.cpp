#include "animal_atd.h"
#include "bird_atd.h"
#include "fish_atd.h"
#include "beast_atd.h"

namespace Animals
{
Animal * Animal::In(ifstream & ifst)
{
    Animal * A;
    int TMP;
    ifst >> TMP;

    if (ifst.fail())
    {
        cout << "Error! The type of animal is undefined!" << endl;
        return NULL;
    }

    switch(TMP)
    {
    case 0:
        A = new Fish();
        break;
    case 1:
        A = new Bird();
        break;
    case 2:
        A = new Beast();
        break;
    default:
        return NULL;
    }

    if (A->InData(ifst))
    {
        return A;
    }
    else
    {
        delete A;
        return NULL;
    }
}
}
