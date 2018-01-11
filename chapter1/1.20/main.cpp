/*************************************************************************
	> File Name: 1.20/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 02时41分12秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
    std::cout<<"C++ primer example 1.20\n";

    Sales_item item;
    while(std::cin>>item)
    {
        std::cout<<item<<std::endl;
    }

    return 0;
}
