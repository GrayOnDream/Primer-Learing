/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 13时24分52秒
 ************************************************************************/
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

string num;

istream &read_fun(istream &is)
{
    cout<<"in read_fun start\n";

    while(is>>num)
    {
        cout<<num;
    }

    cout<<"end func\n";
    is.clear(); //reset
}

int main(int argc, char **argv)
{
    cout<<"primer 8.1\n";

    string str;
    cin>>str;
    istringstream in(str);
    read_fun(in);

    return 0;
}
