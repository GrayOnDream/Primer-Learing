/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 15时25分26秒
 ************************************************************************/
#include <functional>
#include <string>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 14.44\n";
    function<int(int,int)> func;
    map<string, function<int(int,int)>> m;
    m["+"] = [](int a,int b){return a+b;};
    m["-"] = [](int a,int b){return a-b;};
    m["*"] = [](int a,int b){return a*b;};
    m["/"] = [](int a,int b){return a/b;};

    cout<<m["+"](11,3)<<endl;
    cout<<m["-"](11,3)<<endl;
    cout<<m["*"](11,3)<<endl;
    cout<<m["/"](11,3)<<endl;
    return 0;
}
