/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 12时42分01秒
 ************************************************************************/
#include <typeinfo>
#include <iostream>
using namespace std;

class A
{
    virtual void print(){cout<<"A"<<endl;}
};

class B:public A
{
    virtual void print(){cout<<"B"<<endl;}
};

int main(int argc, char **argv)
{
    cout<<"primer 19.6\n";
    A* b = new B();
    B *bb = new B();
    B *p = dynamic_cast<B*>(b);
    if(typeid(bb) == typeid(p))
    {
        cout<<"convert successuflly\n";
    }
    else
    {
        cout<<"convert failed\n";
    }

    return 0;
}
