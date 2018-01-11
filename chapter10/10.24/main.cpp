/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 12时50分45秒
 ************************************************************************/
#include <vector>
#include <functional>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &str,const int &size)
{
    return str.size() > size;
}

int main(int argc, char **argv)
{
    cout<<"primer 10.24\n";
    vector<string> v;
    string str;
    while(cin>>str)
    {
        v.push_back(str);
    }
    
    int num = 2;
    auto func = bind(check_size,_1,num);
    cout<<"count = "<<count_if(v.begin(),v.end(),func)<<endl;

    return 0;
}
