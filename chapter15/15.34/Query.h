/*************************************************************************
	> File Name: Query.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 20时31分00秒
 ************************************************************************/
#ifndef _QUERY_H
#define _QUERY_H
#include "QueryBase.h"
#include <memory>
#include <string>

using std::make_shared;
using shared_ptr;

class Query
{
    friend operator &(const Query&,const Query&);
    friend operator |(const Query&,const Query&);
    friend operator ~(const Query&);
private:
    shared_ptr<QueryBase> ptr;
    Query(shared_ptr<QueryBase> query):ptr(query){}
public:
    Query(const string&);
    QueryResult eval(const QueryText& query) const
    {
        return ptr->eval(query);
    }

    string rep() const 
    {
        return ptr->rep();
    }
};

#endif

