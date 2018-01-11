/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 05时03分14秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.20\n";
    string str1,str2;
    while(cin>>str1>>str2)
    {
        if(str1 == str2 && str1[0] <= 'Z' && str1[0] >= 'A')
        {
            cout<<str1<<"=="<<str2<<endl;
            return 0;
        }
    }

    cout<<"none";
    return 0;
}
