/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 14时03分59秒
 ************************************************************************/
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.3\n";
    string str;
    map<string,int> count;
    while(cin>>str)
    {
        count[str] ++;
    }

    for(const auto &w:count)
    {
        cout<<w.first<<" occurs "<<w.second<<" times!\n";
    }
    return 0;
}
