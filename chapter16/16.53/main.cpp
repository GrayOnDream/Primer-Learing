/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月22日 星期一 12时25分50秒
 ************************************************************************/

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

int main(int argc, char **argv)
{
    cout<<"primer 16.53\n";
    print(cout,1,2,3,4,5,6);
    print(cout,"w",1.1,2);
    return 0;
}
