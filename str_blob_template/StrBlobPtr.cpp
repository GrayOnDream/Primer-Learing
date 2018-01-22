/*************************************************************************
	> File Name: StrBlobPtr.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 15时19分41秒
 ************************************************************************/
#include "StrBlobPtr.h"

template<typename T>
T &StrBlobPtr<T>::derdef() const
{
    auto p = check(_curr,"got reference");
    return (*p)[_curr];
}

template<typename T>
StrBlobPtr<T>& StrBlobPtr<T>::incr()
{
    check(_curr,"increate in StrBlobPtr");
    ++_curr;
    return *this;
}

template<typename T>
shared_ptr<vector<T>> StrBlobPtr<T>::check(size_t size,const string &str) const
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

template<typename T>
StrBlobPtr<T>& StrBlobPtr<T>::operator++()
{
    check(_curr,"the index is in the end of vector");
    _curr++;
    return *this;
}

template<typename T>
StrBlobPtr<T>& StrBlobPtr<T>::operator++(int)
{
    StrBlobPtr ret = *this;
    ++*this;
    return ret;
}
