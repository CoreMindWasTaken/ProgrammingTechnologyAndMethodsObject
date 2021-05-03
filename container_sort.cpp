#include "container_atd.h"

using namespace std;

namespace Animals
{
void Container::Sort()
{
    Node * FirstNode = LastNode;
    if(FirstNode != NULL)
    {
        while(FirstNode->PrevNode != NULL)
        {
            FirstNode = FirstNode->PrevNode;
        }
        Animal * A;
        for(Node * i = FirstNode; i->NextNode != NULL; i = i->NextNode)
        {
            for(Node * j = i->NextNode; j != NULL; j = j->NextNode)
            {
                if(i->A->Compare(j->A))
                {
                    A = i->A;
                    i->A = j->A;
                    j->A = A;
                }
            }
        }
    }
}
}
