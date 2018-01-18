/*************************************************************************
	> File Name: Qute.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 13时04分42秒
 ************************************************************************/
#ifndef _QUTE_H
#define _QUTE_H
#include <string>

using std::string;

class Quote
{
private:
    string _book_no;
protected:
    double _price;
public:
    Quote() = default;
    Quote(const string &no, const double price)
        :_book_no(no),_price(price)
    {}
    virtual ~Quote(){}
public:
    string getNo() const{ return _book_no; }
    virtual double net_price(size_t size)const
    {
        return size * _price;
    }
};

#endif

