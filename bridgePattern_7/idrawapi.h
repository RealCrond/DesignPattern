
#pragma once

class IDrawApi
{
public:
	IDrawApi(){};
	virtual ~IDrawApi(){};

	virtual void DrawCircle(int radius, int x, int y) = 0;
};