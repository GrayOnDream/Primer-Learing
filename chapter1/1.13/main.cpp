/*************************************************************************
	> File Name: 1.13/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 01时30分06秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    std::cout<<"C++ primer Example 1.13"<<std::endl;
    /*
     * 1.9 50 + ... + 100
     */
    int sum = 0;
    for(int i = 50;i <= 100;i ++)
    {
        sum += i;
    }

    std::cout<<"1.9  "<<"50+51+...+100="<<sum<<std::endl;

    std::cout<<"1.10 ";
    for(int i = 10;i >= 0;i --)
    {
        std::cout<<i<<" ";
    }

    std::cout<<std::endl;

    std::cout<<"1.11 ";
    int num1 = 0;
    int num2 = 0;
    std::cout<<"input two numbers:";
    std::cin>>num1>>num2;
    if(num1 > num2)
    {
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    for(int i = num1;i <= num2;i ++)
    {
        std::cout<<i<<" ";
    }

    std::cout<<std::endl;
    return 0;
}
