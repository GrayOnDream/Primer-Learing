/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 18时42分08秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

class p
{
public:
    p(const string &a)
    {
        cout<<a.c_str()<<endl;
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 7.49\n";

    p b(string("what"));
    p a("what");

    return 0;
}
