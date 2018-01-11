/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 23时34分00秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 3.31\n";
    constexpr size_t size = 10;
    //size = 9;
    int b[size];
    for(size_t i = 0;i < size;i ++)
    {
        b[i] = i;
        cout<<b[i]<<endl;
    }

    return 0;
}
