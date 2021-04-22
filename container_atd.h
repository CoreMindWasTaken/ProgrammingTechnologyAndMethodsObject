#pragma once
#include "node_atd.h"
namespace Animals
{
class Container
{
    unsigned int Size;
    Node * LastNode;
public:
    bool In(ifstream & ifst);
    void Out(ofstream & ofst);
    void Clear();
    void Sort();
    Container();
    ~Container()
    {
        Clear();
    }
};
}
