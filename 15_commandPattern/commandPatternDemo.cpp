/*****************************************************************************
模块名      : 命令模式（Command Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：认为是命令的地方都可以使用命令模式，比如： 1、GUI 中每一个按钮都是一条命令。 2、模拟 CMD。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
******************************************************************************/

#include <iostream>
#include "cstock.h"
#include "cbuystock.h"
#include "csellstock.h"
#include "cbroker.h"

int main(int argc,char* argv[])
{
	
	CStock* abcStock = new CStock();

	CBuyStock* buyStockOrder = new CBuyStock(abcStock);
	CSellStock* sellStockOrder = new CSellStock(abcStock);

	CBroker* broker = new CBroker();
	broker->TakeOrder(buyStockOrder);
	broker->TakeOrder(sellStockOrder);

	broker->PlaceOrders();

	char a;
	a = getchar();
}