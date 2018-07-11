
#pragma once
#include "CGame.h"

class CFootball : public CGame
{
public:
	CFootball();
	~CFootball();

	void Initialize();
	void StartPlay();
	void EndPlay();


};