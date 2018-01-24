/*************************************************************************
	> File Name: exper.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 10时01分56秒
 ************************************************************************/
#ifndef _EXPER_H
#define _EXPER_H
#include <cstdlib>
#include <stdexcept>
using std::bad_alloc;

class Exper
{
public:
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
};
#endif

