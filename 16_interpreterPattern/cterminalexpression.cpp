
#include "cterminalexpression.h"

CTerminalExpression::CTerminalExpression(char* data)
{
	strcpy(m_szData,data);
}

CTerminalExpression::~CTerminalExpression()
{

}

bool CTerminalExpression::Interpret(char* context)
{
	if(!strcmp(m_szData,context)) //×Ö·û´®°üº¬
	{
		return true;
	}
	else
	{
		return false;
	}
}

