
#pragma once
#include <iostream>

class CPerson
{
public:
	CPerson(char* name, char* gender, char* maritalStatus);
	~CPerson();

	bool IsEqual(CPerson person);

	const char* GetName() const;
	const char* GetGender() const;
	const char* GetMaritalStatus() const;

private:
	char m_szName[32];
	char m_szGender[32];
	char m_szMaritalStatus[32];

};