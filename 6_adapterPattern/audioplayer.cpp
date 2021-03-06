
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
	//Ĭ��
	case emMp3:
		cout<<"Playing MP3 music!!"<<endl;
		break;
	//����1
	case emMp4:
		m_pMediaAdapter->Play(emMp4,"mp4File");
		break;
	//����2
	case emVlc:
		m_pMediaAdapter->Play(emVlc,"vlcFile");
		break;
	//����3
	case emAvi:
		m_pMediaAdapter->Play(emAvi,"aviFile");
		break;
	//������
	default:
		cout<<"[error]Invalid media file!!!"<<endl;
		break;
	}
	
}