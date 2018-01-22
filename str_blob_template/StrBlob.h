/*************************************************************************
	> File Name: StrBlob.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 10时32分44秒
 ************************************************************************/
#ifndef _STRBLOB_H
#define _STRBLOB_H

#include <memory>
#include <string>
#include <vector>
#include <exception>
#include <stdexcept>
#include "StrBlobPtr.h"

using std::vector;
using std::shared_ptr;
using std::string;
using std::initializer_list;
using std::out_of_range;
using std::make_shared;

template <typename T>
class StrBlobPtr;
template <typename T>
class StrBlob
{
    friend class StrBlobPtr<T>;
public:
    typedef typename vector<T>::size_type size_type;
private:
    shared_ptr<vector<T>> _data;

    void check_out(typename StrBlob::size_type size, const string  &msg)const;
public:
    StrBlob();
    StrBlob(initializer_list<T> init);
    StrBlob(const StrBlob &sbb);
    StrBlob &operator=(const StrBlob &sbb);

    bool is_empty() const;
    typename StrBlob::size_type size() const;

    void push_back(const T &str);
    void push_back(T &&str);
    void pop_back();

    T front();
    T back();

    const T front() const;
    const T back() const;

    typename vector<T>::iterator begin();
    typename vector<T>::iterator end();
};

#endif

