
#pragma once

#include "CRealCustomer.h"
#include "CNullCustomer.h"

class CCustomerFactory
{
public:
	CCustomerFactory();
	~CCustomerFactory();

	static CAbstractCustomer* GetCustomer(char* name);

	static char* names[]; 

};

