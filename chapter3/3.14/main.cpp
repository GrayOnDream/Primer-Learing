/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 22时22分02秒
 ************************************************************************/
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.14\n";
    int num;
    string str;
    vector<int> v1;
    vector<string> v2;
    while(cin >> num)
    {
        v1.push_back(num);
    }

    cout<<ends;
    while(cin >> str)
    {
        v2.push_back(str);
    }

    for(int n: v1)
    {
        cout<<n<<" ";
    }

    cout<<endl;
    for(string s: v2)
    {
        cout<<s<<" ";
    }
    
    cout<<endl;

    return 0;
}
