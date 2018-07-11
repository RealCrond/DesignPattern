
#include "CMemento.h"

CMemento::CMemento(char* state)
{
	strcpy(this->m_szState,state);
}

CMemento::~CMemento()
{

}

const char* CMemento::GetState() const
{
	return m_szState;
}