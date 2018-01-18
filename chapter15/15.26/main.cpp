/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 18时54分02秒
 ************************************************************************/
#include "BulkQuote.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 15.26\n";
    Quote a("a",1);
    BulkQuote b("b",1,1,1);
    BulkQuote c("c",1,1,1);
    BulkQuote d(b);
    d.debug();
    return 0;
}
