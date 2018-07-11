
#pragma once


class IState;

class CContext
{
public:
	CContext();
	~CContext();

	void SetState(IState* state);
	IState* GetState() const;

private:
	IState* m_iState;

};