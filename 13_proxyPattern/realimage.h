
#pragma once

#include "iimage.h"
#include <iostream>

class CRealImage : public IImage
{
public:
	CRealImage(char* szFileName);
	~CRealImage();

	void Display();

private:
	char m_szFileName[32];

	void LoadFromDisk(char* szFileName);

};