/*****************************************************************************
 模块名      : Adapter Pattern
 文件名      : 
 相关文件    : 
 文件实现功能: 
 应用场景	 ：有动机地修改一个正常运行的系统的接口，这时应该考虑使用适配器模式。
 作者        : Herman
 版本        : V1.0  Copyright(C) 2018- GAM, All rights reserved.
 -----------------------------------------------------------------------------
 修改记录:
 日  期      版本        修改人      修改内容
 2018/07/05  1.0         Herman         新建
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