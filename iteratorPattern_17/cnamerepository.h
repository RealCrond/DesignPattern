
#pragma once

#include "icontainer.h"
#include "iIterator.h"

class CNameRepository : public IContainer
{
public:
	CNameRepository();
	~CNameRepository();

	IIterator* GetIterator();
};