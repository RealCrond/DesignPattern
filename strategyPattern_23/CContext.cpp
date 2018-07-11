
#include "CContext.h"

CContext::CContext(IStrategy* strategy)
{
	this->m_strategy = strategy;
}

CContext::~CContext()
{

}

int CContext::ExecuteStrategy(int num1,int num2)
{
	return m_strategy->DoOperation(num1,num2);
}