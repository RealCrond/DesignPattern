
#include "shapefactory.h"

CIRCLEMAP CShapeFactory::m_mapCirle;

CShapeFactory::CShapeFactory()
{

}

CShapeFactory::~CShapeFactory()
{

}

IShape* CShapeFactory::GetCircle(char* color)
{
	CIRCLEMAP::iterator iter = m_mapCirle.begin();
	bool bExist = false;
	for ( ; iter != m_mapCirle.end(); iter++ )
	{
		if ( !strcmp(color,iter->first))
		{
			bExist = true;
			break;
		}
	}

	if ( bExist )
	{
		return iter->second;
	}
	else
	{
		IShape* pRet = new CCircle(color);
		return pRet;
	}
}