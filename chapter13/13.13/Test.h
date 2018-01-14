/*************************************************************************
	> File Name: Test.h
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 13时18分37秒
 ************************************************************************/
#ifndef _TEST_H
#define _TEST_H
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

class Test
{
public:
    string str;
    Test()
    {
        cout<<"Test()\n";
    }

    Test(const string &st):str(st)
    {
        cout<<"Test() "<<str<<endl;
    }

    Test(const Test &test):str(test.str)
    {
        cout<<"Test(const Test &test) "<<str<<endl;
    }

    ~Test()
    {
        cout<<"~Test() "<<str<<endl;
    }
};

#endif

