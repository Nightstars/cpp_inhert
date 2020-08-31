#include "Worker.h"
#include <iostream>
using namespace std;
Worker::Worker():m_iSalary(0)
{
	cout << "Worker()" << endl;
}

Worker::~Worker()
{
	cout << "~Worker()" << endl;
}

void Worker::work()
{
	m_iSalary += 100;
	cout << "salary£º" <<m_iSalary<< endl;
}

void Worker::setSalary(int _salary)
{
	m_iSalary = _salary;
}

int Worker::getSalary()
{
	return m_iSalary;
}
