/*****************************************************************************
ģ����      : ״̬ģʽ��State Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1����Ϊ��״̬�ı���ı�ĳ����� 
			  2����������֧���Ĵ����ߡ�
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "CContext.h"
#include "CStartState.h"
#include "CStopState.h"

int main(int argc,char* argv[])
{
	CContext* context = new CContext();
	
	CStartState* startState = new CStartState();
	startState->DoAction(context);
	printf("%s\n",context->GetState()->ToString());

	CStopState*  stopState  = new CStopState();
	stopState->DoAction(context);
	printf("%s\n",context->GetState()->ToString());

	char a;
	a = getchar();
}