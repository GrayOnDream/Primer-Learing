/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 17时08分11秒
 ************************************************************************/
#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.28\n";
    vector<int> v;
    map<string ,vector<int>> m;
    string str;
    while(cin>>str)
    {
        vector<int> v;
        int num = 0;
        while(cin>>num)
        {
            v.push_back(num);
            if(num == -1) break;
        }

        m[str] = v;
    }

    vector<int> p;
    p.push_back(1);
    map< string, vector<int>>::iterator it = m.find(string("w"));
    return 0;
}
