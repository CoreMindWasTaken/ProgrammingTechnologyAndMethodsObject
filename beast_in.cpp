#include "beast_atd.h"

namespace Animals
{
bool Beast::InData(ifstream & ifst)
{
    int TMP;
    ifst >> Name >> TMP >> Age;
    if (ifst.fail())
    {
        cout << "Error! The beast was not introduced!" << endl;
        return false;
    }
    if (!((0 <= TMP) && (TMP <= 2)))
    {
        cout << "Error! There is no such beast!" << endl;
        return false;
    }
    if (!(0 < Age))
    {
        cout << "Error! The beast has not yet been born! :(" << endl;
        return false;
    }
    D = (Diet)TMP;
    return true;
}
}
