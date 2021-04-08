#include "bird_atd.h"
namespace Animals
{
void Bird::InData(ifstream & ifst)
{
    int TMP;
    ifst >> Name >> TMP;
    AttitudeFlight = (Migration)TMP;
}
}
