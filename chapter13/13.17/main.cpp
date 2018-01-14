/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 13时41分51秒
 ************************************************************************/

#include <iostream>
using namespace std;

class number
{
public:
    int num;
    number():num(2){}
    number(const number &numb)
    {
        num = numb.num + 1;
    }
};

void f(const number &s)
{
    cout<<s.num<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 13.17\n";
    number a,b = a,c = b;
    f(a);
    f(b);
    f(c);

    return 0;
}
