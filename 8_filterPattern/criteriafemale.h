
#pragma once
#include "icriteria.h"

class CCriteriafemale : public ICriteria
{
public:
	CCriteriafemale();
	~CCriteriafemale();

	LISTPERSON MeetCriteria(LISTPERSON persons);

};