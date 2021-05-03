#include "container_atd.h"

namespace Animals
{
void Container::OutFish(ofstream & ofst)
{
    ofst << "Only fish!" << endl;
    Node * N = LastNode;
    while ((N != NULL) && (N->PrevNode != NULL))
    {
        N = N->PrevNode;
    }
    for(unsigned int i = 0; i < Size; i++)
    {
        N->A->OutFish(ofst);
        N = N->NextNode;
    }
    return;
}
}
