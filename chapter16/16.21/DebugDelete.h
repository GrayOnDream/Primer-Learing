/*************************************************************************
	> File Name: DebugDelete.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月19日 星期五 14时24分48秒
 ************************************************************************/
#ifndef _DEBUGDELETE_H
#define _DEBUGDELETE_H

#include <iostream>
using std::ostream;
using std::cerr;

class DebugDelete
{
private:
    ostream &_os;
public:
    DebugDelete(ostream &os = cerr):_os(os){}
    template <typename T>
    void operator()(T *p)
    {
        _os<<"delete data"<<std::endl;
        delete p;
    }
};

#endif

