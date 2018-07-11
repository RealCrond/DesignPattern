
#pragma once

#include "IComputerPart.h"

class CComputerPartDisplayVisitor : public IComputerPartVisitor
{
public:
	CComputerPartDisplayVisitor();
	~CComputerPartDisplayVisitor();

	void Visit(IComputerPart* computerpart);
};