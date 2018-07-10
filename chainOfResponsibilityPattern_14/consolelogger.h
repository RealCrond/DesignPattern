
#pragma once
#include "abstractlogger.h"

class CConsoleLogger : public CAbstractLogger
{
public:
	CConsoleLogger(int level);
	~CConsoleLogger();

protected:
	void Write(char* msg);

};