
#include "CStartState.h"

CStartState::CStartState()
{

}

CStartState::~CStartState()
{

}

void CStartState::DoAction(CContext* context)
{
	printf("Player is in start state.\n");
	context->SetState(this);
}

char* CStartState::ToString()
{
	return "Start State";
}