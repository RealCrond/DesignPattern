/*****************************************************************************
模块名      : 访问者模式（Visitor Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、对象结构中对象对应的类很少改变，但经常需要在此对象结构上定义新的操作。 
              2、需要对一个对象结构中的对象进行很多不同的并且不相关的操作，而需要避免让这些操作"污染"这些对象的类，也不希望在增加新操作时修改这些类。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "IComputerPart.h"
#include "CComputerPartDisplayVisitor.h"
#include "CComputer.h"
#include "CMouse.h"
#include "CKeyboard.h"
#include "CMonitor.h"

int main(int argc,char* argv[])
{

	IComputerPart* computer = new CComputer();
	computer->Accept(new CComputerPartDisplayVisitor());

	char a;
	a = getchar();
}