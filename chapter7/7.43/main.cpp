/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 18时33分26秒
 ************************************************************************/

#include <iostream>
using namespace std;

class NoDefault
{
public:
    NoDefault(int n){}
};

class C
{
public:
    NoDefault n;    //no default contructor,can initialize it as default
    C(){}
};

int main(int argc, char **argv)
{
    return 0;
}
