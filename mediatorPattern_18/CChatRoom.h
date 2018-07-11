
#pragma once

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class CUser;

class CChatRoom
{
public:
	CChatRoom();
	~CChatRoom();

	static string GetTime();

	static void ShowMessage(CUser* user, char* msg);

};