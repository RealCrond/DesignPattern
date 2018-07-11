
#pragma once
#include "subject.h"

class CObserver
{
public:
	CObserver(){};
	virtual ~CObserver(){};

	CObserver operator=(CObserver observer)
	{
		this->m_pSubject = observer.m_pSubject;
	};

	virtual void Update(){};

protected:
	CSubject* m_pSubject;

};