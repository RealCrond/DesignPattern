/*****************************************************************************
ģ����      : ������ģʽ��Visitor Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1������ṹ�ж����Ӧ������ٸı䣬��������Ҫ�ڴ˶���ṹ�϶����µĲ����� 
              2����Ҫ��һ������ṹ�еĶ�����кܶ಻ͬ�Ĳ��Ҳ���صĲ���������Ҫ��������Щ����"��Ⱦ"��Щ������࣬Ҳ��ϣ���������²���ʱ�޸���Щ�ࡣ
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
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