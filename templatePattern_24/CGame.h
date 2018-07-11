
#pragma once
#include <iostream>

class CGame
{
public:
	CGame();
	~CGame();

	virtual void Initialize(){};
	virtual void StartPlay(){};
	virtual void EndPlay(){};

	void Play();

};