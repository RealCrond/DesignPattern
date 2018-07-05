#pragma once

#include "circleshape.h"
#include "squareshape.h"
#include "rectangleshape.h"

enum shapeType
{
	emCircle,
	emSquare,
	emRectangle,
};

class CShapeFactory
{
public:
	CShapeFactory();
	~CShapeFactory();

public:
	CShapeIterface* Getshape(int shapeType);

};