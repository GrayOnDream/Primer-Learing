/*************************************************************************
	> File Name: 1.25/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 03时14分53秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    std::cout<<"C++ primer example 1.25\n";
    Sales_item total,value;
    if(std::cin>>total)
    {
        while(std::cin>>value)
        {
            if(value.isbn() == total.isbn())
            {
                total += value;
            }
            else
            {
                std::cout<<"result:"<<total<<std::endl;
                total = value;
            }
        }

       std::cout<<"result:"<<total<<std::endl;
    }
    else
    {
        std::cout<<"no input\n";
        return -1;
    }

    return 0;
}
