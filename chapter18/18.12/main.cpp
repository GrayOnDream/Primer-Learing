/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 17时57分35秒
 ************************************************************************/

#include <iostream>
using namespace std;

class A{};
class B{};
class C:public A,B{};
class D:public A,public A{}; //error
int main(int argc, char **argv)
{
    cout<<"primer 18.12\n";

    return 0;
}
