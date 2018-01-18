/*************************************************************************
	> File Name: Basket.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 19时34分02秒
 ************************************************************************/
#ifndef _BASKET_H
#define _BASKET_H

#include "BulkQuote.h"

#include <map>
#include <memory>
#include <set>

using std::shared_ptr;
using std::make_shared;
using std::map;

class Basket
{
private:
    static bool compareTo(const Quote &rst, const Quote &snd)
    {
        return rst.getNo() < snd.getNo();
    }

    multiset<shared_ptr<Quote>,decltype(compareTo)*> items(compareTo);
public:
    void add_item(const Quote &quote)
    {
        items.insert(make_shared<Quote>(quote.clone()));
    }

    void add_item(const Quote &&quote)
    {
        items.insert(make_shared<Quote>(std::move(quote).clone()));
    }

    double total(std::ostream &) const
    {
        double sum = 0;
        for(auto p:items)
        {
            os<<p->net_price();
            sum += p->net_price();
        }

        return sum;
    }
};

#endif

