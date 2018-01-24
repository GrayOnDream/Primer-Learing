/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月24日 星期三 14时08分32秒
 ************************************************************************/

#include <iostream>
using namespace std;

class A
{
public:
    class B{};
};

int main(int argc, char **argv)
{
    cout<<"primer 19.20\n";

    A::B b;
  //error  B b;

    return 0;
}
