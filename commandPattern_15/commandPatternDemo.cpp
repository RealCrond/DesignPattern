/*****************************************************************************
ģ����      : ����ģʽ��Command Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	����Ϊ������ĵط�������ʹ������ģʽ�����磺 1��GUI ��ÿһ����ť����һ����� 2��ģ�� CMD��
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
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