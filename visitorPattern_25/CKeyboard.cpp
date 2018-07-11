
#include "CKeyboard.h"


CKeyboard::CKeyboard()
{

}

CKeyboard::~CKeyboard()
{

}

void CKeyboard::Accept( IComputerPartVisitor* computerPartVisitor )
{
	computerPartVisitor->Visit(this);
}

char* CKeyboard::ToString()
{
	return "Displaying Keyboard.\n";
}