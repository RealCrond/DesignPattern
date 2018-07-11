#pragma once

#include <map>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
#include "square.h"
using namespace std;

typedef map<const char*,CShape> MAPSHAPE;

class CShapeCache
{
public:
	CShapeCache();
	~CShapeCache();

	CShape GetShape(char* shapeId);
	void LoadCache();

private:
	MAPSHAPE m_shapeMap;
};