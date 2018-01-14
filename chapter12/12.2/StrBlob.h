/*************************************************************************
	> File Name: StrBlob.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 10时32分44秒
 ************************************************************************/
#ifndef _STRBLOB_H
#define _STRBLOB_H

#include <memory>
#include <string>
#include <vector>
#include <exception>
#include <stdexcept>

using std::vector;
using std::shared_ptr;
using std::string;
using std::initializer_list;
using std::out_of_range;
using std::make_shared;

class StrBlob
{
public:
    typedef vector<string>::size_type size_type;
private:
    shared_ptr<vector<string>> _data;

    void check_out(size_type size, const string &msg)const;
public:
    StrBlob();
    StrBlob(initializer_list<string> init);

    bool is_empty() const;
    size_type size() const;

    void push_back(const string &str);
    void pop_back();

    string front();
    string back();

    const string front() const;
    const string back() const;
};

#endif

