/*************************************************************************
	> File Name: 6.47/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时36分26秒
 ************************************************************************/
#include <cassert>
#include <iostream>
using namespace std;
#define NDBUG
void fun(int n)
{
    assert(n >= 0);
    cout<<"number:"<<n<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.47\n";
    int n = 0;
    while(cin >> n)
    {
        fun(n);
    }

    return 0;
}
