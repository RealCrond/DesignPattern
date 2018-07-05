
#pragma once
#include "mediaplayer.h"
#include "advancemediaplayer.h"
#include "mp4player.h"
#include "vlcplayer.h"
#include "aviplayer.h"

enum MEDIATYPE
{
	emMp3,
	emMp4,
	emVlc,
	emAvi,
};

class CMediaAdapter : public CMediaPlayer
{
public:
	CMediaAdapter();
	~CMediaAdapter();

	void MediaAdapter();
	void Play(int mediaType,char* fileName);


private:
	CAdvanceMediaPlayer* m_pAdvanceMediaPlayer;
};