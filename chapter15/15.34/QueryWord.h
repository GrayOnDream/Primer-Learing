/*************************************************************************
	> File Name: QueryWord.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 20时42分09秒
 ************************************************************************/
#ifndef _QUERYWORD_H
#define _QUERYWORD_H
#include "QueryBase.h"
#include "Query.h"
#include <string>

using std::string;

class QueryWord : public QueryBase
{
    friend class Query;
private:
    string _query_word;
private:
    QueryWord(const string &str):_query_word(str){}
private:
    string rep() const { return _query_word; }
    QueryResult eval(const QueryText &query) const
    {
        return query.query(_query_word);
    }
};
#endif

