/*****************************************************************************
ģ����      : �ն���ģʽ��Null Object Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "CCustomerFactory.h"

int main(int argc,char* argv[])
{

	CAbstractCustomer* customer1 = CCustomerFactory::GetCustomer("Rob");
	CAbstractCustomer* customer2 = CCustomerFactory::GetCustomer("Bob");
	CAbstractCustomer* customer3 = CCustomerFactory::GetCustomer("Julie");
	CAbstractCustomer* customer4 = CCustomerFactory::GetCustomer("Laura");

	printf("Customers:\n");
	printf("%s\n",customer1->GetName());
	printf("%s\n",customer2->GetName());
	printf("%s\n",customer3->GetName());
	printf("%s\n",customer4->GetName());

	char a;
	a = getchar();
}