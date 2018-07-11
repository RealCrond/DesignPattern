
#include "circle.h"

CCircle::CCircle(char* szColor)
{
	strcpy(m_szColor,szColor);
}

CCircle::~CCircle()
{

}

void CCircle::Draw()
{
	printf("Circle: Draw() [Color : %s, x : %d, y :%d, radius :%d \n",m_szColor,m_nX,m_nY,m_nRadius);
}

void CCircle::SetX(int x)
{
	m_nX = x;
}

void CCircle::SetY(int y)
{
	m_nY = y;
}

void CCircle::SetRadius(int radius)
{
	m_nRadius = radius;
}