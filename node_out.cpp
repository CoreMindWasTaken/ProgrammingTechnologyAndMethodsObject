#include "node_atd.h"
namespace Animals {
bool Node::Out(ofstream & ofst)
{
    if (!A->Out(ofst))
    {
        return false;
    }
    return true;
}
}
