/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 11时50分56秒
 ************************************************************************/
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.14\n";
    auto f = [](const int &rst,const int &snd){return rst + snd;};
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1<<"+"<<num2<<"="<<f(num1,num2)<<endl;

    return 0;
}
