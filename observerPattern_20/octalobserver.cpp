
#include "octalobserver.h"

COctalObserver::COctalObserver( CSubject& subject )
{
	m_pSubject = &subject;
	m_pSubject->Attach(this);
}

COctalObserver::~COctalObserver()
{

}

void COctalObserver::Update()
{
	printf("Octal string: %d \n",m_pSubject->GetState());
}