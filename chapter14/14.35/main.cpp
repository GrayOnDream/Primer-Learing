/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 14时54分25秒
 ************************************************************************/
#include "ReadString.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 14.34\n";
    ReadString readstr(std::cin);
    string str;
    readstr(str);
    cout<<str<<endl;
    
    return 0;
}
