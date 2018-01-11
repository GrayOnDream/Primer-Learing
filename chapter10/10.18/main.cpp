/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 12时01分07秒
 ************************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
void unique_str(vector<string> &v)
{
    sort(v.begin(),v.end());
    auto it = unique(v.begin(),v.end());
    v.erase(it,v.end());
}

void biggit(vector<string> &v,vector<string>::size_type size)
{
    unique_str(v);
    stable_sort(v.begin(),v.end(),[](const string &rst,const string &snd){return rst.size()<snd.size();});
    auto wc = partition(v.begin(),v.end(),[size](const string &s){return s.size()<size;});
    auto count = v.end() - wc;
    cout<<count<<"  of length"<<size<<"or longer"<<endl;
    for_each(wc,v.end(),[](const string &s){cout<<s<<"  ";});
    cout<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 10.18\n";
    string str;
    vector<string> v;
    while(cin>>str)
    {
        v.push_back(str);
    }

    biggit(v,3);

    return 0;
}
