/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 14时10分22秒
 ************************************************************************/

#include <iostream>
using namespace std;

template<typename T, U,typename V> void f1(T,U,V);  //error
template<typename T> T f2(int &T);                  //error
template<typename T> T foo(T,unsigned int *);
template<typename T> f4(T,T);                       //error 

typedef char CC;
template<typename CC> CC f5(CC a);

int main(int argc, char **argv)
{
    cout<<"primer 16.18\n";

    return 0;
}
