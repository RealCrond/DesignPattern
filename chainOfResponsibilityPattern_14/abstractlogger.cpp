
#include "abstractlogger.h"

int CAbstractLogger::mSt_nInfo = 1;
int CAbstractLogger::mSt_nDebug = 2;
int CAbstractLogger::mSt_nError = 3;

CAbstractLogger::CAbstractLogger()
	:m_pNextLogger(NULL)
{

}

CAbstractLogger::~CAbstractLogger()
{

}

void CAbstractLogger::SetNextLogger(CAbstractLogger* pNextLogger)
{
	m_pNextLogger = pNextLogger;
}

void CAbstractLogger::LogMessage(int level, char* msg)
{
	if ( m_nLevel <= level )
	{
		Write(msg);
	}

	if ( m_pNextLogger != NULL )
	{
		m_pNextLogger->LogMessage( level, msg );
	}
}

