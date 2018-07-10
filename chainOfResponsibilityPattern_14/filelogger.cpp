
#include "filelogger.h"

CFileLogger::CFileLogger(int level)
{
	m_nLevel = level;
}

CFileLogger::~CFileLogger()
{

}

void CFileLogger::Write(char* msg)
{
	printf("File::Logger: %s\n",msg);
}