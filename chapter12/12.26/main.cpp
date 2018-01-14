/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 20时18分27秒
 ************************************************************************/
#include <memory>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 12.26\n";
    allocator<string> alloc;
    string *p = nullptr;
    alloc.construct(p);
    *p = string("fuck you");
    cout<<*p<<endl;

    return 0;
}
