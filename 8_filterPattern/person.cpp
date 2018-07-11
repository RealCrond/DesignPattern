
#include "person.h"

CPerson::CPerson(char* name, char* gender, char* maritalStatus)
{
	strcpy(m_szName,name);
	strcpy(m_szGender,gender);
	strcpy(m_szMaritalStatus,maritalStatus);
}

CPerson::~CPerson()
{

}

bool CPerson::IsEqual(CPerson person)
{
	bool bRet = false;
	bRet |= strcmp(m_szName,person.GetName());
	bRet |= strcmp(m_szGender,person.GetGender());
	bRet |= strcmp(m_szMaritalStatus,person.GetMaritalStatus());

	return !bRet;
}

const char* CPerson::GetName() const
{
	return m_szName;
}

const char* CPerson::GetGender() const
{
	return m_szGender;
}

const char* CPerson::GetMaritalStatus() const
{
	return m_szMaritalStatus;
}