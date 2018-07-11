#pragma once
#include <iostream>

class IShape
{
public:
	IShape(){};
	~IShape(){};

	virtual void Draw() = 0;
};