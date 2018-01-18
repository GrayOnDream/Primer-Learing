/*************************************************************************
	> File Name: QueryAnd.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 21时48分24秒
 ************************************************************************/
#ifndef _QUERYAND_H
#define _QUERYAND_H
#include "QueryBinary.h"
#include "QueryText.h"
#include "QueryResult.h"

class QueryAnd : public QueryBinary
{
    friend Query opertor&(const Query&,const Query &);
private:
    QueryAnd(const Query &rst,const Query &snd)
        :QueryBinary( rst, snd, "&")
    {}
private:
    QueryResult eval(const QueryText &) const;
};

#endif

