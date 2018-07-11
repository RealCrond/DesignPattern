#pragma once
#include "IComputerPart.h"

class CKeyboard : public IComputerPart
{
public:
	CKeyboard();
	~CKeyboard();

	void Accept( IComputerPartVisitor* computerPartVisitor );

	char* ToString();

};