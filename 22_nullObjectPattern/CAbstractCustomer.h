
#pragma once
#include <iostream>

class CAbstractCustomer
{
public:
	CAbstractCustomer(){};
	virtual ~CAbstractCustomer(){};

	virtual bool IsNull() = 0;
	virtual char* GetName() = 0;

protected:
	char m_szName[32];

};