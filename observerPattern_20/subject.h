
#pragma once
#include <list>
using namespace std;

 /*
 解决2个头文件相互包含的问题：
 分别在各自的头文件中声明一下使用的类，而在各自的源文件中包含对方的头文件即可
 */
class CObserver;
typedef list<CObserver*>  LISTOBSERVER;

class CSubject
{
public:
	CSubject();
	~CSubject();

	CSubject operator=(CSubject subject);

	int	 GetState() const;
	void SetState(int state);
	void Attach(CObserver* observer);
	void NotifyAllObserver();

private:
	LISTOBSERVER m_listObserver;

	int m_nState;

};