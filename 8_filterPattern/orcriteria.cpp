
#include "orcriteria.h"

COrcriteria::COrcriteria(ICriteria* criteria, ICriteria* otherCriteria)
{
	m_pCriteria = criteria;
	m_pOtherCriteria = otherCriteria;
}

COrcriteria::~COrcriteria()
{

}

LISTPERSON COrcriteria::MeetCriteria(LISTPERSON persons)
{
	LISTPERSON firstCriteriaItems = m_pCriteria->MeetCriteria(persons);
	LISTPERSON otherCriteriaItems = m_pOtherCriteria->MeetCriteria(persons);

	for (LISTPERSON::iterator iterFisrt = firstCriteriaItems.begin(); iterFisrt!=firstCriteriaItems.end(); iterFisrt++)
	{
		bool bIsEqual = false;
		for ( LISTPERSON::iterator iterOther = otherCriteriaItems.begin(); iterOther!=otherCriteriaItems.end(); iterOther++)
		{
			if(!iterFisrt->IsEqual(*iterOther))
			{
				bIsEqual = true;
			}
		}
		otherCriteriaItems.push_back(*iterFisrt);
	}

	return otherCriteriaItems;
}