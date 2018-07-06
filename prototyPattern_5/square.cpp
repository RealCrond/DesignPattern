#include "square.h"

CSquare::CSquare()
{
	strcpy(m_szType,"Square");
}

CSquare::~CSquare()
{

}

void CSquare::Draw()
{
	printf("Inside Square::draw() method.\n");
}