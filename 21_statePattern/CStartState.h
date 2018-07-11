
#pragma once

#include "IState.h"

class CStartState : public IState
{
public:
	CStartState();
	~CStartState();

	void DoAction(CContext* context);
	char* ToString();
};