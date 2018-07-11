
#pragma once
#include "icriteria.h"

class CCriteriasingle : public ICriteria
{
public:
	CCriteriasingle();
	~CCriteriasingle();

	LISTPERSON MeetCriteria(LISTPERSON persons);
};