
#include "mediaadapter.h"

CMediaAdapter::CMediaAdapter()
{

};

CMediaAdapter::~CMediaAdapter()
{

}

void CMediaAdapter::MediaAdapter()
{

}

void CMediaAdapter::Play(int mediaType,char* fileName)
{
	//if ( m_pAdvanceMediaPlayer != NULL )
	//{
	//	delete m_pAdvanceMediaPlayer;
	//	m_pAdvanceMediaPlayer = NULL;
	//}
	

	switch(mediaType)
	{
	case emMp4:
		m_pAdvanceMediaPlayer = new CMp4Player();
		m_pAdvanceMediaPlayer->PlayMp4(fileName);
		break;
	case emVlc:
		m_pAdvanceMediaPlayer = new CVlcPlayer();
		m_pAdvanceMediaPlayer->PlayVlc(fileName);
		break;
	case emAvi:
		m_pAdvanceMediaPlayer = new CAviPlayer();
		m_pAdvanceMediaPlayer->PlayAvi(fileName);
		break;
	default:
		break;
	}
}