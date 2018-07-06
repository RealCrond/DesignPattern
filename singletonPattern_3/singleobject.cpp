
#include "singleobject.h"
#include <cstdlib>
#include <iostream>
using namespace std;

SingleObject* SingleObject::m_pSingleObject = NULL;

SingleObject::~SingleObject()
{
	delete m_pSingleObject;
	m_pSingleObject = NULL;
}

SingleObject* SingleObject::GetInstance()
{
	if ( NULL == m_pSingleObject )
	{
		return new SingleObject();
	}
	return m_pSingleObject;
}

void SingleObject::ShowMsg()
{
	cout<<"This is SingletonPattern Demo!"<<endl;
}