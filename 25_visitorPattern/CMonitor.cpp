
#include "CMonitor.h"


CMonitor::CMonitor()
{

}

CMonitor::~CMonitor()
{

}

void CMonitor::Accept( IComputerPartVisitor* computerPartVisitor )
{
	computerPartVisitor->Visit(this);
}

char* CMonitor::ToString()
{
	return "Displaying Monitor.\n";
}