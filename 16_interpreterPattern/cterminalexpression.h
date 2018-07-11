
#pragma once
#include "iexpression.h"

class CTerminalExpression : public IExpression
{
public:
	CTerminalExpression(char* data);
	~CTerminalExpression();

	bool Interpret(char* context);

private:
	char m_szData[128];

};