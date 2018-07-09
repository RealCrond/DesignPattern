
#include "shapemaker.h"

CShapeMaker::CShapeMaker()
{
	m_pCircle = new CCircle();
	m_pRectangle = new CRectangle();
	m_pSquare = new CSquare();
}

CShapeMaker::~CShapeMaker()
{

}

void CShapeMaker::DrawCircle()
{
	m_pCircle->Draw();
}

void CShapeMaker::DrawRectangle()
{
	m_pRectangle->Draw();
}

void CShapeMaker::DrawSquare()
{
	m_pSquare->Draw();
}