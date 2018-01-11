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
using namespace std;

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
    cout<<"count = "<<count_if(v.begin(),v.end(),[=,num](const string &s)->bool{return s.size()>= num;});


    return 0;
}
