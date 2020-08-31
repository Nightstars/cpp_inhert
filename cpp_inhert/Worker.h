#pragma once
#include "Person.h"
class Worker :
    public Person
{
public:
    Worker();
    ~Worker();
    void work();
    void setSalary(int _salary);
    int getSalary();
private:
    int m_iSalary;

};

