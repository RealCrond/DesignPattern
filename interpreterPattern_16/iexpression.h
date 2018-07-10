
#pragma once
#include <iostream>

class IExpression
{
public:
	virtual bool Interpret(char* context) = 0;
};