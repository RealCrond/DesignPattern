
#include "CCareTaker.h"

CCareTaker::CCareTaker()
{

}

CCareTaker::~CCareTaker()
{

}

void CCareTaker::Add(CMemento* memento)
{
	m_listMemento.push_back(memento);
}

CMemento* CCareTaker::Get(int index)
{
	LISTMEMENTO::iterator iter = m_listMemento.begin();
	for ( int nIndex = 0; nIndex <index && iter != m_listMemento.end(); nIndex ++ )
	{
		iter++;	
	}
	if ( *iter != NULL )
	{
		return *(iter);
	}
	
}