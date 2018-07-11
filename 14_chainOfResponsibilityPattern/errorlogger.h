#pragma once
#include "abstractlogger.h"

class CErrorLogger : public CAbstractLogger
{
public:
	CErrorLogger(int level);
	~CErrorLogger();

protected:
	void Write(char* msg);
};