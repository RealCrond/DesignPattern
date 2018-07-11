
#pragma once
#include <iostream>
#include "idrawapi.h"

class CGreenCircle : public IDrawApi
{
public:
	CGreenCircle();
	~CGreenCircle();

	void DrawCircle(int radius, int x, int y);
};