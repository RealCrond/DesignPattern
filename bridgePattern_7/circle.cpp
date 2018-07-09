
#include "circle.h"

CCircle::CCircle(int x, int y, int radius, IDrawApi* drawApi)
{
	m_pIDrawApi = drawApi;
	m_x = x;
	m_y = y;
	m_radius = radius;
}

CCircle::~CCircle()
{

}

void CCircle::Draw()
{
	m_pIDrawApi->DrawCircle(m_radius,m_x,m_y);
}