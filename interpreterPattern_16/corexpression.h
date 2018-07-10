
#pragma once
#include "iexpression.h"

class COrExpression : public IExpression
{
public: 
	COrExpression(IExpression* expr1,IExpression* expr2);
	~COrExpression();

	bool Interpret(char* context);

private:
	IExpression* m_expr1;
	IExpression* m_expr2;

};