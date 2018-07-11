
#pragma once
#include "observer.h"

class CBinaryObserver : public CObserver
{
public:
	CBinaryObserver( CSubject& subject );
	~CBinaryObserver();

	void Update();
};