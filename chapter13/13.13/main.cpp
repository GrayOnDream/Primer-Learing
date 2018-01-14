/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月14日 星期日 13时24分15秒
 ************************************************************************/
#include "Test.h"
#include <iostream>
#include <memory>
using namespace std;

Test func(const Test &t)
{
    Test t1("common constructor in func");
    shared_ptr<Test> p = make_shared<Test>(Test("shared_ptr in func"));
    return Test("common constructor as return value");
}

int main(int argc, char **argv)
{
    cout<<"primer 13.13\n";
    Test t("common constructor out range");
    shared_ptr<Test> p = make_shared<Test>(Test("shared_ptr out range"));
    {

        Test t1("common constructor in {}");
        shared_ptr<Test> p = make_shared<Test>(Test("shared_ptr in {}"));
    }

    func(Test("common constructor as parameter out range"));

    return 0;
}
