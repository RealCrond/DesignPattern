
#pragma once

#include "IState.h"

class CStopState : public IState
{
public:
	CStopState();
	~CStopState();

	void DoAction(CContext* context);
	char* ToString();
};