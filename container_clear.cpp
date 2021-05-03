#include "container_atd.h"

namespace Animals
{
void Container::Clear()
{
    Node * N = LastNode;
    Node * TMP;
    while (N != NULL)
    {
        TMP = N->PrevNode;
        delete N->A;
        delete N;
        N = TMP;
    }
    LastNode = NULL;
    Size = 0;
}
}
