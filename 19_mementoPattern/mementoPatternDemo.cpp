/*****************************************************************************
ģ����      : ����¼ģʽ��Memento Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1����Ҫ����/�ָ����ݵ����״̬������ 
			  2���ṩһ���ɻع��Ĳ�����
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "COriginator.h"
#include "CCareTaker.h"

int main(int argc,char* argv[])
{

	COriginator* originator = new COriginator();
	CCareTaker* careTaker = new CCareTaker();
	originator->SetState("State #1");
	originator->SetState("State #2");
	careTaker->Add(originator->SaveStateToMemento());
	originator->SetState("State #3");
	careTaker->Add(originator->SaveStateToMemento());
	originator->SetState("State #4");
	careTaker->Add(originator->SaveStateToMemento());

	printf("Current State: %s\n", originator->GetState());
	originator->GetStateFromMemento(careTaker->Get(0));
	printf("First saved State: %s\n", originator->GetState());
	originator->GetStateFromMemento(careTaker->Get(1));
	printf("Second saved State: %s\n", originator->GetState());

	char a;
	a = getchar();
}