#pragma once

#include "shapeIterface.h"

class CRectangle : public CShapeIterface
{
public:
	CRectangle();
	~CRectangle();

public:
	void Draw();

};