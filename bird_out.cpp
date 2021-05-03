#include "bird_atd.h"

namespace Animals
{
bool Bird::Out(ofstream & ofst)
{
    ofst << "It is ";

    switch (AttitudeFlight)
    {
    case MIGRATORY:
        ofst << "migrant";
        break;
    case NONMIGRATORY:
        ofst << "nonmigrant";
        break;
    default:
        return false;
    }

    ofst << " bird (" << Age << " age) - " << Name << endl;
    return true;
}
}
