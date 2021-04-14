#include "beast_atd.h"
namespace Animals
{
void Beast::InData(ifstream & ifst)
{
    int TMP;
    ifst >> Name >> TMP;
    D = (Diet)TMP;
}
}
