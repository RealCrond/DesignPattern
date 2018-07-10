/*****************************************************************************
模块名      : 解释器模式（Interpreter Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、可以将一个需要解释执行的语言中的句子表示为一个抽象语法树。 
			  2、一些重复出现的问题可以用一种简单的语言来进行表达。 
			  3、一个简单语法需要解释的场景。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "cterminalexpression.h"
#include "candexpression.h"
#include "corexpression.h"

IExpression* GetMaleExpression()
{
	IExpression* robert = new CTerminalExpression("Robert");
	IExpression* john = new CTerminalExpression("John");
	return new COrExpression(robert, john);  
}

IExpression* GetMarriedWomanExpression()
{
	IExpression* julie = new CTerminalExpression("Julie");
	IExpression* married = new CTerminalExpression("Married");
	return new CAndExpression(julie, married);  
}



int main(int argc,char* argv[])
{

	IExpression* isMale = GetMaleExpression();
	IExpression* isMarriedWoman = GetMarriedWomanExpression();

	printf("John is male?  %d\n",isMale->Interpret("John"));

	printf("Julie is a married woman?  %d\n",isMarriedWoman->Interpret("Married Julie"));

	char a;
	a = getchar();
}