#pragma once
#include "advancemediaplayer.h"
#include <iostream>
using namespace std;

class CVlcPlayer : public CAdvanceMediaPlayer
{
public:
	CVlcPlayer();
	~CVlcPlayer();

	void PlayVlc(char* fileName);
	void PlayAvi(char* fileName){};
	void PlayMp4(char* fileName){};
};