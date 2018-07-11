
#pragma once

#include "circle.h"
#include <map>

using namespace std;

typedef map<char*,IShape*> CIRCLEMAP;

class CShapeFactory
{
public:
	CShapeFactory();
	~CShapeFactory();

	static IShape* GetCircle(char* color);

private:
	static CIRCLEMAP m_mapCirle;
};