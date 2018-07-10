
#pragma once
#include <iostream>

class CStock
{
public:
	CStock();
	~CStock();

	void Buy();
	void Sell();

private:
	char m_szName[32];
	int  m_nQuantity;

};

