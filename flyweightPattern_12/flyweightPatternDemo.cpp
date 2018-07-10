/*****************************************************************************
模块名      : 享元模式（Flyweight Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、系统有大量相似对象。 
              2、需要缓冲池的场景。 
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/
#include "shapefactory.h"
#include <math.h>
#include "stdlib.h"

char* color[] ={ "Red", "Green", "Blue", "White", "Black" };

char* GetRadomColor()
{
	int a = rand()%5;
	return color[rand()%5];
}

int GetRandomX()
{
	return rand()%50 ;
}

int GetRandomY()
{
	return rand()%50;
}

int GetRandomRadius()
{
	return rand()%10;
}

int main(int argc,char* argv[])
{

	for ( int nIdex = 0; nIdex<30; ++nIdex )
	{
		char* temp = GetRadomColor();
		CCircle* pCircle = (CCircle*)CShapeFactory::GetCircle(GetRadomColor());
		if ( pCircle == NULL)
		{
			return 0;
		}
		pCircle->SetX(GetRandomX());
		pCircle->SetY(GetRandomY());
		pCircle->SetRadius(GetRandomRadius());
		pCircle->Draw();

	}

	char a;
	a = getchar();
}