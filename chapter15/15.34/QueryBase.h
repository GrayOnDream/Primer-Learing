/*************************************************************************
	> File Name: QueryBase.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 20时28分03秒
 ************************************************************************/
#ifndef _QUERYBASE_H
#define _QUERYBASE_H
#include <string>
#include "QueryResult.h"
#include "QueryText.h"

using std::string;

class Query;
class QueryBase
{
private:
    friend class Query;
protected:
    virtual ~QueryBase() = default;
private:
    virtual QueryResult eval(const QueryText &) = 0;
    virtual string rep() const = 0; 
};

#endif

