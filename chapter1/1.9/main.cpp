/*************************************************************************
	> File Name: 1.9/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 01时13分49秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int sum = 0;
    int value = 50;
    while(value <= 100)
    {
        sum += value++;
        // value++;
    }

    std::cout<<"50+51+...+100="<<sum<<std::endl;

    return 0;
}
