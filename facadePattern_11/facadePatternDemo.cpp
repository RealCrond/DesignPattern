/*****************************************************************************
 ģ����      : ���ģʽ��Facade Pattern )
 �ļ���      : 
 ����ļ�    : 
 �ļ�ʵ�ֹ���: 
 Ӧ�ó���	 ��1��Ϊ���ӵ�ģ�����ϵͳ�ṩ�����ʵ�ģ�顣 
               2����ϵͳ��Զ����� 
			   3��Ԥ����ˮƽ��Ա�����ķ��ա� 
 ����        : Herman
 �汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 �޸ļ�¼:
 ��  ��      �汾        �޸���      �޸�����
 2018/07/05  1.0         Herman         �½�
 ******************************************************************************/

#include <iostream>
#include "shapemaker.h"

int main(int argc,char* argv[])
{
	
	CShapeMaker* pShapeMaker = new CShapeMaker();

	pShapeMaker->DrawCircle();
	pShapeMaker->DrawRectangle();
	pShapeMaker->DrawSquare();

	char a;
	a = getchar();
}