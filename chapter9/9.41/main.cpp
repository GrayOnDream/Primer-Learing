/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 13时37分10秒
 ************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.41\n";

    vector<char> v = {'c','a','a','h'};
    string str;
    for(auto ch:v)
    {
        str += ch;
    }

    cout<<str<<endl;

    return 0;
}
