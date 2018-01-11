/*************************************************************************
	> File Name: 1.12/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 01时27分18秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    std::cout<<"C++ Primer Example 1.12"<<std::endl;
    int sum = 0;
    for(int i = -100;i <= 100;i ++)
    {
        sum += i;
    }

    std::cout<<"sum = "<<sum<<std::endl;

    return 0;
}
