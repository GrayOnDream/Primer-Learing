/*************************************************************************
	> File Name: 1.11/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 01时21分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int num1 = 0,num2 = 0;
    std::cout<<"C++ primer Example 1.11"<<std::endl;
    std::cout<<"Please input two numbers:";
    std::cin>>num1>>num2;
    if(num1 > num2)
    {
        int tmp = num2;
        num2 = num1;
        num1 = tmp;
    }

    while(num1 <= num2)
    {
        std::cout<<num1++<<" ";
    }

    std::cout<<std::endl;
    return 0;
}
