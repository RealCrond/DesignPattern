#include "shape.h"

CShape::CShape()
{

}

CShape::~CShape()
{

}

CShape CShape::operator=(CShape shape)
{
	CShape temp;
	strcpy(m_szId,shape.GetId());
	strcpy(m_szType,shape.GetType());
	return temp;
}

char* CShape::GetType()
{
	return m_szType;
}

char* CShape::GetId()
{
	return m_szId;
}

void CShape::SetId(char* szId)
{
	strcpy(m_szId,szId);
}

