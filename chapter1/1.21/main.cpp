/*************************************************************************
	> File Name: ./1.21/main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 02时56分42秒
 ************************************************************************/

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{

    std::cout<<"C++ primer example 1.21\n";
    Sales_item item1,item2;
    std::cin>>item1>>item2;
    std::cout<<"result:"<<item1+item2<<std::endl;

    return 0;
}
