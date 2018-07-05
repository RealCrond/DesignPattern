/*****************************************************************************
 模块名      : Factory Pattern
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：1、日志记录器：记录可能记录到本地硬盘、系统事件、远程服务器等，用户可以选择记录日志到什么地方。 
               2、数据库访问，当用户不知道最后系统采用哪一类数据库，以及数据库可能有变化时。 
			   3、设计一个连接服务器的框架，需要三个协议，"POP3"、"IMAP"、"HTTP"，可以把这三个作为产品类，共同实现一个接口。
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
 ******************************************************************************/
#ifdef _WIN32
#include  <windows.h>
#endif

#if defined(_LINUX_) || defined(_ANDROID_)
#include <unistd.h>
#endif

#include "shapefactory.h"

int main(int argc,char* argv[])
{
	CShapeFactory* pShapeFactory = new CShapeFactory();

	CShapeIterface* pShape = new CShapeIterface();
	pShape = pShapeFactory->Getshape(emRectangle);
	pShape->Draw();

	while (1)
	{
#ifdef _WIN32
		Sleep(500);
#endif

#if defined(_LINUX_) || defined(_ANDROID_)
		sleep(500);
#endif
		
	}
}