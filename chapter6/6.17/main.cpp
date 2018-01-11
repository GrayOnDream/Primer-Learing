/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 20时24分37秒
 ************************************************************************/
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

bool isAnyUpper(const string &str)
{
    for(char ch:str)
    {
        if(isupper(ch))
        {
            return true;
        }
    }

    return false;
}

void str_tolower(string &str)
{
    for(char &ch:str)
    {
        ch = tolower(ch);
    }

    cout<<"function:"<<str<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.17\n";

    string str1;

    while(cin>>str1)
    {
        str_tolower(str1);
        cout<<str1<<endl;
    }

    return 0;
}
