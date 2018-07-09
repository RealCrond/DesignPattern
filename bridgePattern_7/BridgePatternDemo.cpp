/*****************************************************************************
模块名      : 桥接模式（Bridge Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	 ：1、如果一个系统需要在构件的抽象化角色和具体化角色之间增加更多的灵活性，避免在两个层次之间建立静态的继承联系，通过桥接模式可以使它们在抽象层建立一个关联关系。 
2、对于那些不希望使用继承或因为多层次继承导致系统类的个数急剧增加的系统，桥接模式尤为适用。 
3、一个类存在两个独立变化的维度，且这两个维度都需要进行扩展。 
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "shape.h"
#include "circle.h"
#include "redcircle.h"
#include "greencircle.h"

int main(int argc,char* argv[])
{
	CShape* pRedCircle = new CCircle(100,100,10, new CRedCircle());
	CShape* pGreenCircle = new CCircle(100,100,10,new CGreenCircle());

	pRedCircle->Draw();
	pGreenCircle->Draw();

	char a;
	a = getchar();
}