/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 10时42分52秒
 ************************************************************************/

#include <iostream>
using namespace std;
template <typename T> void f1(T a,T b){}

template <typename A,typename B> void f2(A a,B b){}

int main(int argc, char **argv)
{
    cout<<"primer 16.36\n";
    int i = 0,j = 40,*p1 = &i, *p2 = &j;
    const int *cp1 = &i,*cp2 = &j;
    f2(i,i);
    f2(cp1,cp2);
    return 0;
}
