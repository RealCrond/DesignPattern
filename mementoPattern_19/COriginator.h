
#pragma once

#include "CMemento.h"

class COriginator
{
public:
	COriginator();
	~COriginator();

	void SetState(char* state);
	const char* GetState() const;

	CMemento* SaveStateToMemento();
	void GetStateFromMemento(CMemento* memento);


private:
	char m_szState[128];

};