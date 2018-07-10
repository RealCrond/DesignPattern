
#pragma once
#include "iorder.h"
#include "cstock.h"

class CSellStock : public IOrder
{
public:
	CSellStock(CStock* pStock);
	~CSellStock();

	void Execute();

private:
	CStock* m_pStock;

};