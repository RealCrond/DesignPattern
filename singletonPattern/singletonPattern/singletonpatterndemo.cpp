/*****************************************************************************
 ģ����      : Factory Pattern
 �ļ���      : 
 ����ļ�    : 
 �ļ�ʵ�ֹ���: 
 Ӧ�ó���	 ��1��Ҫ������Ψһ���кš� 
	           2��WEB �еļ�����������ÿ��ˢ�¶������ݿ����һ�Σ��õ����Ȼ��������� 
			   3��������һ��������Ҫ���ĵ���Դ���࣬���� I/O �����ݿ�����ӵȡ�
 ����        : Herman
 �汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 �޸ļ�¼:
 ��  ��      �汾        �޸���      �޸�����
 2018/07/05  1.0         Herman         �½�
 ******************************************************************************/


#ifdef _WIN32
#include "windows.h"
#endif

#include "singleobject.h"

int main(int argc,char* argv[])
{
	//SingleObject* pSingleObject = new SingleObject();   //�޷����� private ��ԱSingleObject::SingleObject()
	SingleObject* pSingleObject = SingleObject::GetInstance();
	pSingleObject->ShowMsg();

	while(1)
	{
		Sleep(500);
	}
}