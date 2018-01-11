/*************************************************************************
	> File Name: 2.42/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 20时55分41秒
 ************************************************************************/

#include <iostream>
#include "Sales_data.h"

using namespace std;

int main(int argc, char **argv)
{
    std::cout<<"C++ primer 2.42\n";
    Sales_data item1,item2;
    int price = 0;
    std::cout<<"input data:(bookno,number,price)\n";
    std::cin>>item1.bookNo>>item1.units_sold>>price;
    item1.revenue = item1.units_sold * price;

    std::cin>>item2.bookNo>>item2.units_sold>>price;
    item2.revenue = item2.units_sold * price;


    if(item1.bookNo == item2.bookNo)
    {
        unsigned total = item1.units_sold + item2.units_sold;

        std::cout<<item1.bookNo<<"  "
                 <<item1.revenue + item2.revenue;
        if(total != 0)
        {
            std::cout<<"  "<<(item1.revenue + item2.revenue)/total<<std::endl; 
        }
        else
        {
            std::cout<<"no sales!\n";
        }
    }
    else
    {
        std::cout<<"different book!\n";
    }

    return 0;
}
