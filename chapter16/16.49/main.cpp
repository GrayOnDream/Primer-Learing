/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 12时06分09秒
 ************************************************************************/

#include <iostream>
using namespace std;

template <typename T> void f(T a){ cout<<"void f(T)\n"; }
template <typename T> void f(const T* a){ cout<<"void f(const T*)\n"; }
template <typename T> void g(T a){ cout<<"void g(T)\n"; }
template <typename T> void g(T* a){ cout<<"void g(T*)\n"; }

int main(int argc, char **argv)
{
    cout<<"primer 16.49\n";

    int i = 42, *p = &i;
    const int ci = 0, *cp = &ci;
    g(42);
    g(p);
    g(ci);
    g(cp);

    f(42);
    f(p);
    f(ci);
    f(cp);

    return 0;
}
