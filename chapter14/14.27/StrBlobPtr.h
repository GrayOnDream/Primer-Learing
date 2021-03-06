/*************************************************************************
	> File Name: StrBlobPtr.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 15时10分14秒
 ************************************************************************/
#ifndef _STRBLOBPTR_H
#define _STRBLOBPTR_H
#include <memory>
#include <vector>
#include <string>
#include "StrBlob.h"
#include <stdexcept>

using std::out_of_range;
using std::runtime_error;
using std::vector;
using std::weak_ptr;
using std::string;

class StrBlobPtr
{
private:
    weak_ptr<vector<string>> _ptr;
    size_t _curr;
    shared_ptr<vector<string>> check(size_t size,const string &str)const;
public:
    StrBlobPtr():_curr(0){}
    StrBlobPtr(StrBlob &b,size_t size = 0)
        :_ptr(b._data),_curr(size){}

    string &derdef()const;
    StrBlobPtr& incr();

    StrBlobPtr& operator++();
    StrBlobPtr& operator++(int);

};

#endif

