
#pragma once
#include "IComputerPart.h"

class CMouse : public IComputerPart
{
public:
	CMouse();
	~CMouse();

	void Accept( IComputerPartVisitor* computerPartVisitor );

	char* ToString();

};