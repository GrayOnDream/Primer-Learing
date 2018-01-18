/*************************************************************************
	> File Name: QueryAnd.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 21时51分14秒
 ************************************************************************/
#include "QueryOr.h"
#include <memory>
#include "Query.h"
using std::shared_ptr;

Query operator&(const Query &rst, const Query &snd)
{
    return shared_ptr<QueryBase>(new QueryOr(rst,snd));
}

QueryResult QueryOr::eval(const QueryText &text) const
{
    auto right = _rst.eval(text);
    auto left  = _snd.eval(text);
    
    auto ret = make_shared<set<size_t>>(left.begin(),left.end());
    ret->insert(right.begin(),right.end());
    return QueryResult(rep(),ret);
}
