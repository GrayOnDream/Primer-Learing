/*************************************************************************
	> File Name: StrBlob.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 13时51分28秒
 ************************************************************************/
#include "StrBlob.h"

StrBlob::StrBlob()
    :_data(make_shared<vector<string>>())
{}

StrBlob::StrBlob(initializer_list<string> init)
    :_data(make_shared<vector<string>>(init))
{}

StrBlob::StrBlob(const StrBlob &sbb)
{
    this->_data = make_shared<vector<string>>(vector<string>(*sbb._data));
}

StrBlob &StrBlob::operator=(const StrBlob &sbb)
{
    this->_data = make_shared<vector<string>>(vector<string>(*sbb._data));
    return *this;
}

void StrBlob::check_out(StrBlob::size_type size, const string &msg)const
{
    if(size >= _data->size())
    {
        throw out_of_range(msg);
    }
}

bool StrBlob::is_empty() const
{
    return _data->empty();
}

StrBlob::size_type StrBlob::size()const
{
    return _data->size();
}

void StrBlob::push_back(const string &str)
{
    _data->push_back(str);
}

void StrBlob::pop_back()
{
    check_out(0,"size is zero,can not pop anything\n");
    _data->pop_back();
}

string StrBlob::front()
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->front();
}

string StrBlob::back()
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->back();
}

const string StrBlob::front() const
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->front();
}

const string StrBlob::back() const
{
    check_out(0,"size is zero,can not pop anything\n");
    return _data->back();
}

vector<string>::iterator StrBlob::begin()
{
    return _data->begin();
}

vector<string>::iterator StrBlob::end()
{
    return _data->end();
}
