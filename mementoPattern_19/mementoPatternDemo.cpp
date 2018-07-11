/*****************************************************************************
模块名      : 备忘录模式（Memento Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、需要保存/恢复数据的相关状态场景。 
			  2、提供一个可回滚的操作。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
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