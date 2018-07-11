
#include "andcriteria.h"

CAndcriteria::CAndcriteria(ICriteria* criteria, ICriteria* otherCriteria)
{
	m_pCriteria = criteria;
	m_pOtherCriteria = otherCriteria;
}

CAndcriteria::~CAndcriteria()
{

}

LISTPERSON CAndcriteria::MeetCriteria(LISTPERSON persons)
{
	LISTPERSON firstCriteriaPersons = m_pCriteria->MeetCriteria(persons);   
	return m_pOtherCriteria->MeetCriteria(firstCriteriaPersons);

}