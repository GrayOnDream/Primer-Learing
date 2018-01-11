/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 11时58分18秒
 ************************************************************************/
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 10.15\n";
    int num1,num2;
    cin>>num1>>num2;
    auto f = [num1](const int &n){return n + num1;};
    cout<<f(num2)<<endl;
    return 0;
}
