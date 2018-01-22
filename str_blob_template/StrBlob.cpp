/*************************************************************************
	> File Name: StrBlob.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 13时51分28秒
 ************************************************************************/
#include "StrBlob.h"

template<typename T>
StrBlob<T>::StrBlob()
    :_data(make_shared<vector<T>>())
{}

template<typename T>
StrBlob<T>::StrBlob(initializer_list<T> init)
    :_data(make_shared<vector<T>>(init))
{}

template<typename T>
StrBlob<T>::StrBlob(const StrBlob &sbb)
{
    this->_data = make_shared<vector<T>>(vector<T>(*sbb._data));
}

template<typename T>
StrBlob<T> &StrBlob<T>::operator=(const StrBlob &sbb)
{
    this->_data = make_shared<vector<T>>(vector<T>(*sbb._data));
    return *this;
}

template<typename T>
void StrBlob<T>::check_out(typename StrBlob<T>::size_type size, const string &msg)const
{
    if(size >= _data->size())
    {
        throw out_of_range(msg);
    }
}

template<typename T>
bool StrBlob<T>::is_empty() const
{
    return _data->empty();
}

template<typename T>
typename StrBlob<T>::size_type StrBlob<T>::size() const
{
    return _data->size();
}

template<typename T>
void StrBlob<T>::push_back(const T &str)
{
    _data->push_back(str);
}

template<typename T>
void StrBlob<T>::push_back(T &&str)
{
    _data->push_back(std::move(str));
}

template<typename T>
void StrBlob<T>::pop_back()
{
    check_out(0,"size is zero,can not pop anything\n");
    _data->pop_back();
}

template<typename T>
T StrBlob<T>::front()
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->front();
}

template<typename T>
T StrBlob<T>::back()
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->back();
}

template<typename T>
const T StrBlob<T>::front() const
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->front();
}

template<typename T>
const T StrBlob<T>::back() const
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->back();
}

template<typename T>
typename vector<T>::iterator StrBlob<T>::begin()
{
    return _data->begin();
}

template<typename T>
typename vector<T>::iterator StrBlob<T>::end()
{
    return _data->end();
}
