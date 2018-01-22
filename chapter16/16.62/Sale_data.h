
/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月08日 星期一 01时26分24秒
 ************************************************************************/
#ifndef _SALE_DATA_H_
#define _SALE_DATA_H_

#include <string>
#include <iostream>
#include <functional>

using std::cout;
using std::cin;
using std::string;
using std::istream;
using std::ostream;
using std::endl;
using std::ends;
using std::hash;
using std::to_string;

class Sale_data
{
    friend hash<Sale_data>;
    friend istream& operator>>(istream &is, Sale_data &data);
    friend ostream& operator<<(ostream &os, const Sale_data &data);
    friend Sale_data& operator+(const Sale_data &rst, const Sale_data &snd);
    friend bool operator==(const Sale_data &rst, const Sale_data &snd);
    friend bool operator!=(const Sale_data &rst,const Sale_data &snd);
private:
    string _bookNo;
    double _revenue;
    size_t _unit_qutity;
public:
    Sale_data() 
    {
        _bookNo      = "";
        _revenue     = 0.0;
        _unit_qutity = 0;
    }

    Sale_data(const string &str):Sale_data(str,0,0)
    {
        #ifndef DEBUG
            cout<<"sale(string)\n";
        #endif 
    }
    Sale_data(const string &str,double price,size_t unit_qutity)
                                :_bookNo(str),_unit_qutity(unit_qutity),_revenue(unit_qutity * price)
    {  
        #ifndef DEBUG
            cout<<"sale(string,double,size_t)\n";
        #endif 
    }

                            
    Sale_data(istream &is)
    {
        int price = 0;
        is>>this->_bookNo>>this->_unit_qutity>>price;
        this->_revenue = this->_unit_qutity * price;
    }

    double get_averge() const
    {
        if(_unit_qutity == 0) return 0;
        return _revenue / _unit_qutity;
    }

    void combine(const Sale_data &cur)
    {
        this->_unit_qutity += cur._unit_qutity;
        this->_revenue += cur._revenue;
    }

    string get_book_number()const
    {
        return this->_bookNo;
    }

    double get_revenue() const
    {
        return this->_revenue;
    }

    size_t get_qutity()
    {
        return this->_unit_qutity;
    }
public:
    ostream &print(ostream &os,char ch)
    {
        return os<<this->_bookNo<<ch<<this->_unit_qutity<<ch<<this->get_averge();
    }

    istream &read(istream &is)
    {
        double price = 0.0;
        is>>this->_bookNo>>this->_unit_qutity>>price;
        this->_revenue = price * _unit_qutity;
        return is;
    }

    const string toString() const
    {
        return string(_bookNo + std::to_string(_unit_qutity) + std::to_string(get_averge()));
    }

    Sale_data &operator+=(const Sale_data &data)
    {
        this->combine(data);
        return *this;
    }

    Sale_data& operator=(const Sale_data &data)
    {
        _bookNo = data._bookNo;
        _unit_qutity = data._unit_qutity;
        _revenue = _revenue;
    }
};


istream& operator>>(istream &is,Sale_data &data)
{
    double price = 0.0;
    is>>data._bookNo>>data._unit_qutity>>price;
    if(is)
    {
        data._revenue = price * data._unit_qutity;
    }
    else
    {
        data = Sale_data();
    }

    return is;
}

ostream& operator<<(ostream &os, const Sale_data &data)
{
    return os<<data._bookNo<<" "<<data._unit_qutity<<" "<<data.get_averge();   
}

Sale_data& operator+(const Sale_data &rst, const Sale_data &snd)
{
    Sale_data sum = rst;
    sum += snd;
    return sum;
}

bool operator==(const Sale_data &rst, const Sale_data &snd)
{
    return rst._bookNo == snd._bookNo &&
           rst._revenue == snd._revenue &&
           rst._unit_qutity == snd._unit_qutity;
}

bool operator!=(const Sale_data &rst,const Sale_data &snd)
{
    return !(rst == snd);
}
#endif //_SALE_DATA_H_
