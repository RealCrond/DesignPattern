
#pragma once
#include "icriteria.h"

class COrcriteria : public ICriteria
{
public:
	COrcriteria(ICriteria* criteria, ICriteria* otherCriteria);
	~COrcriteria();

	LISTPERSON MeetCriteria(LISTPERSON persons);

private:
	ICriteria* m_pCriteria;
	ICriteria* m_pOtherCriteria;

};
