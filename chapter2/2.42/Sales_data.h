/*************************************************************************
	> File Name: 2.42/Sales_data.h
	> Author: 
	> Mail: 
	> Created Time: 2018年01月04日 星期四 20时52分39秒
 ************************************************************************/

#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include <string>
#include <iostream>

struct Sales_data
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

#endif
