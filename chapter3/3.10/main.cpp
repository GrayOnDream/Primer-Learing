/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 22时05分15秒
 ************************************************************************/
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.10\n";
    string str;
    cin>>str;
    int k = 0;
    for(decltype(str.size()) i = 0;i < str.size();)
    {
        if(ispunct(str[i]))
        {
            k ++;
        }
        else
        {
            i ++;
        }

        str[i] = str[i + k];
    }

    cout<<str<<endl;

    return 0;
}
