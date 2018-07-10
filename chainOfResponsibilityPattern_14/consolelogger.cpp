
#include "consolelogger.h"

CConsoleLogger::CConsoleLogger(int level)
{
	m_nLevel = level;
}

CConsoleLogger::~CConsoleLogger()
{

}

void CConsoleLogger::Write(char* msg)
{
	printf("Standard Console::Logger: %s\n",msg);
}