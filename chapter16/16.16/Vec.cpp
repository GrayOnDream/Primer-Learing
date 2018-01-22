/*************************************************************************
	> File Name: Vec.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 03时50分11秒
 ************************************************************************/
#include "Vec.h"

template<typename T>
allocator<T> Vec<T>::_alloc;

template<typename T>
Vec<T>::Vec():_begin(nullptr),_end(nullptr),_real_end(nullptr)
{}

template<typename T>
size_t Vec<T>::size() const
{
    return _end - _begin;
}

template<typename T>
size_t Vec<T>::capacity() const
{
    return _real_end - _begin;
}

template<typename T>
T *Vec<T>::begin() const
{
    return _begin;
}

template<typename T>
T *Vec<T>::end() const
{
    return _end;
}

template<typename T>
pair<T*, T*> Vec<T>::allocate_n_copy(const T *beg, const T *ed)
{
    auto data = _alloc.allocate(ed - beg);
    return pair<T*,T*>(data, uninitialized_copy(beg, ed, data));
}

template<typename T>
void Vec<T>::check_n_allocate()
{
    if(size() == capacity()) reallocate();
}

template<typename T>
void Vec<T>::free()
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


template<typename T>
void Vec<T>::push_back(const T &str)
{
    check_n_allocate();
    _alloc.construct(_end ++, str);
}

template<typename T>
Vec<T>::Vec(const Vec &vec)
{
    auto ptr = allocate_n_copy(vec.begin(),vec.end());
    _begin = ptr.first;
    _end = _real_end = ptr.second;
}

template<typename T>
Vec<T>::Vec(const initializer_list<T> lst)
{
    auto ptr = allocate_n_copy(lst.begin(),lst.end());
    _begin = ptr.first;
    _end = _real_end = ptr.second;
}

template<typename T>
Vec<T>& Vec<T>::operator=(const initializer_list<T> lst)
{
    auto ptr = allocate_n_copy(lst.begin(),lst.end());
    free();
    _begin = ptr.first;
    _end = _real_end = ptr.second;
    return *this;
}

template<typename T>
Vec<T> &Vec<T>::operator=(const Vec &vec)
{
    auto ptr = allocate_n_copy(vec.begin(),vec.end());
    free();
    _begin = ptr.first;
    _end = _real_end = ptr.second;
    return *this;
}

template<typename T>
T& Vec<T>::operator[](size_t size)
{
    if(size <= (_end - _begin))
    {
       return *(_begin + size);
    }
}

template<typename T>
const T& Vec<T>::operator[](size_t size)const
{
    if(size <= (_end - _begin))
    {
        return *(_begin + size);
    }
}

template<typename T>
Vec<T>::Vec(Vec &&vec)noexcept
    :_begin(vec._begin),_end(vec._end),_real_end(vec._real_end) 
{
    vec._begin = vec._end = vec._real_end = nullptr;
}

template<typename T>
Vec<T> &Vec<T>::operator=(Vec &&vec)noexcept
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

template<typename T>
void Vec<T>::reallocate()
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

template<typename T>
void Vec<T>::resize(size_t sz)
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

template<typename T>
void Vec<T>::reserve()
{
    for(auto i = 0;i < size()/2; i++)
    {
        swap(*(_begin + i), *(_end - i - 1));
    }
}

template<typename T>
Vec<T>::~Vec()
{
    free();
}
