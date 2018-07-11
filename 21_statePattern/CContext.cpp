
#include "CContext.h"
#include "IState.h"

CContext::CContext()
	:m_iState(NULL)
{

}

CContext::~CContext()
{

}

void CContext::SetState(IState* state)
{
	m_iState = state;
}

IState* CContext::GetState() const
{
	return m_iState;
}