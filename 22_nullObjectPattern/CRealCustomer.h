
#pragma once

#include "CAbstractCustomer.h"

class CRealCustomer : public CAbstractCustomer
{
public:
	CRealCustomer(char* name);
	~CRealCustomer();

	bool IsNull();
	char* GetName();

};