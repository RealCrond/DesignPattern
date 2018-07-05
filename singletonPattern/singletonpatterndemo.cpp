/*****************************************************************************
 模块名      : Factory Pattern
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：1、要求生产唯一序列号。 
	           2、WEB 中的计数器，不用每次刷新都在数据库里加一次，用单例先缓存起来。 
			   3、创建的一个对象需要消耗的资源过多，比如 I/O 与数据库的连接等。
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
 ******************************************************************************/


#ifdef _WIN32
#include "windows.h"
#endif

#include "singleobject.h"

int main(int argc,char* argv[])
{
	//SingleObject* pSingleObject = new SingleObject();   //无法访问 private 成员SingleObject::SingleObject()
	SingleObject* pSingleObject = SingleObject::GetInstance();
	pSingleObject->ShowMsg();

	while(1)
	{
		Sleep(500);
	}
}