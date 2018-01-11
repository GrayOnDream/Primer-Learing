/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 13时01分47秒
 ************************************************************************/
#include <string>
#include <forward_list>
#include <iostream>
using namespace std;

void replace_string(forward_list<string> &list,const string& s1,const string &s2)
{
    auto pre = list.before_begin();
    for(auto it = list.begin();it != list.end();it ++)
    {
        if(*it == s1)
        {
            list.insert_after(it,s2);
            return;
        }

        pre++;
    }

    list.insert_after(pre,s2);
}
int main(int argc, char **argv)
{
    cout<<"primer 9.28\n";
    forward_list<string> f = {"what","now","i","fuck"};
    for(auto s:f)
    {
        cout<<s<<"\t";
    }
    cout<<endl;

    replace_string(f,"what","me");
    for(auto s:f)
    {
        cout<<s<<"\t";
    }

    cout<<endl;

    replace_string(f,"wat","me");
    for(auto s:f)
    {
        cout<<s<<"\t";
    }

    return 0;
}
