/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 10时11分15秒
 ************************************************************************/

#include <iostream>
using namespace std;

class A
{
    virtual void f(){}//if no this function here will be errored
};

class B:public A
{
    virtual void f(){}
};

class C:public B
{
    virtual void f(){}
};

int main(int argc, char **argv)
{
    cout<<"primer 19.4\n";
    C c;
    A &a = c;    
    B &b = dynamic_cast<B&>(a);

    return 0;
}
