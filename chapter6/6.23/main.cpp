/*************************************************************************
	> File Name: main.cpp
	> Author: 
	> Description: 
	> Mail: 
	> Created Time: 2018年01月07日 星期日 21时13分21秒
 ************************************************************************/

#include <iostream>
using namespace std;

void print_i(const int &n)
{
    cout<<n<<endl;
}

void print_a(const int *p,size_t len)
{
    for(size_t i = 0;i < len;i ++)
    {
        cout<<p[i]<<"\t";
    }
}

void print_a(const int (&p)[2])
{
    for(auto c:p)
    {
        cout<<c<<"\t";
    }
}

int main(int argc, char **argv)
{
    cout<<"primer 6.23\n";
    int b[2] = {23,43};
    int a = 1;
    print_i(a);
    print_a(b,2);
    print_a(b);

    return 0;
}
