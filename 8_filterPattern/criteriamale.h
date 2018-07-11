
#pragma once
#include "icriteria.h"

class CCriteriamale : public ICriteria
{
public:
	CCriteriamale();
	~CCriteriamale();

	LISTPERSON MeetCriteria(LISTPERSON persons);
};