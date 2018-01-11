/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 21时54分03秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.6\n";
    string str;
    cin>>str;
    for(char &c : str)
    {
        c = 'X';
    }

    cout<<str<<endl;

    return 0;
}
