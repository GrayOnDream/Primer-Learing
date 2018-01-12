/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 17时17分06秒
 ************************************************************************/
#include <vector>
#include <map>
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

    map<string, vector<string>>::iterator it = m.find(string("jiangyao"));
    if(it != m.end())
    {
        cout<<"got it!\t"<<it->first<<endl;
        for(auto s:it->second)
        {
            cout<<"\t\t"<<s<<endl;
        }
    }
    return 0;
}
