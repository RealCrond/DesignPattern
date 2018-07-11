
#pragma once
#include <iostream>

class CMemento
{
public:
	CMemento(char* state);
	~CMemento();

	const char* GetState() const;

private:
	char m_szState[128];

};