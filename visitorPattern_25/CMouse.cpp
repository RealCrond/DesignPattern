
#include "CMouse.h"

CMouse::CMouse()
{

}

CMouse::~CMouse()
{

}

void CMouse::Accept( IComputerPartVisitor* computerPartVisitor )
{
	computerPartVisitor->Visit(this);
}

char* CMouse::ToString()
{
	return "Displaying Mouse.\n";
}