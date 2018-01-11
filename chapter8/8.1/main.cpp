/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 13时24分52秒
 ************************************************************************/

#include <iostream>
using namespace std;

int num = 0;

istream &read_fun(istream &is)
{
    while(is>>num)
    {
        cout<<num;
    }

    is.clear(); //reset
}

int main(int argc, char **argv)
{
    cout<<"primer 8.1\n";

    read_fun(cin);

    return 0;
}
