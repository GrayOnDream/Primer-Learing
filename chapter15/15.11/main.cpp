/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 13时54分20秒
 ************************************************************************/
#include <iostream>
#include "BulkQuote.h"
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 15.11\n";
    BulkQuote p("11",1,1,1);
    Quote *ptr = &p;
    ptr->debug();

    return 0;
}
