/*****************************************************************************
ģ����      : ģ��ģʽ��Template Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1���ж�����๲�еķ��������߼���ͬ�� 
              2����Ҫ�ġ����ӵķ��������Կ�����Ϊģ�巽����
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "CCircket.h"
#include "CFootball.h"

int main(int argc,char* argv[])
{
	
	CGame* game = new CCircket();
	game->Play();

	getchar();

	game = new CFootball();
	game->Play();  

	char a;
	a = getchar();
}