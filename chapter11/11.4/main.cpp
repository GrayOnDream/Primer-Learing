/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: need to be solved
	> Mail: 
	> Created Time: 2018年01月12日 星期五 14时03分59秒
 ************************************************************************/
#include <map>
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

void swap(char &rst,char &snd)
{
    char tmp = rst;
    rst = snd;
    snd = rst;
}

void convert_string(string &str)
{
    if(!isalpha(str[str.size()-1]))
    {
        str[str.size() - 1] = ' ';
    }

    for(auto &c:str)
    {
        tolower(c);
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 11.4\n";
    string str;
    map<string,int> count;
    while(cin>>str)
    {
        convert_string(str);
        count[str] ++;
    }

    for(const auto &w:count)
    {
        cout<<w.first<<" occurs "<<w.second<<" times!\n";
    }
    return 0;
}
