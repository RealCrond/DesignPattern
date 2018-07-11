
#pragma once
#include "ishape.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"

class CShapeMaker
{
public:
	CShapeMaker();
	~CShapeMaker();

	void DrawCircle();
	void DrawRectangle();
	void DrawSquare();

private:
	IShape* m_pCircle;
	IShape* m_pRectangle;
	IShape* m_pSquare;

};