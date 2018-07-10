
#pragma once
#include "iorder.h"
#include "cstock.h"

class CBuyStock : public IOrder
{
public:
	CBuyStock(CStock* pStock);
	~CBuyStock();

	void Execute();

private:
	CStock* m_pStock;

};