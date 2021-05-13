#include "container_atd.h"

namespace Animals
{
void Container::Multimethod(ofstream & ofst)
{
    ofst << "Multimethod." << endl;

    Node * N = LastNode;
    Node * TMP;

    while (N != NULL)
    {
        TMP = N->PrevNode;
        while (TMP != NULL)
        {
            N->A->Multimethod(TMP->A, ofst);
            N->Out(ofst);
            TMP->Out(ofst);
            TMP = TMP->PrevNode;
        }
        N = N->PrevNode;
    }
}
}
