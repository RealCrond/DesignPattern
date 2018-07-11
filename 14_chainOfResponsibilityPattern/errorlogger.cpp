
#include "errorlogger.h"

CErrorLogger::CErrorLogger(int level)
{
	m_nLevel = level;
}

CErrorLogger::~CErrorLogger()
{

}

void CErrorLogger::Write(char* msg)
{
	printf("Error Console::Logger: %s\n",msg);
}