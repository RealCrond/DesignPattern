
#pragma once
#include "iIterator.h"

class CNameIterator : public IIterator
{
public:
	CNameIterator();
	~CNameIterator();

	bool HasNext();


	int index;
};