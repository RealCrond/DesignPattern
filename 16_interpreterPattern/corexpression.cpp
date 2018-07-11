
#include "corexpression.h"

COrExpression::COrExpression(IExpression* expr1,IExpression* expr2)
{
	this->m_expr1 = expr1;
	this->m_expr2 = expr2;
}

COrExpression::~COrExpression()
{

}

bool COrExpression::Interpret(char* context)
{
	return m_expr1->Interpret(context) || m_expr2->Interpret(context);
}

