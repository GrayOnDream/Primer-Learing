/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月06日 星期六 20时36分16秒
 ************************************************************************/

#include <iostream>
using namespace std;

#define size_print(x) cout<<"sizeof "<<#x<<"\t"<<sizeof(x)<<endl
int main(int argc, char **argv)
{
    cout<<"Algorithm 4.28\n";

    int *p;
    int a[4];

    size_print(char);
    size_print(short);
    size_print(unsigned int);
    size_print(int);
    size_print(float);
    size_print(double);
    size_print(long);
    size_print(long long);
    size_print(p);
    size_print(*p);
    size_print(a);

    int x = 2,y = 3;
    cout<<(sizeof x + y)<<endl;
    cout<<(sizeof x < y)<<endl;

    return 0;
}
