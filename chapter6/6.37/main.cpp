/*************************************************************************
	> File Name: 6.36/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时09分54秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

typedef string (&return_type)[10];

string (&fun(int n))[10]
{
    cout<<"directly"<<endl;
}

return_type fun1()
{
    cout<<"typedef\n";
}

auto fun2() -> string (&)[10]
{
    cout<<"-->\n";
}

int b[10];
int (&a)[10] = b;
decltype(a) fun3()
{
    cout<<"decltype\n";
}

int main(int argc, char **argv)
{
    cout<<"primer 6.37\n";
    fun(1);
    fun1();
    fun2();
    fun3();

    return 0;
}
