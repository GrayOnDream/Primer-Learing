/*************************************************************************
	> File Name: StrBlobPtr.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 15时19分41秒
 ************************************************************************/
#include "StrBlobPtr.h"

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
