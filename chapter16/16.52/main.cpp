/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 12时15分54秒
 ************************************************************************/

#include <iostream>
#include <string>
using namespace std;

template< typename T, typename... Args>
void f(const T&t1, const Args ... args)
{
    cout<<"type numbers:\t"<<sizeof...(Args)<<"\t"<<endl;
    cout<<"parameters number:\t"<<sizeof...(args)<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 16.52\n";
    cout<<"Line"<<"type number para number "<<endl;
    int i = 0;
    double d = 3;
    string s = "what";
    f(i,s,42,d);
    f(s,42,"w");
    f(d,s);
    f("a");

    return 0;
}
