#pragma once

#include "animal_atd.h"

namespace Animals
{
class Node
{
public:
    Animal * A;
    Node * NextNode;
    Node * PrevNode;

    bool In(ifstream & ifst);
    bool Out(ofstream & ofst);
    Node ()
    {
        A = NULL;
        NextNode = NULL;
        PrevNode = NULL;
    }
};
}
