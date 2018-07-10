
#pragma once

class IImage
{
public:
	IImage(){};
	virtual ~IImage(){};

	virtual void Display() = 0;
};