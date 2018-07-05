#pragma once
#include "advancemediaplayer.h"
#include <iostream>
using namespace std;

class CMp4Player : public CAdvanceMediaPlayer
{
public:
	CMp4Player();
	~CMp4Player();

	void PlayMp4(char* fileName);
	void PlayVlc(char* fileName){};
	void PlayAvi(char* fileName){};
};