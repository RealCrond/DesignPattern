/*****************************************************************************
 模块名      : 组合模式（Composite Pattern）
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：部分、整体场景，如树形菜单，文件、文件夹的管理。
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
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