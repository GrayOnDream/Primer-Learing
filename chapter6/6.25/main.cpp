/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时20分53秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 6.25\n";
    if(argc > 2)
    {
        string s1(argv[1]);
        string s2(argv[2]);
        cout<<s1+s2<<endl;
    }

    return 0;
}
