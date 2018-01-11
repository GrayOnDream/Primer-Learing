/*************************************************************************
	> File Name: 2.21/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 19时42分35秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i = 0;
    //double *dp = &i;    //error
    int *ip = &i;
    //int *p = i;         //error
    int j = 42;
    //int &p = 32;          //error
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;

    double val = 1.2;
    const int &pp = val;
    return 0;
}
