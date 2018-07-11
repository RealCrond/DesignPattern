#pragma once
#include <list>
#include "person.h"

using namespace std;

typedef list<CPerson>  LISTPERSON;

class ICriteria
{
public:
	ICriteria(){};
	virtual ~ICriteria(){};

	virtual LISTPERSON MeetCriteria(LISTPERSON persons) = 0;

};