
#include "CCustomerFactory.h"

char* CCustomerFactory::names[] = {"Rob", "Joe", "Julie"};

CCustomerFactory::CCustomerFactory()
{

}

CCustomerFactory::~CCustomerFactory()
{

}

CAbstractCustomer* CCustomerFactory::GetCustomer(char* name)
{
	for ( int nIndex = 0; nIndex < 3; nIndex++)
	{
		if (!strcmp(name,names[nIndex]))
		{
			return new CRealCustomer(name);
		}
	}
	return new CNullCustomer();
}