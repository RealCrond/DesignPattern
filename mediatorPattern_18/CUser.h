
#pragma once
#include <iostream>
#include "CChatRoom.h"

class CUser
{
public:
	CUser(char* name);
	~CUser();

	const char* GetName() const;
	void SetName(char* name);

	void SendMessage(char* msg);

private:
	char m_szName[32];

};