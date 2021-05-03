#include "beast_atd.h"

namespace Animals
{
bool Beast::Out(ofstream & ofst)
{
    ofst << "It is ";

    switch (D)
    {
    case PREDATOR:
        ofst << "predator";
        break;
    case HERBIVORE:
        ofst << "herbivore";
        break;
    case INSECTIVOROUS:
        ofst << "insectivorous";
        break;
    default:
        return false;
    }

    ofst << " beast (" << Age << " age) - " << Name << endl;
    return true;
}
}
