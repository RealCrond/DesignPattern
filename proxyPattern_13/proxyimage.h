
#pragma once
#include "realimage.h"

class CProxyImage : public IImage
{
public:
	CProxyImage(char* szFileName);
	~CProxyImage();

	void Display();

private:
	CRealImage* m_pRealImage;
	char m_szFileName[32];
};