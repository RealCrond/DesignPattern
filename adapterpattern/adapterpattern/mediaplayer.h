
#pragma once

class CMediaPlayer
{
public:
	CMediaPlayer(){};
	virtual ~CMediaPlayer(){};

	virtual void Play(int mediaType,char* fileName) = 0;

};