/*************************************************************************
	> File Name: QueryResult.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 10时39分59秒
 ************************************************************************/
#ifndef _QUERYRESULT_H
#define _QUERYRESULT_H
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <set>
#include <memory>

using std::set;
using std::map;
using std::string;
using std::shared_ptr;
using std::make_shared;

class QueryResult
{
private:
    map< string, shared_ptr<set<size_t>>> _map;
public:
    QueryResult(){}
    QueryResult(const string &str, set<size_t> line)
    {
        _map[str] = make_shared<set<size_t>>(line);
    }

    void push_back(const string &str, set<size_t> &s)
    {
        _map[str] = make_shared<set<size_t>>(s);
    }

    set<size_t> &get_lines(const string &str)
    {
        return *_map[str];
    }
};

#endif
