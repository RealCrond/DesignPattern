#include "circle.h"


CCircle::CCircle()
{
	strcpy(m_szType,"Circle");
}

CCircle::~CCircle()
{

}

void CCircle::Draw()
{
	printf("Inside Circle::draw() method.\n");
}