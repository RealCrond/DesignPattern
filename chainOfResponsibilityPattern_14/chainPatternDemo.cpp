/*****************************************************************************
ģ����      : ������ģʽ��Chain of Responsibility Pattern��
�ļ���      : 
����ļ�    : 
�ļ�ʵ�ֹ���: 
Ӧ�ó���	��1���ж��������Դ���ͬһ�����󣬾����ĸ�������������������ʱ���Զ�ȷ���� 
			  2���ڲ���ȷָ�������ߵ�����£����������е�һ���ύһ������ 
			  3���ɶ�ָ̬��һ�����������
����        : Herman
�汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��      �汾        �޸���      �޸�����
2018/07/05  1.0         Herman         �½�
******************************************************************************/

#include <iostream>
#include "consolelogger.h"
#include "errorlogger.h"
#include "filelogger.h"

CAbstractLogger* GetChainOfLoggers()
{
	CAbstractLogger* pErrorLogger = new CErrorLogger(CAbstractLogger::mSt_nError);
	CAbstractLogger* pFileLogger = new CFileLogger(CAbstractLogger::mSt_nInfo);
	CAbstractLogger* pConsoleLogger = new CConsoleLogger(CAbstractLogger::mSt_nDebug);

	pErrorLogger->SetNextLogger(pFileLogger);
	pFileLogger->SetNextLogger(pConsoleLogger);

	return pErrorLogger;
}

int main(int argc,char* argv[])
{

	CAbstractLogger* pAbstractLogger = GetChainOfLoggers();

	pAbstractLogger->LogMessage(CAbstractLogger::mSt_nInfo,"This is an information!");
	pAbstractLogger->LogMessage(CAbstractLogger::mSt_nDebug,"This is an debug level information!");
	pAbstractLogger->LogMessage(CAbstractLogger::mSt_nError,"This is an error information!");

	char a;
	a =  getchar();
}