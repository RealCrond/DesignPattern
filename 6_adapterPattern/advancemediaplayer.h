
#pragma once

class CAdvanceMediaPlayer
{
public:
	CAdvanceMediaPlayer(){};
	virtual ~CAdvanceMediaPlayer(){};

public:
	virtual void PlayVlc(char* fileName) = 0;
	virtual void PlayMp4(char* fileName) = 0;
	virtual void PlayAvi(char* fileName) = 0;
};