/*************************************************************************
	> File Name: QueryText.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 10时39分45秒
 ************************************************************************/
#ifndef _QUERYTEXT_H
#define _QUERYTEXT_H
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <set>
#include <memory>
#include "QueryResult.h"
#include "DebugDelete.h"

using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::istream;
using std::map;
using std::string;
using std::istringstream;
using std::set;
using std::ostream;
using std::ifstream;
using std::ofstream;

class QueryResult;
class QueryText
{
private:
    QueryResult _result;
    ifstream is;
    shared_ptr<vector<string>> _data;
    DebugDelete _debug;
public:

    QueryText(const string &filename):is(filename),_data(make_shared<vector<string>>(vector<string>())){}
    /*
     * 也可以经数据读取的进程推迟，直到第一次查询才读取数据
     */
    void read_data();

    void query_word(const string &str);

    void print_lines(ostream &os,const string &str);
};
#endif 
