/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月23日 星期二 17时24分37秒
 ************************************************************************/

#include <iostream>
using namespace std;

namespace vec
{
    void compute()
    {
        cout<<"vec_compute()"<<endl;
    }

    void compute(const void *p)
    {
        cout<<"compute_const_void"<<endl;
    }
}
void compute(int a)
{
    cout<<"compute_int"<<endl;
}

void compute(double a)
{
    cout<<"compute_double"<<endl;
}

void compute(double a,double c =  0)
{
    cout<<"compute_double_double"<<endl;
}

void compute(char *p,char *ptr = 0)
{
    cout<<"compute_char_char"<<endl;
}

int main(int argc, char **argv)
{
    cout<<"primer 18.20\n";
    using vec::compute;
    compute(0);
    return 0;
}
