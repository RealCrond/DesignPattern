
#pragma once
#include "IComputerPart.h"
#include <iostream>

class CComputer : public IComputerPart
{
public:
	CComputer();
	~CComputer();

	void Accept( IComputerPartVisitor* computerPartVisitor );

	char* ToString();

private:
	IComputerPart* parts[3] ;

};