/*****************************************************************************
模块名      : 策略模式（Strategy Pattern )
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、如果在一个系统里面有许多类，它们之间的区别仅在于它们的行为，那么使用策略模式可以动态地让一个对象在许多行为中选择一种行为。 
              2、一个系统需要动态地在几种算法中选择一种。 
			  3、如果一个对象有很多的行为，如果不用恰当的模式，这些行为就只好使用多重的条件选择语句来实现。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "CContext.h"
#include "COperationAdd.h"
#include "COperationMultiply.h"
#include "COperationSubstract.h"

int main(int argc,char* argv[])
{

	CContext* context = new CContext(new COperationAdd());    
	printf("10 + 5 = %d\n" ,context->ExecuteStrategy(10, 5));

	context = new CContext(new COperationSubstract());      
	printf("10 - 5 = %d\n" , context->ExecuteStrategy(10, 5));

	context = new CContext(new COperationMultiply());    
	printf("10 * 5 = %d\n" , context->ExecuteStrategy(10, 5));

	char a;
	a = getchar();
}