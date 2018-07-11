#pragma once
#include "abstractlogger.h"

class CFileLogger : public CAbstractLogger
{
public:
	CFileLogger(int level);
	~CFileLogger();

protected:
	void Write(char* msg);

};