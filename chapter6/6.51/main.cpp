/*************************************************************************
	> File Name: 6.51/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时42分19秒
 ************************************************************************/

#include <iostream>
using namespace std;

void f(int a)
{
    cout<<"f_int\n";
}
void f(int a,int b)
{
    cout<<"f_int_int\n";
}

void f(int a,double b)
{
    cout<<"f_int_double\n";
}

void f(double a,double b)
{
    cout<<"f_double_double\n";
}

int main(int argc, char **argv)
{
    cout<<"primer 6.51\n";
    f(1);
    f(2,2);
    f(1,2.5);
    f(1.0,1.0);

    return 0;
}
