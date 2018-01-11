/*************************************************************************
	> File Name: 2.4/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 18时49分41秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
    std::cout<<"C++ primer example 2.4\n";

    unsigned u = 10,u2 = 42;

    std::cout<<"u2 - u = "<<u2 - u<<std::endl;
    std::cout<<"u - u2 = "<<u - u2<<std::endl;

    int i = 10, i2 = 42;
    std::cout<<"i2 - i = "<<i2 - i<<std::endl;
    std::cout<<"i - i2 = "<<i - i2<<std::endl;

    std::cout<<"i - u = "<<i - u<<std::endl;
    std::cout<<"u - i = "<<u - i<<std::endl;

    return 0;
}
