/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 12时54分38秒
 ************************************************************************/
#include <typeinfo>
#include <iostream>
using namespace std;

class A
{
public:
    virtual void print(){}
};

class B:public A
{
public:
    virtual void print(){}
};

#define TYPE_PRINT(x) cout<<#x<<"\t"<<typeid(x).name()<<endl;

int main(int argc, char **argv)
{
    cout<<"Primer 19.9\n";
    int int1 = 0;
    double double1 = 0.1;
    float float1 = 1.1;
    unsigned int unsigned1 = 1;
    long long1 = 1;
    long long longlong1 = 1;
    
    A a;
    B b;

    A *pa = &a;
    B *pb = &b;

    A *pp = &b;
    
    TYPE_PRINT(int1)
    TYPE_PRINT(double1)
    TYPE_PRINT(float1)
    TYPE_PRINT(unsigned1)
    TYPE_PRINT(long1)
    TYPE_PRINT(longlong1)
    TYPE_PRINT(a)
    TYPE_PRINT(b)
    TYPE_PRINT(pa)
    TYPE_PRINT(pb)
    TYPE_PRINT(pp)

    return 0;
}
