
#include "shapecache.h"

CShapeCache::CShapeCache()
{

}

CShapeCache::~CShapeCache()
{

}

CShape CShapeCache::GetShape(char* shapeId)
{
	CShape shapeTmp;
	for ( MAPSHAPE::iterator iter = m_shapeMap.begin(); iter != m_shapeMap.end(); iter++ )
	{
		if ( !strcmp(shapeId, iter->first) )
		{
			shapeTmp = iter->second;
			break;
		}	
	}
	return shapeTmp;

}

void CShapeCache::LoadCache()
{
	CCircle circle;
	circle.SetId("circle");
	m_shapeMap.insert(make_pair("circle",circle));

	CSquare square;
	square.SetId("square");
	m_shapeMap.insert(make_pair("square",square));

	CRectangle rectangle;
	rectangle.SetId("rectangle");
	m_shapeMap.insert(make_pair("rectangle",rectangle));

}