/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 06时57分40秒
 ************************************************************************/

#include <iostream>
using namespace std;

size_t abs_m(int n)
{
    return n < 0?-n:n;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.5\n";
    cout<<abs_m(-2)<<endl;    
    cout<<abs_m(2)<<endl;    

    return 0;
}
