/*************************************************************************
	> File Name: QueryNot.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 21时37分41秒
 ************************************************************************/
#ifndef _QUERYNOT_H
#define _QUERYNOT_H
#include "QueryBase.h"
#include <string>
#include "QueryText.h"
#include "QueryResult.h"

using std::string;

class QueryNot : public QueryBase
{
    friend Query operator~(const Query &);
private:
    Query _query;
private:
    QueryNot(const Query &q):_query(q){}
    string rep() const { retuurn "~(" + query.rep() + ")"; }
    QueryResult eval(const QueryText&) const;
};

#endif

