/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 22时39分37秒
 ************************************************************************/
#include <string>
#include <vector>
#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.17\n";
    string str;
    vector<string> v;
    while(cin>>str)
    {
        v.push_back(str);
    }

    for(auto &s:v)
    {
        for(auto &c:s)
        {
            c = toupper(c);
        }
        
        cout<<s<<endl;
    }

    

    return 0;
}
