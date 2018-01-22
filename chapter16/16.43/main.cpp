/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 11时07分52秒
 ************************************************************************/

#include <iostream>
using namespace std;
#define SHOW_1(X) SHOW(X)
#define SHOW(X) cout<<#X<<endl;

template <typename T>
void func(T&& a)
{
    SHOW_1(decltype(T));
}

int main(int argc, char **argv)
{
    cout<<"primer 16.43\n";
    int i = 0;
    const int ci = 1;
    func(i);
    func(ci);
    func( ci * i);
    func(i = ci);

    return 0;
}
