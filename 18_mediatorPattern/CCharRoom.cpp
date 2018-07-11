
#include "CChatRoom.h"
#include "CUser.h"

CChatRoom::CChatRoom()
{

}

CChatRoom::~CChatRoom()
{

}

void CChatRoom::ShowMessage(CUser* user, char* msg)
{
	printf("[%s][%s] : %s \n",GetTime().c_str(),user->GetName(),msg);
}

string CChatRoom::GetTime()
{
	time_t timep;
	time (&timep);
	char tmp[64];
	strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&timep) );
	return tmp;
}