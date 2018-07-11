
#pragma once

#include "ishape.h"
#include <iostream>

class CCircle : public IShape
{
public:
	CCircle(char* szColor);
	~CCircle();

	void Draw();

	void SetX(int x);
	void SetY(int y);
	void SetRadius(int radius);


private:
	int m_nX;
	int m_nY;
	int m_nRadius;
	char m_szColor[32];


};