
#include "employee.h"

CEmployee::CEmployee(char* name,char* dept,int sal)
{
	strcpy(m_szname,name);
	strcpy(m_szdepartment,dept);
	m_nsalary = sal;
	//m_iter = m_listSubordinates.begin();
}

CEmployee::~CEmployee()
{

}

bool CEmployee::operator==(const CEmployee& e)
{
	bool bIsEqual = false;
	bIsEqual |= strcmp(this->m_szname,e.m_szname);
	bIsEqual |= strcmp(this->m_szdepartment,m_szdepartment);
	bIsEqual |= (this->m_nsalary == e.m_nsalary)? false : true;
	return !bIsEqual;
}

void CEmployee::Add(const CEmployee& e)
{
	m_listSubordinates.push_back(e);
}

void CEmployee::Remove(const CEmployee& e)
{
	m_listSubordinates.remove(e);
}

LISTEMPLOYEE CEmployee::getSubordinates() const
{
	return m_listSubordinates;
}

char* CEmployee::ToString()
{
	char str[128];
	sprintf(str,"Employee :[ Name :  %s, dept :  %s, salary : %d ]\n",m_szname,m_szdepartment,m_nsalary);
	return str;

}

void CEmployee::PrintSubordinates()
{
	LISTEMPLOYEE iterTmp = this->getSubordinates();
	//打印自己
	char szTemp[128];
	strcpy(szTemp,ToString());
	printf(szTemp);
	//打印下属
	for ( m_iter = iterTmp.begin(); m_iter != iterTmp.end(); m_iter++ )
	{
		m_iter->PrintSubordinates();
	}

}

