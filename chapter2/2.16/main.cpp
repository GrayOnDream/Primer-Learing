/*************************************************************************
	> File Name: 2.16/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 19时29分10秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i = 0,&r1 = i;
    double d = 0,&r2 = d;
    r2 = 2.13;
    r2 = r1;
    i = r2;
    r1 = d;

    return 0;
}
