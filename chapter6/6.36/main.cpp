/*************************************************************************
	> File Name: 6.36/main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 22时09分54秒
 ************************************************************************/
#include <string>
#include <iostream>
using namespace std;

string (&fun(int n))[10]
{
    cout<<n<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.36\n";
    fun(1);

    return 0;
}
