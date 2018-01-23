/*************************************************************************
	> File Name: OutOfStock.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 16时46分45秒
 ************************************************************************/
#ifndef _OUTOFSTOCK_H
#define _OUTOFSTOCK_H
#include <exception>
#include <string>
#include <stdexcept>

using std::exception;
using std::runtime_error;
using std::string;

class OutOfStock:public runtime_error
{
public:
    explicit OutOfStock(const string &str):runtime_error(str){}
};


#endif

