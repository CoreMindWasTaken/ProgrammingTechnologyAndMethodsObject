#include "fish_atd.h"

namespace Animals
{
bool Fish::Out(ofstream & ofst)
{
    ofst << "It is ";
    switch (Place)
    {
    case RIVER:
        ofst << "river";
        break;
    case SEA:
        ofst << "sea";
        break;
    case LAKE:
        ofst << "lake";
        break;
    default:
        return false;
    }
    ofst << " fish (" << Age << " age) - " << Name << endl;
    return true;
}
}
