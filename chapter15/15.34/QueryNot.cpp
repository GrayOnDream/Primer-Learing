/*************************************************************************
	> File Name: QueryNot.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月18日 星期四 21时41分29秒
 ************************************************************************/
#include "QueryNot.h"
#include <memory>

using std::shared_ptr;

Query operator~(const Query &query)
{
    return shared_ptr<QueryBase>(new QueryNot(query));
}

QueryResult QueryNot::eval(const QueryText &text) const
{
    auto result = query.eval(text);
    auto ret = make_shared<set<size_t>>();
    auto beg = result.begin();
    auto end = result.end();
    //maxsize do not defined
    for(int i = 0;i < maxsize;i ++)
    {
        if(beg == end || *beg != i)
        {
            ret->insert(i);
        }
        else if(beg != end)
        {
            ++beg;
        }
    }

    return QueryResult(rep(),ret);
}
