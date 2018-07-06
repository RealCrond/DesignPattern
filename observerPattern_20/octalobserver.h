
#pragma once
#include "observer.h"

class COctalObserver : public CObserver
{
public:
	COctalObserver( CSubject& subject );
	~COctalObserver();

	void Update();
};