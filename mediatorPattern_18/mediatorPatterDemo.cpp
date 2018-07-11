/*****************************************************************************
模块名      : 中介者模式（Mediator Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、系统中对象之间存在比较复杂的引用关系，导致它们之间的依赖关系结构混乱而且难以复用该对象。 
              2、想通过一个中间类来封装多个类中的行为，而又不想生成太多的子类。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "CUser.h"

int main(int argc,char* argv[])
{

	CUser* robert = new CUser("Robert");
	CUser* john = new CUser("John");

	robert->SendMessage("Hi! John!");
	john->SendMessage("Hello! Robert!");

	char a;
	a = getchar();
}