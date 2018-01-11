/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 21时54分03秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.6\n";
    string str;
    cin>>str;
    for(decltype(str.size()) i = 0;i < str.size(); i++)
    {
        str[i] = 'F';
    }

    cout<<str<<endl;
    decltype(str.size()) i = 0;
    while(i < str.size())
    {
        str[i] = 'W';
        i++;
    }

    cout<<str<<endl;

    return 0;
}
