/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 14时41分05秒
 ************************************************************************/
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.7\n";
    map<string,vector<pair<string,int>>> family;
    string tmp;
    while(cin>>tmp)
    {
        int age = 0;
        string parent = tmp;
        vector<pair<string,int>> childern;
        while(cin>>tmp)
        {
            if(tmp != "#")
            {
                cin>>age;
                childern.push_back(make_pair(tmp,age));
            }
            else
            {
                break;
            }
        }

        family[parent] = childern;
    }
    
    for(auto p:family)
    {
        cout<<"parent: "<<p.first<<endl;
        for(auto child:p.second)
        {
            cout<<"\t\t"<<child.first<<"\t"<<child.second<<endl;
        }
    }

    return 0;
}
