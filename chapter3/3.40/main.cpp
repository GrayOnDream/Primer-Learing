/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 00时37分55秒
 ************************************************************************/
#include <string>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 3.40\n";
    char a[] = "1234";
    char b[] = "2345";
    
    string c = {"123445"};
    string d = {"023445"};

    cout<<strcmp(a,b)<<endl;
    cout<<(c<d)<<endl;

    char e[64];
    strcpy(e,a);
    strcat(e,b);
    cout<<e<<endl;

    return 0;
}
