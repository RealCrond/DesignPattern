
#include "cbuystock.h"

CBuyStock::CBuyStock(CStock* pStock)
{
	m_pStock = pStock;
}

CBuyStock::~CBuyStock()
{

}

void CBuyStock::Execute()
{
	m_pStock->Buy();
}