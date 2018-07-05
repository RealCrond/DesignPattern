#pragma once

class SingleObject 
{
private:
	SingleObject(){};

public:
	~SingleObject();
	static SingleObject* GetInstance();
	void ShowMsg();

private:
	static SingleObject* m_pSingleObject;
};

