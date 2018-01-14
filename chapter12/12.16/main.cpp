/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 15时00分07秒
 ************************************************************************/
#include <memory>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 12.16\n";
    unique_ptr<int> p(new int);
    //error unique_ptr<int> ptr = p;
    //error unique_ptr<int> pp(p);
    unique_ptr<int> ppp(p.get());
    return 0;
}
