#include "fish_atd.h"
namespace Animals
{
void Fish::InData(ifstream & ifst)
{
    int TMP;
    ifst >> Name >> TMP;
    Place = (Habitat)TMP;
}
}