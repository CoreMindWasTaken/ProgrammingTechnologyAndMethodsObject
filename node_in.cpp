#include "node_atd.h"
namespace Animals {
bool Node::In(ifstream & ifst)
{
   Animal * A = Animal::In(ifst);
   if (A != NULL)
   {
       this->A = A;
       return true;
   }
   else
   {
       return false;
   }
}
}
