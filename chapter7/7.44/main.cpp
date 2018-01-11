/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 18时33分26秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

class NoDefault
{
public:
    NoDefault(){}
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
    cout<<"primer 7.44\n";

    vector<NoDefault> no(10);
    cout<<no.size()<<endl;

    return 0;
}
