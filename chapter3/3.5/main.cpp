/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 21时44分11秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"Primer 3.5\n";
    string result;
    string line;
    string in;
    while(cin>>in)
    {
        result += in;
        line += in + " ";
    }

    cout<<result<<"\n"<<line<<endl;
    return 0;
}
