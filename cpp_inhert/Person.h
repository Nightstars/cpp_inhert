#pragma once
#include <string>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	void eat();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};

