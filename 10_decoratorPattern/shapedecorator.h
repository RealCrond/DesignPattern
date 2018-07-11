
#pragma once
#include "ishape.h"
#include <iostream>

class CShapeDecorator : public IShape
{
public:
	CShapeDecorator(){};
	CShapeDecorator(IShape* pDecoratedShape);
	~CShapeDecorator();

	void Draw();

protected:
	IShape* m_pDecoratedShape;

};