/*************************************************************************
	> File Name: BulKQuote.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 13时08分57秒
 ************************************************************************/
#ifndef _BULKQUOTE_H
#define _BULKQUOTE_H
#include "Quote.h"

class BulKQuote:public Quote
{
private:
    double _discount = 0.0;
    size_t _min_qty = 0;             //可折扣的最小购买量
public:
    BulKQuote() = default;
    BulKQuote(const string &no, const double price,size_t min_qty,double discount);
    
    double net_price(size_t size) const override; 

};

#endif

