/*************************************************************************
	> File Name: Employee.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 13时52分13秒
 ************************************************************************/
#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H
#include <string>

using std::string;

class Employee
{
private:
    static int union_number;
private:
    string name;
    int number;
public:
    Employee():number(0)
    {}

    Employee(const string nm):name(nm),number(union_number++){}

    string getName()const
    {
        return name;
    }

    int getNumber() const
    {
        return number;
    }
};

int Employee::union_number = 1256891238;

#endif

