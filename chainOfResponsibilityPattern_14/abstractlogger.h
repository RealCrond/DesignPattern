
#pragma once

#include <iostream>

class CAbstractLogger
{
public:
	CAbstractLogger();
	~CAbstractLogger();

	void SetNextLogger(CAbstractLogger* nextLogger);
	void LogMessage(int level, char* msg);

	static int mSt_nInfo;
	static int mSt_nDebug;
	static int mSt_nError;

protected:
	int m_nLevel;
	CAbstractLogger* m_pNextLogger;

	virtual void Write(char* msg){};


};