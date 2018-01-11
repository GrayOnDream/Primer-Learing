/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 10时28分28秒
 ************************************************************************/
#include <list>
#include <vector>
#include <string>
#include <deque>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.18\n";
    string str;
    deque<string> d;
    while(cin>>str)
    {
        d.push_back(str);
    }

    for(string str:d)
    {
        cout<<"result:"<<str<<endl;
    }
    return 0;
}
