
#include "candexpression.h"

CAndExpression::CAndExpression(IExpression* expr1,IExpression* expr2)
{
	this->m_expr1 = expr1;
	this->m_expr2 = expr2;
}

CAndExpression::~CAndExpression()
{

}

bool CAndExpression::Interpret(char* context)
{
	return m_expr1->Interpret(context) && m_expr2->Interpret(context);
}

