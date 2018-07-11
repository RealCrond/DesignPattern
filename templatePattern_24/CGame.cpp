
#include "CGame.h"

CGame::CGame()
{

}

CGame::~CGame()
{

}


//模板
void CGame::Play()
{
	//初始化游戏
	Initialize();

	//开始游戏
	StartPlay();
	
	//结束游戏
	EndPlay();
}