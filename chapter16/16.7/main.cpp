/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 12时23分47秒
 ************************************************************************/

#include <iostream>
using namespace std;

template<typename T>
constexpr T get_size(const T a, const T b)
{
    return a + b;
}

int main(int argc, char **argv)
{
    cout<<"primer 16.7\n";
    int a[get_size(1,2)];//correct
    return 0;
}
