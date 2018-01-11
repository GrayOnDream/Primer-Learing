/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月09日 星期二 14时55分33秒
 ************************************************************************/
#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 8.13\n";

    ostringstream format;
    string str;
    while(cin>>str)
    {
        format<<str<<" data in\n";
        cout<<format.str();
    

    return 0;
}
