/*************************************************************************
	> File Name: 1.23/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 03时04分48秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    //assume that there are three cateories book
    Sales_item item1,item2,item3;
    Sales_item item;
    std::cout<<"input three books ibsn:";
    std::cin>>item1>>item2>>item3;
    int count1 = 0,count2 = 0,count3 = 0;
    std::cout<<"input data:";
    while(std::cin>>item)
    {
        if(item.isbn() == item1.isbn())
        {
            count1++;
            item1+= item;
        }

        if(item.isbn() == item2.isbn())
        {
            count2++;
            item2+= item;
        }

        if(item.isbn() == item3.isbn())
        {
            count3++;
            item3+= item;
        }

    }

    std::cout<<"book:"<<item1<<" count:"<<count1<<std::endl;
    std::cout<<"book:"<<item2<<" count:"<<count2<<std::endl;
    std::cout<<"book:"<<item3<<" count:"<<count3<<std::endl;

    return 0;
}
