/*************************************************************************
	> File Name: StrBlobPtr.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 15时19分41秒
 ************************************************************************/
#include "StrBlobPtr.h"

StrBlobPtr::StrBlobPtr(StrBlob* b,size_t size)
    :_ptr(b->_data),_curr(size)
{}

string &StrBlobPtr::derdef() const
{
    auto p = check(_curr,"got reference");
    return (*p)[_curr];
}

StrBlobPtr& StrBlobPtr::incr()
{
    check(_curr,"increate in StrBlobPtr");
    ++_curr;
    return *this;
}

shared_ptr<vector<string>> StrBlobPtr::check(size_t size,const string &str) const
{
    auto ret = _ptr.lock();
    if(!ret)
    {
        throw runtime_error("no member!\n");
    }

    if(size >= ret->size())
    {
        throw out_of_range(str);
    }

    return ret;
}

StrBlobPtr& StrBlobPtr::operator++()
{
    check(_curr,"the index is in the end of vector");
    _curr++;
    return *this;
}

StrBlobPtr& StrBlobPtr::operator++(int)
{
    StrBlobPtr ret = *this;
    ++*this;
    return ret;
}
