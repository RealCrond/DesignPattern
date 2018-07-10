
#include "realimage.h"

CRealImage::CRealImage(char* szFileName)
{
	strcpy(m_szFileName,szFileName);
	LoadFromDisk(szFileName);
}

CRealImage::~CRealImage()
{

}

void CRealImage::Display()
{
	printf("Displaying %s \n",m_szFileName);
}

void CRealImage::LoadFromDisk(char* szFileName)
{
	printf("Loading %s\n",szFileName);
}