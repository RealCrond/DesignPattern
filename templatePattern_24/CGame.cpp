
#include "CGame.h"

CGame::CGame()
{

}

CGame::~CGame()
{

}


//ģ��
void CGame::Play()
{
	//��ʼ����Ϸ
	Initialize();

	//��ʼ��Ϸ
	StartPlay();
	
	//������Ϸ
	EndPlay();
}