#pragma once
#include "IStrategy.h"

class COperationSubstract : public IStrategy
{
public:
	COperationSubstract();
	~COperationSubstract();

	int DoOperation(int num1,int num2);

};