/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月12日 星期五 14时57分58秒
 ************************************************************************/
#include "Sale_data.h"
#include <set>
#include <iostream>
using namespace std;

bool compare_saledata(const Sale_data &rst, const Sale_data &snd)
{
    return rst.get_book_number() < snd.get_book_number();
}

int main(int argc, char **argv)
{
    cout<<"primer 11.11\n";
    set<Sale_data, bool (*)(const Sale_data&,const Sale_data&)> bookStore(compare_saledata); 

    return 0;
}
