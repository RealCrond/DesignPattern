
#pragma once
#include "COriginator.h"
#include <list>

using namespace std;

typedef list<CMemento*> LISTMEMENTO;

class CCareTaker
{
public:
	CCareTaker();
	~CCareTaker();

	void Add(CMemento* memento);
	CMemento* Get(int index);
	
private:
	LISTMEMENTO m_listMemento;

};