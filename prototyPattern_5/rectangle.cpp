#include "rectangle.h"

CRectangle::CRectangle()
{
	strcpy(m_szType,"Rectangle");
}

CRectangle::~CRectangle()
{

}

void CRectangle::Draw()
{
	printf("Inside Rectangle::draw() method.\n");
}