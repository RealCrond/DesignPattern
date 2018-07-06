
#pragma once
#include "advancemediaplayer.h"
#include <iostream>
using namespace std;

class CAviPlayer : public CAdvanceMediaPlayer
{
public:
	CAviPlayer();
	~CAviPlayer();

	void PlayAvi(char* fileName);
	void PlayVlc(char* fileName){};
	void PlayMp4(char* fileName){};

};