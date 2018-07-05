
#pragma once
#include "mediaplayer.h"
#include "mediaadapter.h"


class CAudioPlayer : public CMediaPlayer
{
public:
	CAudioPlayer();
	~CAudioPlayer();

	void Play(int mediaType,char* fileName);

private:
	CMediaAdapter* m_pMediaAdapter;
};