/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 23时25分37秒
 ************************************************************************/

#include <iostream>
using namespace std;

int get_size(int a)
{
    return a;
}

constexpr int s()
{
    return 10;
}

int main(int argc, char **argv)
{
    cout<<"primer 3.27\n";
    unsigned int buf_size = 100;
    int buf[buf_size];
    int b[1 + 2];
    int c[get_size(1)];
    int d[s()];
   // char str[2] = "12"; error

    return 0;
}
