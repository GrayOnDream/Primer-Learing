/*************************************************************************
	> File Name: operator_new.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 09时38分27秒
 ************************************************************************/
#ifndef _OPERATOR_NEW_H
#define _OPERATOR_NEW_H
#include <cstdlib>
#include  <stdexcept>
#include <iostream>

using std::bad_alloc;

void *operator new(size_t size)
{
    void *p = malloc(size);
    if(p)
    {
        return p;
    }
    else
    {
        throw bad_alloc();
    }
}

void operator delete(void *p)
{
    if(p)
    {
        free(p);
        p = nullptr;
    }
}

#endif

