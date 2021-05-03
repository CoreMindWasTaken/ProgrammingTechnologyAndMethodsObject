#include "container_atd.h"

namespace Animals
{
bool Container::In(ifstream & ifst)
{   
    Node * N;
    while (!ifst.eof())
    {
        N = new Node();
        if (N->In(ifst))
        {
            Size++;
            if (LastNode != NULL)
            {
                LastNode->NextNode = N;
                N->PrevNode = LastNode;
                LastNode = N;
            }
            else
            {
                LastNode = N;
            }
        }
        else
        {
            delete N;
            cout << "The input received incorrect data!" << endl;
            return false;
        }
    }
    return true;
}
}
