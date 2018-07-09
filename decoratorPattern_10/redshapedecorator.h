
#pragma once

#include "shapedecorator.h"
 
class CRedShapeDecorator : public CShapeDecorator
{
public:
	CRedShapeDecorator();
	~CRedShapeDecorator();

	CRedShapeDecorator(IShape* pShape);

	void Draw();

private:
	void SetRedBorder(IShape* pShape);

};