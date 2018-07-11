
#include "subject.h"
#include "observer.h"

CSubject::CSubject()
{

}

CSubject::~CSubject()
{

}

CSubject CSubject::operator=(CSubject subject)
{
	CSubject* temp = new CSubject();
	temp->m_nState = subject.m_nState;
	temp->m_listObserver = subject.m_listObserver;
	this->m_nState = subject.m_nState;
	this->m_listObserver = subject.m_listObserver;
	
	return *temp;
}

int	 CSubject::GetState() const
{
	return m_nState;
}

void CSubject::SetState(int state)
{
	m_nState = state;
	NotifyAllObserver();
}

void CSubject::Attach(CObserver* observer)
{
	m_listObserver.push_back(observer);
}

void CSubject::NotifyAllObserver()
{
	LISTOBSERVER::iterator iter = m_listObserver.begin();
	for ( ;iter != m_listObserver.end(); iter++ )
	{
		(*iter)->Update();
	}
}