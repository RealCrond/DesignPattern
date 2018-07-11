
#include "cstock.h"

CStock::CStock()
{
	strcpy(m_szName,"ABC");
	m_nQuantity = 10;
}

CStock::~CStock()
{

}

void CStock::Buy()
{
	printf("Stock [ Name: %s, Quantity: %d ] bought\n",m_szName,m_nQuantity);
}

void CStock::Sell()
{
	printf("Stock [ Name: %s, Quantity: %d ] sold\n",m_szName,m_nQuantity);
}