/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 20时04分23秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 12.23\n";
    char *str1 = "fuck ";
    char *str2 = "you!";
    char *p = new char[5 + 4 + 1];
    for(int i = 0;i < 5;i ++)
    {
        p[i] = str1[i];
    }

    for(int i = 0;i < 4;i ++)
    {
        p[i + 5] = str2[i];
    }

    p[9] = ' ';
    cout<<p<<endl;
    string *str = new string(string(str1) + string(str2));
    cout<<*str<<endl;
    return 0;
}
