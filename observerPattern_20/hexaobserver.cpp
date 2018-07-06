
#include "hexaobserver.h"

CHexaObserver::CHexaObserver( CSubject& subject )
{
	m_pSubject = &subject;
	m_pSubject->Attach(this);
}

CHexaObserver::~CHexaObserver()
{

}

void CHexaObserver::Update()
{
	printf("Hex string: %d \n",m_pSubject->GetState());
}