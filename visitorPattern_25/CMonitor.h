#pragma once
#include "IComputerPart.h"

class CMonitor : public IComputerPart
{
public:
	CMonitor();
	~CMonitor();

	void Accept( IComputerPartVisitor* computerPartVisitor );

	char* ToString();

};