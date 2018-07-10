/*****************************************************************************
模块名      : 责任链模式（Chain of Responsibility Pattern）
文件名      : 
相关文件    : 
文件实现功能: 
应用场景	：1、有多个对象可以处理同一个请求，具体哪个对象处理该请求由运行时刻自动确定。 
			  2、在不明确指定接收者的情况下，向多个对象中的一个提交一个请求。 
			  3、可动态指定一组对象处理请求。
作者        : Herman
版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
-----------------------------------------------------------------------------
修改记录:
日  期      版本        修改人      修改内容
2018/07/05  1.0         Herman         新建
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