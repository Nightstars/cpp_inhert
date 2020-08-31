#include "Person.h"
#include <iostream>
using namespace std;
Person::Person()
{
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()" << endl;
}

void Person::eat()
{
	cout << "eat()" << endl;
}

void Person::setName(string _name)
{
	m_strName = _name;
}

string Person::getName()
{
	return m_strName;
}

void Person::setAge(int _age)
{
	m_iAge = _age;
}

int Person::getAge()
{
	return m_iAge;
}
