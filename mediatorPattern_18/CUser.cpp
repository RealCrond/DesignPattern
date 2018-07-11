
#include "CUser.h"

CUser::CUser(char* name)
{
	strcpy(this->m_szName,name);
}

CUser::~CUser()
{

}

const char* CUser::GetName() const
{
	return m_szName;
}


void CUser::SetName(char* name)
{
	strcpy(m_szName,name);
}

void CUser::SendMessage(char* msg)
{
	CChatRoom::ShowMessage(this,msg);
}