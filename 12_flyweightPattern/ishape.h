
#pragma once

class IShape
{
public:
	IShape(){};
	virtual ~IShape(){};

	virtual void Draw() = 0;
};