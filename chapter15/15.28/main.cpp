/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 19时06分59秒
 ************************************************************************/
#include <vector>
#include "BulkQuote.h"
#include <memory>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 15.28\n";

    vector<shared_ptr<Quote> > ptr;
    for(int i = 0;i < 10;i ++)
    {
        ptr.push_back(make_shared<Quote>(BulkQuote(to_string(i),i,i,i)));
    }
    
    for(int i = 0;i < 10;i ++)
    {
        cout<<ptr[i]->net_price(10 - i)<<endl;
    }

    return 0;
}
