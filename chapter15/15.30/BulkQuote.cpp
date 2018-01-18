/*************************************************************************
	> File Name: BulKQuote.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 13时25分47秒
 ************************************************************************/
#include "BulkQuote.h"

double BulkQuote::net_price(size_t size) const 
{
    if(size < _min_qty)
    {
        return size * _price;
    }
    else
    {
        return _discount * size * _price;
    }
}
