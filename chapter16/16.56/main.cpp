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
ostream &print(ostream &os, T t)
{
    return os << t << endl;
}

template <typename T, typename ... Args>
ostream &print(ostream &os, const T &t, Args ... args)
{
    os << t << ",";
    return print( os, args...);
}

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
        ret << " "<<debug_rep(*p);
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

template <typename ... Args>
ostream &errMsg(ostream &os,Args ... args)
{
    return print(os,debug_rep(args)...);   
}

int main(int argc, char **argv)
{
    cout<<"primer 16.48\n";
    errMsg(cout,"what",1,"can not");
    return 0;
}
