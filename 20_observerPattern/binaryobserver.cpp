
#include "binaryobserver.h"

CBinaryObserver::CBinaryObserver(  CSubject& subject  )
{
	m_pSubject = &subject;
	m_pSubject->Attach(this);
}

CBinaryObserver::~CBinaryObserver()
{

}

void CBinaryObserver::Update()
{
	printf("Binary string: %d \n",m_pSubject->GetState());
}