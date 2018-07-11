
#pragma once
#include <iostream>

class CShape
{
public:
	CShape();
	virtual ~CShape();

	CShape operator=(CShape shape);

	char* GetType();
	char* GetId();
	void SetId(char* szId);

	virtual void Draw(){};

protected:
	char m_szId[32];
	char m_szType[32];

};