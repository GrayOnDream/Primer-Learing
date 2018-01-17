/*************************************************************************
	> File Name: StrVector.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 03时50分11秒
 ************************************************************************/
#include "StrVector.h"

allocator<string> StrVector::_alloc;
StrVector::StrVector():_begin(nullptr),_end(nullptr),_real_end(nullptr)
{}

size_t StrVector::size() const
{
    return _end - _begin;
}

size_t StrVector::capacity() const
{
    return _real_end - _begin;
}

string *StrVector::begin() const
{
    return _begin;
}

string *StrVector::end() const
{
    return _end;
}

pair<string*, string*> StrVector::allocate_n_copy(const string *beg, const string *ed)
{
    auto data = _alloc.allocate(ed - beg);
    return pair<string*,string*>(data, uninitialized_copy(beg, ed, data));
}

void StrVector::check_n_allocate()
{
    if(size() == capacity()) reallocate();
}

void StrVector::free()
{
    if(_begin)
    {
        for(auto ptr = _end; ptr != _begin;)

        {
            _alloc.destroy(--ptr);
        }

        _alloc.deallocate(_begin, _real_end - _begin);
    }
}


void StrVector::push_back(const string &str)
{
    check_n_allocate();
    _alloc.construct(_end ++, str);
}

StrVector::StrVector(const StrVector &vec)
{
    auto ptr = allocate_n_copy(vec.begin(),vec.end());
    _begin = ptr.first;
    _end = _real_end = ptr.second;
}

StrVector::StrVector(const initializer_list<string> lst)
{
    auto ptr = allocate_n_copy(lst.begin(),lst.end());
    _begin = ptr.first;
    _end = _real_end = ptr.second;
}

StrVector& StrVector::operator=(const initializer_list<string> lst)
{
    auto ptr = allocate_n_copy(lst.begin(),lst.end());
    free();
    _begin = ptr.first;
    _end = _real_end = ptr.second;
    return *this;
}

StrVector &StrVector::operator=(const StrVector &vec)
{
    auto ptr = allocate_n_copy(vec.begin(),vec.end());
    free();
    _begin = ptr.first;
    _end = _real_end = ptr.second;
    return *this;
}

StrVector::StrVector(StrVector &&vec)noexcept
    :_begin(vec._begin),_end(vec._end),_real_end(vec._real_end) 
{
    vec._begin = vec._end = vec._real_end = nullptr;
}

StrVector &StrVector::operator=(StrVector &&vec)noexcept
{
    if(_begin != nullptr)
    {
        free();                 //free the exist memory
        _begin = vec._begin;
        _end = vec._end;
        _real_end = vec._real_end;
        vec._begin = vec._end = vec._real_end = nullptr;
    }
}

void StrVector::reallocate()
{
    size_t newsize = size()?2 * size() : 4;
    auto first= _alloc.allocate(newsize);
    auto last = uninitialized_copy(make_move_iterator(begin()),make_move_iterator(end()), first);
    auto old = _begin;

    free();
    _begin = first;
    _end = last;
    _real_end = _begin + newsize;
}

void StrVector::resize(size_t sz)
{
    size_t newsize = 0;
    if(sz < size()) return;
    newsize = sz;
    auto data = _alloc.allocate(newsize);
    auto dest = data;
    auto old = _begin;
    for(size_t i = 0;i != size();i ++)
    {
        _alloc.construct(dest++,std::move(*old++));
    }

    free();
    _begin = data;
    _end = dest;
    _real_end = _begin + newsize;
    
}

void StrVector::reserve()
{
    for(auto i = 0;i < size()/2; i++)
    {
        swap(*(_begin + i), *(_end - i - 1));
    }
}

StrVector::~StrVector()
{
    free();
}
