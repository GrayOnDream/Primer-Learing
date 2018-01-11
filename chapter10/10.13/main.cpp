/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 11时27分52秒
 ************************************************************************/
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

bool short_5(const string &s)
{
    return s.size() < 5;
}

int main(int argc, char **argv)
{
    cout<<"primer 10.13\n";
    string str;
    vector<string> v;
    while(cin >> str)
    {
        v.push_back(str);
    }

    for(auto s:v)
    {
        cout<<s<<"\t";
    }
    cout<<endl;
    partition(v.begin(),v.end(),short_5);
    for(auto s:v)
    {
        cout<<s<<"\t";
    }
    cout<<endl;


    return 0;
}
