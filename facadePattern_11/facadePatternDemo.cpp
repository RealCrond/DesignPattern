/*****************************************************************************
 模块名      : 外观模式（Facade Pattern )
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：1、为复杂的模块或子系统提供外界访问的模块。 
               2、子系统相对独立。 
			   3、预防低水平人员带来的风险。 
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
 ******************************************************************************/

#include <iostream>
#include "shapemaker.h"

int main(int argc,char* argv[])
{
	
	CShapeMaker* pShapeMaker = new CShapeMaker();

	pShapeMaker->DrawCircle();
	pShapeMaker->DrawRectangle();
	pShapeMaker->DrawSquare();

	char a;
	a = getchar();
}