
#include "proxyimage.h"

CProxyImage::CProxyImage(char* szFileName)
	: m_pRealImage(NULL)
{
	strcpy(m_szFileName,szFileName);
}


CProxyImage::~CProxyImage()
{

}

void CProxyImage::Display()
{
	if ( m_pRealImage == NULL )
	{
		m_pRealImage = new CRealImage(m_szFileName);
	}
	m_pRealImage->Display();
}

