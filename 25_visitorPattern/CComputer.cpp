
#include "CComputer.h"
#include "CMouse.h"
#include "CKeyboard.h"
#include "CMonitor.h"


CComputer::CComputer()
{
	//parts = {new CMouse(),new CKeyboard(), new CMonitor(),NULL}
	parts[0] = new CMouse();
	parts[1] = new CKeyboard();
	parts[2] = new CMonitor();

}

CComputer::~CComputer()
{

}

void CComputer::Accept( IComputerPartVisitor* computerPartVisitor )
{
	for (int nIndex = 0; nIndex < 3; nIndex++)
	{
		parts[nIndex]->Accept(computerPartVisitor);
	}

	computerPartVisitor->Visit(this);
}

char* CComputer::ToString()
{
	return "Displaying Computer.\n";
}