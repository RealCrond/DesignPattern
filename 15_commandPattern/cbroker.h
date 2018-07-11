
#pragma once
#include "iorder.h"
#include <list>
using namespace std;

typedef list<IOrder*>  LISTORDER;


class CBroker
{
public:
	CBroker();
	~CBroker();

	void TakeOrder(IOrder* pOrder);
	void PlaceOrders();

private:
	LISTORDER m_listOrder;

};