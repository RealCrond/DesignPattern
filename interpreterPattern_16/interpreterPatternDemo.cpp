/*****************************************************************************
ģ����      : ������ģʽ��Interpreter Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1�����Խ�һ����Ҫ����ִ�е������еľ��ӱ�ʾΪһ�������﷨���� 
			  2��һЩ�ظ����ֵ����������һ�ּ򵥵����������б�� 
			  3��һ�����﷨��Ҫ���͵ĳ�����
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
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