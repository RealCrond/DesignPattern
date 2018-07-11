
#pragma once
#include "CAbstractCustomer.h"

class CNullCustomer : public CAbstractCustomer
{
public:
	CNullCustomer();
	~CNullCustomer();

	bool IsNull();
	char* GetName();

};