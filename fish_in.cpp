#include "fish_atd.h"

namespace Animals
{
bool Fish::InData(ifstream & ifst)
{
    int TMP;
    ifst >> Name >> TMP >> Age;
    if(ifst.fail())
    {
        cout << "Error! The fish was not introduced!" << endl;
        return false;
    }
    if(!((0 <= TMP) && (TMP <= 2)))
    {
        cout << "Error! There is no such fish!" << endl;
        return false;
    }
    if(!(0 < Age))
    {
        cout << "Error! The fish has not yet been born! :(" << endl;
        return false;
    }
    Place = (Habitat)TMP;
    return true;
}
}
