
#pragma once
#include <iostream>
#include "CContext.h"

class IState
{
public:
	virtual void DoAction(CContext* context) = 0;
	virtual char* ToString() = 0;
};