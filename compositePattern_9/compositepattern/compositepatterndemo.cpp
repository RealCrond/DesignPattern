/*****************************************************************************
 ģ����      : ���ģʽ��Composite Pattern��
 �ļ���      : 
 ����ļ�    : 
 �ļ�ʵ�ֹ���: 
 Ӧ�ó���	 �����֡����峡���������β˵����ļ����ļ��еĹ�����
 ����        : Herman
 �汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 �޸ļ�¼:
 ��  ��      �汾        �޸���      �޸�����
 2018/07/05  1.0         Herman         �½�
 ******************************************************************************/
#include "employee.h"
#include <Windows.h>


int main(int argc,char* argv[])
{
	CEmployee* CEO = new CEmployee("John","CEO", 30000);

	CEmployee* headSales = new CEmployee("Robert","Head Sales", 20000);

	CEmployee* headMarketing = new CEmployee("Michel","Head Marketing", 20000);

	CEmployee* clerk1 = new CEmployee("Laura","Marketing", 10000);
	CEmployee* clerk2 = new CEmployee("Bob","Marketing", 10000);

	CEmployee* salesExecutive1 = new CEmployee("Richard","Sales", 10000);
	CEmployee* salesExecutive2 = new CEmployee("Rob","Sales", 10000);

	CEmployee* temp = new CEmployee("Temp","Temp",6000);

	clerk1->Add(*temp);

	headSales->Add(*salesExecutive1);
	headSales->Add(*salesExecutive2);

	headMarketing->Add(*clerk1);
	headMarketing->Add(*clerk2);

	CEO->Add(*headSales);
	CEO->Add(*headMarketing);

	//headSales->PrintSubordinates();
	//headMarketing->PrintSubordinates();
	CEO->PrintSubordinates();

	char a;
	a = getchar();
}