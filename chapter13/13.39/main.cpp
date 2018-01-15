/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 04时29分23秒
 ************************************************************************/
#include "StrVector.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 13.39\n";
    StrVector str({"1","2","3","4","5","6"});
    for(auto p = str.begin(); p != str.end();p ++)
    {
        cout<<*p<<endl;
    }
    return 0;

}
