
#pragma once

#include "iIterator.h"

class IContainer
{
public:
	virtual IIterator* GetIterator() = 0;
};