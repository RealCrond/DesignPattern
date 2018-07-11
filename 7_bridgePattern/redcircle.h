
#pragma once

#include "idrawapi.h"

class CRedCircle : public IDrawApi
{
public: 
	CRedCircle();
	~CRedCircle();

	void DrawCircle(int radius, int x, int y);
};