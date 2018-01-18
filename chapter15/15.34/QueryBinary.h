/*************************************************************************
	> File Name: QueryBinary.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 21时44分14秒
 ************************************************************************/
#ifndef _QUERYBINARY_H
#define _QUERYBINARY_H
#include "QueryBase.h"
#include <string>

using std::string;

class QueryBinary : public QueryBase
{
protected:
    string _op;
    Query _rst, _snd;
protected:
    QueryBinary(const Query &rst, const Query &snd, const string str)
        :_rst(rst),_snd(snd),_op(op)
    {}

    string rep() const
    {
        return "(" + _rst.rep() + " " + _op + " " + _snd.rep() + ")";
    }
};

#endif

