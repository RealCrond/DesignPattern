#include "shapefactory.h"

CShapeFactory::CShapeFactory()
{

}

CShapeFactory::~CShapeFactory()
{

}

CShapeIterface* CShapeFactory::Getshape(int shapeType)
{
	switch (shapeType)
	{
	case emCircle:
		return new CCircle();
		break;
	case emSquare:
		return new CSquare();
		break;
	case emRectangle:
		return new CRectangle();
		break;
	default:
		break;

	}
}