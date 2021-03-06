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

class BulkQuote:public Quote
{
private:
    double _discount = 0.0;
    size_t _min_qty = 0;             //可折扣的最小购买量
public:
    BulkQuote() = default;
    BulkQuote(const BulkQuote &bulk)
        :Quote(bulk),_discount(bulk._discount),_min_qty(bulk._min_qty)
    {}
    
    BulkQuote(const string &no, const double price, size_t min_qt, double discount)
        :Quote( no, price),_min_qty(min_qt),_discount(discount)
    {}

public:
    virtual BulkQuote* clone() const & { return new BulkQuote(*this); }
    virtual BulkQuote* clone() && { return new BulkQuote(std::move(*this)); }
public:
    double net_price(size_t size) const override; 
    virtual void debug() override
    {
        cout<<"discount\tminqty\n";
        this->Quote::debug();
        cout<<_discount<<"\t"<<_min_qty<<endl;
    }
};

#endif

