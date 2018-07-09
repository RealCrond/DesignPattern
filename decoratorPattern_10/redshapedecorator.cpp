
#include "redshapedecorator.h"

CRedShapeDecorator::CRedShapeDecorator()
{

}

CRedShapeDecorator::CRedShapeDecorator(IShape* pShape)
{
	m_pDecoratedShape = pShape;
}

CRedShapeDecorator::~CRedShapeDecorator()
{

}

void CRedShapeDecorator::Draw()
{
	m_pDecoratedShape->Draw();
	SetRedBorder(m_pDecoratedShape);
}

void CRedShapeDecorator::SetRedBorder(IShape* pShape)
{
	printf("Border Color: Red\n");
}