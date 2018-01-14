/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月13日 星期六 14时49分07秒
 ************************************************************************/
#include <memory>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    cout<<"primer 12.31\n";

    auto p = make_shared<int>();
    auto q = p.get();
    //error can not do that
    delete q;

    return 0;
}
