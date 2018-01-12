/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 14时41分05秒
 ************************************************************************/
#include <map>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 11.7\n";
    map<string,vector<string>> family;
    string tmp;
    while(cin>>tmp)
    {
        string parent = tmp;
        vector<string> childern;
        while(cin>>tmp)
        {
            if(tmp != "#")
            {
                childern.push_back(tmp);
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
            cout<<"\t\t"<<child<<endl;
        }
    }

    return 0;
}
