

#include "COriginator.h"

COriginator::COriginator()
{

}

COriginator::~COriginator()
{

}

void COriginator::SetState(char* state)
{
	strcpy(this->m_szState,state);
}

const char* COriginator::GetState() const
{
	return m_szState;
}

CMemento* COriginator::SaveStateToMemento()
{
	return new CMemento(m_szState);
}

void COriginator::GetStateFromMemento(CMemento* memento)
{
	strcpy(m_szState, memento->GetState());
}