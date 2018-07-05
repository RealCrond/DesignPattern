
#include "audioplayer.h"
#include <iostream>
using namespace std;

CAudioPlayer::CAudioPlayer()
{
	m_pMediaAdapter = new CMediaAdapter();
}

CAudioPlayer::~CAudioPlayer()
{

}

void CAudioPlayer::Play(int mediaType,char* fileName)
{
	switch (mediaType)
	{
	//Ä¬ÈÏ
	case emMp3:
		cout<<"Playing MP3 music!!"<<endl;
		break;
	//¼æÈÝ1
	case emMp4:
		m_pMediaAdapter->Play(emMp4,"mp4File");
		break;
	//¼æÈÝ2
	case emVlc:
		m_pMediaAdapter->Play(emVlc,"vlcFile");
		break;
	//¼æÈÝ3
	case emAvi:
		m_pMediaAdapter->Play(emAvi,"aviFile");
		break;
	//²»¼æÈÝ
	default:
		cout<<"[error]Invalid media file!!!"<<endl;
		break;
	}
	
}