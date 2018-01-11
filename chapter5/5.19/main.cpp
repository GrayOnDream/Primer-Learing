/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 04时59分04秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 5.19\n";
    
    string str1;
    string str2;
    cin>>str1>>str2;
    do
    {
        cout<<(str1.size() < str2.size() ? str1:str2)<<endl;
    }while(cin>>str1>>str2);

    return 0;
}
