/*****************************************************************************
 ģ����      : Factory Pattern
 �ļ���      : 
 ����ļ�    : 
 �ļ�ʵ�ֹ���: 
 Ӧ�ó���	 ��1����־��¼������¼���ܼ�¼������Ӳ�̡�ϵͳ�¼���Զ�̷������ȣ��û�����ѡ���¼��־��ʲô�ط��� 
               2�����ݿ���ʣ����û���֪�����ϵͳ������һ�����ݿ⣬�Լ����ݿ�����б仯ʱ�� 
			   3�����һ�����ӷ������Ŀ�ܣ���Ҫ����Э�飬"POP3"��"IMAP"��"HTTP"�����԰���������Ϊ��Ʒ�࣬��ͬʵ��һ���ӿڡ�
 ����        : Herman
 �汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 �޸ļ�¼:
 ��  ��      �汾        �޸���      �޸�����
 2018/07/05  1.0         Herman         �½�
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