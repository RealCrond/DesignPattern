#pragma once
#include "IStrategy.h"

class COperationMultiply : public IStrategy
{
public:
	COperationMultiply();
	~COperationMultiply();

	int DoOperation(int num1,int num2);

};