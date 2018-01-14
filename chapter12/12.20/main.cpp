/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 15时37分08秒
 ************************************************************************/
#include "StrBlobPtr.h"
#include "StrBlob.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 12.20\n";
    StrBlob strB;
    string str;
    while(cin>>str)
    {
        strB.push_back(str);
    }

    StrBlobPtr p(strB);
    try
    {
        while(1)
        {
            cout<<p.derdef()<<endl;
            p = p.incr();
        }
    }
    catch(exception &e)
    {
        cout<<e.what()<<endl;
    }

    return 0;
}
