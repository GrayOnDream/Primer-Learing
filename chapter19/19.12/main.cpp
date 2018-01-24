/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 13时38分38秒
 ************************************************************************/
#include <iostream>
using namespace std;

class cls
{
private:
    int a;
public:
    int b;
    void print()
    {
        cout<<"function in cls\n";
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 19.12\n";
    int cls::*p = &cls::b;
    void (cls::*ptr)() = &cls::print;
    cls c;
    cls *pc = &c;

    cout<<c.*p<<endl;
 //   c.*ptr();

    return 0;
}
