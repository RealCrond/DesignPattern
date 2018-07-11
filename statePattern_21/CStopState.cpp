
#include "CStopState.h"

CStopState::CStopState()
{

}

CStopState::~CStopState()
{

}

void CStopState::DoAction(CContext* context)
{
	printf("Player is in stop state.\n");
	context->SetState(this);
}

char* CStopState::ToString()
{
	return "Stop State";
}