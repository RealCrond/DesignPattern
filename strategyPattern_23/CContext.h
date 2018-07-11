
#pragma once
#include "IStrategy.h"

class CContext
{
public:
	CContext(IStrategy* strategy);
	~CContext();

	int ExecuteStrategy(int num1,int num2);

private:
	IStrategy* m_strategy;

};