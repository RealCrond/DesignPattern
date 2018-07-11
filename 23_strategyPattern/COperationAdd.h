
#pragma once
#include "IStrategy.h"

class COperationAdd : public IStrategy
{
public:
	COperationAdd();
	~COperationAdd();

	int DoOperation(int num1,int num2);

};