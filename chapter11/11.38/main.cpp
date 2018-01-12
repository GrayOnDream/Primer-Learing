/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 17时51分51秒
 ************************************************************************/
#include <map>
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.38\n";
    unordered_map<string,int> m;
    string str;
    while(cin>>str)
    {
        m[str]++;
    }

    for(auto p:m)
    {
        cout<<p.first<<"\t"<<p.second<<endl;
    }

    return 0;
}
