
#include "CRealCustomer.h"


CRealCustomer::CRealCustomer(char* name)
{
	strcpy(m_szName,name);
}


CRealCustomer::~CRealCustomer()
{

}

bool CRealCustomer::IsNull()
{
	return false;
}

char* CRealCustomer::GetName()
{
	return m_szName;
}