
#include "CComputerPartDisplayVisitor.h"
#include <iostream>

CComputerPartDisplayVisitor::CComputerPartDisplayVisitor()
{

}

CComputerPartDisplayVisitor::~CComputerPartDisplayVisitor()
{

}

void CComputerPartDisplayVisitor::Visit(IComputerPart* computerpart)
{
	printf("%s",computerpart->ToString());
}
