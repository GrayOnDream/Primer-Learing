/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 15时11分00秒
 ************************************************************************/
#include <utility>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.12\n";
    vector<pair<string,int>> v;
    string str;
    int n;
    while(cin>>str>>n)
    {
        v.push_back(make_pair(str,n));
        v.push_back(pair<string,int>(str,n));
        v.push_back({str,n});
    }

    for(auto p:v)
    {
        cout<<p.first<<"\t"<<p.second<<endl;
    }

    return 0;
}
