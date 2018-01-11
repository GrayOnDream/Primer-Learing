/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 07时01分07秒
 ************************************************************************/

#include <iostream>
using namespace std;

size_t function(int n)
{
    static size_t count = 0;
    ++ count;
    cout<<"function is running!"<<count<<"times!\n";
    return n;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.6\n";
    int n = 0;
    while(cin>>n)
    {
        function(n);
    }

    return 0;
}
