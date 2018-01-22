/*************************************************************************
	> File Name: Vec.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 03时49分56秒
 ************************************************************************/
#ifndef _Vec_H
#define _Vec_H

#include <utility>
#include <memory>
#include <initializer_list>

using std::initializer_list;
using std::allocator;
using std::pair;

template <typename T>
class Vec
{
private:
    static allocator<T> _alloc;    
    
    T *_begin;
    T *_end;
    T *_real_end;
private:
    void free();
    void reallocate();
    pair< T*, T*> allocate_n_copy(const T *beg, const T *ed);
    void check_n_allocate();
public:
    Vec();
    Vec(const Vec &vec);
    Vec(const initializer_list<T> lst);
    Vec& operator=(const Vec &vec);
    Vec& operator=(const initializer_list<T> lst);
    T & operator[](size_t index);
    const T & operator[](size_t index)const;
    Vec(Vec &&vec)noexcept;
    Vec& operator=(Vec &&vec)noexcept;
    ~Vec();
public:
    size_t size() const;
    size_t capacity() const;
    T *begin()   const;
    T *end()     const;

    void push_back(const T &str);
    void resize(size_t sz);
    void reserve();
};


#endif

