/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月10日 星期三 14时30分20秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 9.50\n";
    string str;
    double num = 0;
    while(cin>>str)
    {
        cout<<num<<endl;
        num += stod(str);
    }

    cout<<num<<endl;

    return 0;
}
