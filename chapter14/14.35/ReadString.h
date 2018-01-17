/*************************************************************************
	> File Name: ReadString.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 14时52分14秒
 ************************************************************************/
#ifndef _READSTRING_H
#define _READSTRING_H
#include <iostream>
#include <string>
using std::istream;
using std::string;
class ReadString
{
private:
    istream &_is;
public:
    ReadString(istream &is):_is(is){}
    void operator()(string &str)
    {
        _is>>str;
    }
};

#endif

