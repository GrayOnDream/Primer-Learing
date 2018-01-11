/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时45分51秒
 ************************************************************************/
#include <list>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.21\n";
    string str;
    list<string> l;
    while(cin>>str)
    {
        l.push_back(str);
    }

    vector<string> v;
    for(auto s:l)
    {
        v.push_back(s);
    }

    return 0;
}
