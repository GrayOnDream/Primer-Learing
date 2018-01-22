/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 12时04分28秒
 ************************************************************************/

#include <iostream>
using namespace std;

template <typename T>
int compareTo(T rst, T snd)
{
    if(rst == snd) return 0;
    if(rst < snd ) return -1;
    return 1;
}

int main(int argc, char **argv)
{
    cout<<"primer 16.2\n";
    cout<<compareTo(1,2)<<endl;
    cout<<compareTo('1','0')<<endl;

    return 0;
}
