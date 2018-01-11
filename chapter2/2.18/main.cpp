/*************************************************************************
	> File Name: 2.18/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 19时40分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int value = 90;
    int *ptr = &value;

    *ptr = 100;

    std::cout<<*ptr<<std::endl;

    return 0;
}
