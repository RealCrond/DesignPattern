/*****************************************************************************
 ģ����      : Adapter Pattern
 �ļ���      : 
 ����ļ�    : 
 �ļ�ʵ�ֹ���: 
 Ӧ�ó���	 ���ж������޸�һ���������е�ϵͳ�Ľӿڣ���ʱӦ�ÿ���ʹ��������ģʽ��
 ����        : Herman
 �汾        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 �޸ļ�¼:
 ��  ��      �汾        �޸���      �޸�����
 2018/07/05  1.0         Herman         �½�
 ******************************************************************************/
#include <Windows.h>
#include "audioplayer.h"
#include "mediaadapter.h"

int main(int argc,char* argv[])
{

	CAudioPlayer* pAudioPlayer = new CAudioPlayer();
	pAudioPlayer->Play(emMp3,"mp3File");
	pAudioPlayer->Play(emMp4,"mp3File");
	pAudioPlayer->Play(emVlc,"mp3File");
	pAudioPlayer->Play(emAvi,"mp3File");
	pAudioPlayer->Play(5,"invalidFile");
	
	char a;
	a = getchar();

}