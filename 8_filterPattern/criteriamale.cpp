
#include "criteriamale.h"

CCriteriamale::CCriteriamale()
{

}

CCriteriamale::~CCriteriamale()
{

}

LISTPERSON CCriteriamale::MeetCriteria(LISTPERSON persons)
{
	LISTPERSON tempPersons;
	for (LISTPERSON::iterator iter = persons.begin(); iter!= persons.end(); iter++)
	{
		if ( !strcmp(iter->GetGender(),"Male"))
		{
			tempPersons.push_back(*iter);
		}
	}
	return tempPersons;
}