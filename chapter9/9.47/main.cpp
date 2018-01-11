/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 14时17分12秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.47\n";
    string str = "12j8q9qwqe823jsf8";
    string number = "0123456789";
    string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<str.find_first_of(number)<<endl;
    cout<<str.find_first_of(alph)<<endl;

    return 0;
}
