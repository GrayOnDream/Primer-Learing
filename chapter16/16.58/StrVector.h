/*************************************************************************
	> File Name: StrVector.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 03时49分56秒
 ************************************************************************/
#ifndef _STRVECTOR_H
#define _STRVECTOR_H

#include <string>
#include <utility>
#include <memory>
#include <initializer_list>

using std::initializer_list;
using std::string;
using std::allocator;
using std::pair;
using std::forward;

class StrVector
{
private:
    static allocator<string> _alloc;    
    
    string *_begin;
    string *_end;
    string *_real_end;
private:
    void free();
    void reallocate();
    pair< string*, string*> allocate_n_copy(const string *beg, const string *ed);
    void check_n_allocate();
public:
    StrVector();
    StrVector(const StrVector &vec);
    StrVector(const initializer_list<string> lst);
    StrVector& operator=(const StrVector &vec);
    StrVector& operator=(const initializer_list<string> lst);
    string & operator[](size_t index);
    const string & operator[](size_t index)const;
    StrVector(StrVector &&vec)noexcept;
    StrVector& operator=(StrVector &&vec)noexcept;
    ~StrVector();
public:
    size_t size() const;
    size_t capacity() const;
    string *begin()   const;
    string *end()     const;

    void push_back(const string &str);
    void resize(size_t sz);
    void reserve();
    template<class ... Args> void emplace_back(Args &&...);
};


#endif

