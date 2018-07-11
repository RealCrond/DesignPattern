/*****************************************************************************
 ģ����      : װ����ģʽ��Decorator Pattern��
 �ļ���      : 
 ����ļ�    : 
 �ļ�ʵ�ֹ���: 
 Ӧ�ó���	 ��1����չһ����Ĺ��ܡ� 
			   2����̬���ӹ��ܣ���̬������ 
 ����        : Herman
 �汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 �޸ļ�¼:
 ��  ��      �汾        �޸���      �޸�����
 2018/07/05  1.0         Herman         �½�
 ******************************************************************************/

#include <iostream>
#include "ishape.h"
#include "circle.h"
#include "rectangle.h"
#include "redshapedecorator.h"

int main(int argc,char* argv[])
{
	IShape* circle = new CCircle();

	IShape* redCircle = new CRedShapeDecorator(new CCircle());
	IShape* redRectangle = new CRedShapeDecorator(new CRectangle());

	printf("\n[Circle with normal border:]\n");
	circle->Draw();

	printf("\n[Circle of red border:]\n");
	redCircle->Draw();

	printf("\n[Rectangle of red border:]\n");
	redRectangle->Draw();


	char a;
	a = getchar();
}