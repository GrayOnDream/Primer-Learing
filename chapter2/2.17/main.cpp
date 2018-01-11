/*************************************************************************
	> File Name: 2.17/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 19时30分33秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    std::cout<<"C++ primer 2.17\n";
    int i, &r1 = i;
    i = 10;
    r1 = 100;
    std::cout<<"i = "<<i<<std::endl;
    std::cout<<"r1 = "<<r1<<std::endl;

    return 0;
}
