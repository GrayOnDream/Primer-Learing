/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月11日 星期四 11时12分53秒
 ************************************************************************/
#include "Sale_data.h"
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(const vector<Sale_data> &s)
{
    for(auto data:s)
    {
        data.print(cout,'\t');
        cout<<endl;
    }
}

bool isLower(const Sale_data &rst,const Sale_data &snd)
{
    return rst.get_book_number() < snd.get_book_number();
}

int main(int argc, char **argv)
{
    cout<<"primer 10.12\n";
    vector<Sale_data> v;
    bool ret = true;
    Sale_data s;
    while(s.read(cin))
    {
        v.push_back(s);
    }

    print(v);
    sort(v.begin(),v.end(),isLower);
    print(v);

    return 0;
}
