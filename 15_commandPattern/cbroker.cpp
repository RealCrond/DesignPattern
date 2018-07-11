
#include "cbroker.h"

CBroker::CBroker()
{

}

CBroker::~CBroker()
{

}

void CBroker::TakeOrder(IOrder* pOrder)
{
	m_listOrder.push_back(pOrder);
}

void CBroker::PlaceOrders()
{
	for ( LISTORDER::iterator iter = m_listOrder.begin(); iter!= m_listOrder.end(); iter++)
	{
		(*iter)->Execute();
	}
	m_listOrder.clear();
}