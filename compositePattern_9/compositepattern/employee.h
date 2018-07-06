#pragma once

#include <iostream>
#include <string.h>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;

class CEmployee;
typedef list<CEmployee> LISTEMPLOYEE;

class CEmployee
{
public:
	CEmployee(char* name,char* dept,int sal);
	~CEmployee();

	bool operator==(const CEmployee& e);
	void Add(const CEmployee& e);
	void Remove(const CEmployee& e);
	LISTEMPLOYEE getSubordinates() const;
	char* ToString();

	void PrintSubordinates();

private:
	char m_szname[64];
	char m_szdepartment[64];
	int m_nsalary;
	LISTEMPLOYEE m_listSubordinates;
	LISTEMPLOYEE::iterator m_iter;

};