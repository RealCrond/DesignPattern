/*****************************************************************************
 模块名      : 观察者模式（Observer Pattern）
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：1、一个抽象模型有两个方面，其中一个方面依赖于另一个方面。将这些方面封装在独立的对象中使它们可以各自独立地改变和复用。
			   2、一个对象的改变将导致其他一个或多个对象也发生改变，而不知道具体有多少对象将发生改变，可以降低对象之间的耦合度。
               3、一个对象必须通知其他对象，而并不知道这些对象是谁。
               4、需要在系统中创建一个触发链，A对象的行为将影响B对象，B对象的行为将影响C对象……，可以使用观察者模式创建一种链式触发机制。
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
 ******************************************************************************/
#include "observer.h"
#include "subject.h"
#include "binaryobserver.h"
#include "octalobserver.h"
#include "hexaobserver.h"
#include <iostream>

int main(int argc,char* argv[])
{
	CSubject subject;
	subject.SetState(20);

	CHexaObserver *hexaObserver = new CHexaObserver(subject);
	COctalObserver *octalObserver = new COctalObserver(subject);
	CBinaryObserver *binaryObserver = new CBinaryObserver(subject);

	printf("First state change: 15 \n");
	subject.SetState(15);

	printf("\nSecond state change: 9\n");
	subject.SetState(9);

	char a;
	a = getchar();
}