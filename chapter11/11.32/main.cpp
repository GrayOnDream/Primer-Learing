/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 17时17分06秒
 ************************************************************************/
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.31\n";
    map<string, vector<string>> m;
    string name;
    while(cin>>name)
    {
        vector<string> v;
        string essy;
        while(cin>>essy)
        {
            if(essy == "#")
            {
                break;
            }

            v.push_back(essy);
        }

        m[name] = v;
    }

    vector<string> names;
    for(auto begin = m.begin(); begin != m.end(); begin++)
    {
        names.push_back(begin->first);
    }

    sort(names.begin(), names.end()); 
    for(auto begin = names.begin(); begin != names.end(); begin ++)
    {
        auto it = m.find(*begin);
        cout<<"Author:"<<*begin<<endl;
        if(it != m.end())
        {
            sort(it->second.begin(), it->second.end());
            for(auto s:it->second)
            {
                cout<<"\t\t"<<s<<endl;
            }
        }
    }
    return 0;
}
