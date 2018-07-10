/*****************************************************************************
ģ����      : ��Ԫģʽ��Flyweight Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1��ϵͳ�д������ƶ��� 
              2����Ҫ����صĳ����� 
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
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