
#pragma once
#include <list>
using namespace std;

 /*
 ���2��ͷ�ļ��໥���������⣺
 �ֱ��ڸ��Ե�ͷ�ļ�������һ��ʹ�õ��࣬���ڸ��Ե�Դ�ļ��а����Է���ͷ�ļ�����
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