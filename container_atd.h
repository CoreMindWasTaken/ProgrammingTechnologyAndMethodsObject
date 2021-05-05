#pragma once

#include "node_atd.h"

namespace Animals
{
class Container
{
public:
    unsigned int Size;
    Node * LastNode;

    bool In(ifstream & ifst);
    void Out(ofstream & ofst);
    void OutFish(ofstream & ofst);
    void Clear();
    void Sort();
    Container();
    ~Container()
    {
        Clear();
    }
};
}
