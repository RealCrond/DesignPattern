/*****************************************************************************
模块名      : 空对象模式（Null Object Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
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