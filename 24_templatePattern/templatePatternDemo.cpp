/*****************************************************************************
模块名      : 模板模式（Template Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、有多个子类共有的方法，且逻辑相同。 
              2、重要的、复杂的方法，可以考虑作为模板方法。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
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