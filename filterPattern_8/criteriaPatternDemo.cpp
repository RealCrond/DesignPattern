/*****************************************************************************
ģ����      : ������ģʽ��Filter Pattern�����׼ģʽ��Criteria Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	�� 
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "criteriamale.h"
#include "criteriafemale.h"
#include "criteriasingle.h"
#include "andcriteria.h"
#include "orcriteria.h"

void printPersons(LISTPERSON persons)
{
	for (LISTPERSON::iterator iter = persons.begin(); iter != persons.end(); iter++ )
	{
		printf("Person : [ Name : %s, Gender : %s, Marital Status : %s ]\n",iter->GetName(),iter->GetGender(),iter->GetMaritalStatus());
	}
	
	
}

int main(int argc, char* argv[])

{
	LISTPERSON persons;
	persons.push_back(CPerson("Robert","Male","Single"));
	persons.push_back(CPerson("John","Male","Married"));
	persons.push_back(CPerson("Laura","Female","Married"));
	persons.push_back(CPerson("Diana","Female","Single"));
	persons.push_back(CPerson("Mike","Male","Single"));
	persons.push_back(CPerson("Bobby","Male","Single"));

	ICriteria* pMale = new CCriteriamale();
	ICriteria* pFemale = new CCriteriafemale();
	ICriteria* pSingle = new CCriteriasingle();
	ICriteria* pSingleMale = new CAndcriteria(pSingle, pMale);
	ICriteria* pSingleOrFemale = new COrcriteria(pSingle, pFemale);

	printf("Filter Male:\n");
	printPersons(pMale->MeetCriteria(persons));

	printf("\nFilter Female:\n");
	printPersons(pFemale->MeetCriteria(persons));

	printf("\nFilter Single:\n");
	printPersons(pSingle->MeetCriteria(persons));

	printf("\nFilter SingleAndMale:\n");
	printPersons(pSingleMale->MeetCriteria(persons));

	printf("\nFilter SingleOrFemale:\n");
	printPersons(pSingleOrFemale->MeetCriteria(persons));



	char a;
	a = getchar();
}