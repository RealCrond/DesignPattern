
#include "csellstock.h"

CSellStock::CSellStock(CStock* pStock)
{
	m_pStock = pStock;
}

CSellStock::~CSellStock()
{

}

void CSellStock::Execute()
{
	m_pStock->Sell();
}