/*****************************************************************************
 模块名      : 装饰器模式（Decorator Pattern）
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：1、扩展一个类的功能。 
			   2、动态增加功能，动态撤销。 
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
 ******************************************************************************/

#include <iostream>
#include "ishape.h"
#include "circle.h"
#include "rectangle.h"
#include "redshapedecorator.h"

int main(int argc,char* argv[])
{
	IShape* circle = new CCircle();

	IShape* redCircle = new CRedShapeDecorator(new CCircle());
	IShape* redRectangle = new CRedShapeDecorator(new CRectangle());

	printf("\n[Circle with normal border:]\n");
	circle->Draw();

	printf("\n[Circle of red border:]\n");
	redCircle->Draw();

	printf("\n[Rectangle of red border:]\n");
	redRectangle->Draw();


	char a;
	a = getchar();
}