
#include "criteriasingle.h"

CCriteriasingle::CCriteriasingle()
{

}

CCriteriasingle::~CCriteriasingle()
{

}

LISTPERSON CCriteriasingle::MeetCriteria(LISTPERSON persons)
{
	LISTPERSON tempPersons;
	for (LISTPERSON::iterator iter = persons.begin(); iter!= persons.end(); iter++)
	{
		if ( !strcmp(iter->GetMaritalStatus(),"Single"))
		{
			tempPersons.push_back(*iter);
		}
	}
	return tempPersons;
}