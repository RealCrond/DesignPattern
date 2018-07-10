
#pragma once
#include "iexpression.h"

class CAndExpression : public IExpression
{
public:
	CAndExpression(IExpression* expr1,IExpression* expr2);
	~CAndExpression();

	bool Interpret(char* context);

private:
	IExpression* m_expr1;
	IExpression* m_expr2;

};