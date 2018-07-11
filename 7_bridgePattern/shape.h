
#pragma once
#include "idrawapi.h"


class CShape
{
public:
	CShape();
	~CShape();

protected: 
	CShape(IDrawApi* drawApi)
	{
		this->m_pIDrawApi = drawApi;
	};

protected:
	IDrawApi* m_pIDrawApi;

public:
	virtual void Draw(){};

};