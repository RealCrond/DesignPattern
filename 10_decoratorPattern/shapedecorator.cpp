
#include "shapedecorator.h"

CShapeDecorator::CShapeDecorator(IShape* pDecoratedShape)
{
	this->m_pDecoratedShape = pDecoratedShape;
}

CShapeDecorator::~CShapeDecorator()
{

}

void CShapeDecorator::Draw()
{
	m_pDecoratedShape->Draw();
}
