#include "bird_atd.h"

namespace Animals
{
bool Bird::InData(ifstream & ifst)
{
    int TMP;
    ifst >> Name >> TMP >> Age;
    if (ifst.fail())
    {
        cout << "Error! The bird was not introduced!" << endl;
        return false;
    }
    if (!((0 <= TMP) && (TMP <= 1)))
    {
        cout << "Error! There is no such bird!" << endl;
        return false;
    }
    if (!(0 < Age))
    {
        cout << "Error! The bird has not yet been born! :(" << endl;
        return false;
    }
    AttitudeFlight = (Migration)TMP;
    return true;
}
}
