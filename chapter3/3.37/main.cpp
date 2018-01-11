/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月05日 星期五 23时46分40秒
 ************************************************************************/

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 3.37\n\n";

    const char a[] = {'h','e','l','l','o'};
    const char *p = a;
    while(*p)
    {
        cout<<*p<<endl;
        ++p;
    }

    cout<<endl;
    return 0;
}
