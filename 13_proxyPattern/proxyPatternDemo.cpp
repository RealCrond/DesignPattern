/*****************************************************************************
ģ����      : ����ģʽ��Proxy Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	����ְ�������֣�ͨ��������ʹ�ó����� 
				1��Զ�̴����� 
				2����������� 
				3��Copy-on-Write ������ 
				4��������Protect or Access�������� 
				5��Cache������ 
				6������ǽ��Firewall�������� 
				7��ͬ������Synchronization�������� 
				8���������ã�Smart Reference�������� 
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "realimage.h"
#include "proxyimage.h"

int main(int argc,char* argv)
{
	IImage* pImage = new CProxyImage("test_10mb.jpg");

	//ͼ�񽫴Ӵ��̼���
	pImage->Display();

	printf("\n\n");
	//ͼ���޷��Ӵ��̼���
	pImage->Display();

	char a;
	a =getchar();
}