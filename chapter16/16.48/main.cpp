/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 12时00分33秒
 ************************************************************************/
#include <sstream>
#include <string>
#include <iostream>
using namespace std;

template <typename T>
string debug_rep(const T& t)
{
    ostringstream ret;
    ret << t;
    return ret.str();
}

template <typename T>
string debug_rep(T *p)
{
    ostringstream ret;
    ret << "pointer"<<p;
    if(p)
    {
        ret << " "<<debug_ret(*p);
    }
    else
    {
        ret << "nullptr";
    }

    return ret.str();
}

string debug_rep(const string &str)
{
    return '"' + str + '"';
}

int main(int argc, char **argv)
{
    cout<<"primer 16.48\n";

    return 0;
}
