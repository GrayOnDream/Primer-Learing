/*************************************************************************
	> File Name: 1.22/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 03时00分37秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    std::cout<<"C++ primer example 1.22\n";
    Sales_item sum,item;
    while(std::cin>>item)
    {
        sum += item;
    }

    std::cout<<"result:"<<sum<<std::endl;
    return 0;
}
