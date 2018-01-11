/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 10时54分58秒
 ************************************************************************/
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void print(vector<string> v)
{

    for(auto it = v.begin();
       it != v.end();
       it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
}

bool isShorter(const string &rst,const string &snd)
{
    return rst.size() < snd.size();
}

int main(int argc, char **argv)
{
    cout<<"primer 10.9\n";
    vector<string> v;
    string in;
    while(cin>>in)
    {
        v.push_back(in);
    }
    
    cout<<"berfore:\t";
    print(v);
    auto end = unique(v.begin(),v.end());
    cout<<"unique:\t";
    print(v);
    v.erase(end,v.end());
    cout<<"after:\t";
    print(v);
    stable_sort(v.begin(),v.end(),isShorter);
    print(v);

    return 0;
}
