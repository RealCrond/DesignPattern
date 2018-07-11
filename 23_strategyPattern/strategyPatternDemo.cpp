/*****************************************************************************
ģ����      : ����ģʽ��Strategy Pattern )
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1�������һ��ϵͳ�����������࣬����֮���������������ǵ���Ϊ����ôʹ�ò���ģʽ���Զ�̬����һ��������������Ϊ��ѡ��һ����Ϊ�� 
              2��һ��ϵͳ��Ҫ��̬���ڼ����㷨��ѡ��һ�֡� 
			  3�����һ�������кܶ����Ϊ���������ǡ����ģʽ����Щ��Ϊ��ֻ��ʹ�ö��ص�����ѡ�������ʵ�֡�
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
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