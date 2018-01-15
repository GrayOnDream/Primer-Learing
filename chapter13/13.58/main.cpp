/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月16日 星期二 06时52分04秒
 ************************************************************************/

#include <iostream>
using namespace std;

class Foo
{
public:
    Foo sorted()const &
    {
        Foo ret(*this);
        cout<<"Foo sorted()const &\n";
        return ret.sorted();
    }

    Foo fucked()const &
    {
        return Foo(*this).fucked();
    }
};

int main(int argc, char **argv)
{
    cout<<"primer 13.58\n";
    Foo foo;
    if(argc > 1)
    {
        foo.sorted(); //无限循环
    }
    else
    {
        foo.fucked(); //段核心转储
    }

    return 0;
}
