/*************************************************************************
	> File Name: DiscQuote.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 14时42分02秒
 ************************************************************************/
#ifndef _DISCQUOTE_H
#define _DISCQUOTE_H
#include "Quote.h"

class DiscQuote : public Quote
{
private:
    int _quantity;
    double _discount;
public:
    DiscQuote() = default;
    DiscQuote(const string &str, double price, int quantity, double discount)
        :Quote(str, price), _quantity(quantity), _discount(discount)
    {}
    
    virtual double net_price() = 0;
};

#endif

