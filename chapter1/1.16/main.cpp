/*************************************************************************
	> File Name: 1.16/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 01时41分38秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int value = 0;
    std::cout<<"C++ primer example 1.16"<<std::endl;
    std::cout<<"input serveral numbers:";
    int sum = 0;
    /*
     * Ctrl + D is the end flag in linux,but Ctrl + Z in windows
     */
    while(std::cin>>value)
    {
        sum += value;
    }

    std::cout<<"Sum is "<<sum<<std::endl;
    return 0;
}
