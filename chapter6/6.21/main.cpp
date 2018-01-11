/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时04分39秒
 ************************************************************************/

#include <iostream>
using namespace std;

int compare_s(const int &a,const int *b)
{
    if(a > *b) return a;
    return *b;
}

int main(int argc, char **argv)
{
    cout<<"primer 6.21\n";

    int *p;
    *p = 12;
    int n;
    cin>>n;
    cout<<compare_s(n,p)<<endl;
    return 0;
}
