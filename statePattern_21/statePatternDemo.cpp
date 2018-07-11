/*****************************************************************************
模块名      : 状态模式（State Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、行为随状态改变而改变的场景。 
			  2、条件、分支语句的代替者。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
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