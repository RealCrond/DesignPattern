
#pragma once
#include "observer.h"

class CHexaObserver : public CObserver
{
public:
	CHexaObserver( CSubject& subject );
	~CHexaObserver();

	void Update();
};