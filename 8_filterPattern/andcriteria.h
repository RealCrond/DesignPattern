
#pragma once
#include "icriteria.h"

class CAndcriteria : public ICriteria
{
public:
	CAndcriteria(ICriteria* criteria, ICriteria* otherCriteria);
	~CAndcriteria();

	LISTPERSON MeetCriteria(LISTPERSON persons);

private:
	ICriteria* m_pCriteria;
	ICriteria* m_pOtherCriteria;

};