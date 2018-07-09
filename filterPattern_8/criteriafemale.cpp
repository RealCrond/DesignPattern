
#include "criteriafemale.h"

CCriteriafemale::CCriteriafemale()
{

}

CCriteriafemale::~CCriteriafemale()
{

}

LISTPERSON CCriteriafemale::MeetCriteria(LISTPERSON persons)
{
	LISTPERSON tempPersons;
	for (LISTPERSON::iterator iter = persons.begin(); iter!= persons.end(); iter++)
	{
		if ( !strcmp(iter->GetGender(),"Female"))
		{
			tempPersons.push_back(*iter);
		}
	}
	return tempPersons;
}