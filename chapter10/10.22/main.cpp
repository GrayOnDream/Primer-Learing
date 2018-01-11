/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 12时31分30秒
 ************************************************************************/
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders;
bool shortSize(const string &str,const int &size)
{
    return str.size() < size;
}

int main(int argc, char **argv)
{
    cout<<"primer 10.20\n";
    string str;
    vector<string> v;
    while(cin>>str)
    {
        v.push_back(str);
    }

    int num = 4;
    auto func = bind(shortSize,_1,num);
    cout<<"count = "<<count_if(v.begin(),v.end(),func)<<endl;


    return 0;
}
