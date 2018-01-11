/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 06时51分20秒
 ************************************************************************/

#include <iostream>
using namespace std;

size_t fact(size_t n)
{
    size_t result = 1;
    while(n)
    {
        result *= n--;
    }
}
int main(int argc, char **argv)
{
    cout<<"primer 6.3\n";
    int n;
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
}
