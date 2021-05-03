#include "node_atd.h"

namespace Animals
{
bool Node::Out(ofstream & ofst)
{
    if (!A->Out(ofst))
    {
        return false;
    }
    else
    {
        ofst << "Length animal name: " << A->LengthName() << endl;
        return true;
    }
}
}
