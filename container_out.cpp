#include "container_atd.h"

namespace Animals
{
void Container::Out(ofstream & ofst)
{
    ofst << "Container contains " << Size << " elements!" << endl;
    Node * N = LastNode;
    while ((N != NULL) && (N->PrevNode != NULL))
    {
        N = N->PrevNode;
    }
    while (N != NULL)
    {
        if (!N->Out(ofst))
        {
            ofst << "Node is broken!" << endl;
        }
        N = N->NextNode;
    }
    return;
}
}
