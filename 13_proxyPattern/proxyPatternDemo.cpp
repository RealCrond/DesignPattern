/*****************************************************************************
模块名      : 代理模式（Proxy Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：按职责来划分，通常有以下使用场景： 
				1、远程代理。 
				2、虚拟代理。 
				3、Copy-on-Write 代理。 
				4、保护（Protect or Access）代理。 
				5、Cache代理。 
				6、防火墙（Firewall）代理。 
				7、同步化（Synchronization）代理。 
				8、智能引用（Smart Reference）代理。 
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "realimage.h"
#include "proxyimage.h"

int main(int argc,char* argv)
{
	IImage* pImage = new CProxyImage("test_10mb.jpg");

	//图像将从磁盘加载
	pImage->Display();

	printf("\n\n");
	//图像将无法从磁盘加载
	pImage->Display();

	char a;
	a =getchar();
}