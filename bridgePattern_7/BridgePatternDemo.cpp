/*****************************************************************************
ģ����      : �Ž�ģʽ��Bridge Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	 ��1�����һ��ϵͳ��Ҫ�ڹ����ĳ��󻯽�ɫ�;��廯��ɫ֮�����Ӹ��������ԣ��������������֮�佨����̬�ļ̳���ϵ��ͨ���Ž�ģʽ����ʹ�����ڳ���㽨��һ��������ϵ�� 
2��������Щ��ϣ��ʹ�ü̳л���Ϊ���μ̳е���ϵͳ��ĸ����������ӵ�ϵͳ���Ž�ģʽ��Ϊ���á� 
3��һ����������������仯��ά�ȣ���������ά�ȶ���Ҫ������չ�� 
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "shape.h"
#include "circle.h"
#include "redcircle.h"
#include "greencircle.h"

int main(int argc,char* argv[])
{
	CShape* pRedCircle = new CCircle(100,100,10, new CRedCircle());
	CShape* pGreenCircle = new CCircle(100,100,10,new CGreenCircle());

	pRedCircle->Draw();
	pGreenCircle->Draw();

	char a;
	a = getchar();
}